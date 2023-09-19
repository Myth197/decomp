/**
 * @file ezloHintManager.c
 * @ingroup Managers
 *
 * @brief Shows Ezlo hints
 */
#include "manager/ezloHintManager.h"
#include "area.h"
#include "asm.h"
#include "entity.h"
#include "flags.h"
#include "functions.h"

static void EzloHintManager_Init(EzloHintManager*);
static void EzloHintManager_Action1(EzloHintManager*);
static void EzloHintManager_Action2(EzloHintManager*);
static void EzloHintManager_Action3(EzloHintManager*);
static void EzloHintManager_Action4(EzloHintManager*);
static u32 PlayerStateValid(EzloHintManager*);
static void EzloHintManager_DeleteIfFlagSet(EzloHintManager*);

void EzloHintManager_Main(EzloHintManager* this) {
    static void (*const EzloHintManager_Actions[])(EzloHintManager*) = {
        EzloHintManager_Init,    EzloHintManager_Action1, EzloHintManager_Action2,
        EzloHintManager_Action3, EzloHintManager_Action4,
    };
    EzloHintManager_Actions[super->action](this);
}

static void EzloHintManager_Init(EzloHintManager* this) {
    if (CheckFlags(this->flag1) != 0) {
        DeleteThisEntity();
    }
    this->rx = this->rx_raw << 3;
    this->ry = this->ry_raw << 3;
    this->x = this->rx + (this->x_raw << 4);
    this->y = this->ry + (this->y_raw << 4);
    SetDefaultPriority((Entity*)this, PRIO_PLAYER_EVENT);
    if (this->flag2 == 0) {
        super->action = 2;
    } else {
        super->action = 1;
    }
}

static void EzloHintManager_Action1(EzloHintManager* this) {
    if (CheckFlags(this->flag2)) {
        super->action = 2;
        EzloHintManager_Action2(this);
    }
}

static void EzloHintManager_Action2(EzloHintManager* this) {
    if (gPlayerState.flags & PL_NO_CAP)
        return;
    if (!CheckPlayerInRegion(this->x, this->y, this->rx, this->ry))
        return;
    switch (super->type) {
        case 1:
            return;
        case 2:
            EzloHintManager_DeleteIfFlagSet(this);
            if ((gPlayerState.flags & PL_MINISH) == 0)
                return;
            // fallthrough
        case 0:
        default:
            EzloHintManager_DeleteIfFlagSet(this);
            if (!PlayerStateValid(this))
                return;
            SetPlayerControl(3);
            sub_08078B48();
            SetPlayerEventPriority();
            super->action = 3;
            super->subAction = 0;
            super->timer = 30;
            return;
        case 3:
            super->action = 4;
            super->subAction = 0;
            SetNextAreaHint(this->msg_idx);
            return;
    }
}

static u32 PlayerStateValid(EzloHintManager* this) {
    switch (gPlayerState.framestate) {
/*0x04*/  case PL_STATE_THROW:
/*0x07*/  case PL_STATE_SWIM:
/*0x08*/  case PL_STATE_PARACHUTE:
/*0x0A*/  case PL_STATE_FALL:
/*0x0B*/  case PL_STATE_JUMP:
/*0x0C*/  case PL_STATE_MINECART:
/*0x0D*/  case PL_STATE_D:
/*0x0E*/  case PL_STATE_USEPORTAL:
/*0x0F*/  case PL_STATE_F:
/*0x10*/  case PL_STATE_TRAPPED:
/*0x11*/  case PL_STATE_11:
/*0x12*/  case PL_STATE_DIE:
/*0x13*/  case PL_STATE_TALKEZLO:
/*0x14*/  case PL_STATE_CAPE:
/*0x15*/  case PL_STATE_ITEMGET:
/*0x16*/  case PL_STATE_DROWN:
/*0x17*/  case PL_STATE_HOLE:
/*0x18*/  case PL_STATE_CLIMB:
/*0x1B*/  case PL_STATE_SINKING:
/*0x1C*/  case PL_STATE_STAIRS:
            return 0;
/*0x06*/  case PL_STATE_6:
/*0x09*/  case PL_STATE_ROLL:
/*0x19*/  case PL_STATE_PUSH:
/*0x1A*/  case PL_STATE_PULL:
          default:
            return 1;
    }
}

static void EzloHintManager_Action3(EzloHintManager* this) {
    switch (super->subAction) {
        case 1:
            if (gPlayerState.flags &
                (PL_BUSY | PL_DROWNING | PL_USE_PORTAL | PL_FALLING | PL_IN_MINECART | PL_CAPTURED))
                return;
            if (gPlayerEntity.z.HALF.HI != 0)
                return;
            gPlayerState.jump_status = 0;
            CreateEzloHint(this->msg_idx, this->msg_height);
            super->subAction++;
            super->timer = 30;
            return;
        case 0:
        case 2:
            if (--super->timer == 0) {
                super->subAction++;
            }
            return;
        case 3:
            /* wait for player to finish talking */
            if (gPlayerEntity.action == PLAYER_NORMAL || gPlayerEntity.action == PLAYER_MINISH) {
                gPlayerState.controlMode = CONTROL_1;
                ResetPlayerEventPriority();
                SetFlag(this->flag1);
                DeleteThisEntity();
            }
            return;
        default:
            return;
    }
}

static void EzloHintManager_Action4(EzloHintManager* this) {
    if (gArea.unk28.textBaseIndex != 0xFF) {
        DeleteThisEntity();
    }
    if (CheckFlags(this->flag1)) {
        sub_0801855C();
        DeleteThisEntity();
    }
}

static void EzloHintManager_DeleteIfFlagSet(EzloHintManager* this) {
    if (CheckFlags(this->flag1)) {
        DeleteThisEntity();
    }
}
