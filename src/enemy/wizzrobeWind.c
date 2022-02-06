/**
 * @file wizzrobeWind.c
 * @ingroup Enemies
 *
 * @brief Wizzrobe Wind enemy
 */

#define NENT_DEPRECATED
#include "global.h"
#include "enemy.h"
#include "enemy/wizzrobe.h"
#include "functions.h"
#include "object.h"

extern void (*const WizzrobeWind_Functions[])(WizzrobeEntity*);
extern void (*const WizzrobeWind_Actions[])(WizzrobeEntity*);

void sub_0802F888(WizzrobeEntity*);
void sub_0802FA48(WizzrobeEntity*);
bool32 sub_0802FA88(WizzrobeEntity*);
void sub_0802F9C8(WizzrobeEntity*);
void sub_0802F8E4(WizzrobeEntity*);

void WizzrobeWind(WizzrobeEntity* this) {
    WizzrobeWind_Functions[GetNextFunction(super)](this);
    SetChildOffset(super, 0, 1, -0x10);
}

void WizzrobeWind_OnTick(WizzrobeEntity* this) {
    WizzrobeWind_Actions[super->action](this);
}

void sub_0802F4E4(WizzrobeEntity* this) {
    if (super->field_0x43 != 0) {
        sub_0804A9FC(super, 0x1c);
    }
    sub_0804AA30(super, WizzrobeWind_Functions);
    if (super->bitfield == 0x87) {
        Entity* obj = CreateObject(OBJECT_2A, 3, 0);
        if (obj != NULL) {
            obj->spritePriority.b0 = 3;
            obj->spriteOffsetY = -4;
            obj->parent = super;
        }
    }
    if (super->health == 0) {
        SetTile(this->tileIndex, this->tilePosition, super->collisionLayer);
    }
}

void WizzrobeWind_Init(WizzrobeEntity* this) {
    Entity* projectile;

    if (super->type2 != 0) {
        super->action = 3;
        super->speed = 0xc0;
        super->flags |= 0x80;
        this->targetIndex = 0;
        super->child = (Entity*)GetCurrentRoomProperty(super->actionDelay);
        sub_0802FA48(this);
        sub_0802FA88(this);
    } else {
        sub_0804A720(super);
        super->action = 1;
        this->timer2 = 0xff;
        this->timer1 = 0x28;
        super->actionDelay = 0x28;
        super->field_0xf = 0x60;
        sub_0802F888(this);
    }
    projectile = CreateProjectileWithParent(super, WIND_PROJECTILE, 0);
    if (projectile != NULL) {
        super->parent = projectile;
        projectile->parent = super;
        projectile->direction = super->direction;
    }
    InitializeAnimation(super, super->direction >> 3);
}

void WizzrobeWind_Action1(WizzrobeEntity* this) {
    u8 tmp;
    Entity* parent;
    switch (this->timer2) {
        case 0xff:
            if (--super->field_0xf == 0) {
                this->timer2 = 0;
            }
            break;
        case 0:
            if (--super->actionDelay == 0) {
                this->timer2++;
                super->actionDelay = 0x10;
                super->flags |= 0x80;
            }
            break;
        case 1:
            if (--super->actionDelay == 0) {
                super->action = 2;
                this->timer2 = 0;
                super->actionDelay = 0x28;
                tmp = super->direction >> 3;
                parent = super->parent;
                parent->actionDelay = 1;
                parent->spriteSettings.draw = 1;
                InitializeAnimation(super, tmp | 4);
            }
            break;
    }
    sub_0802F9C8(this);
}

void WizzrobeWind_Action2(WizzrobeEntity* this) {
    switch (this->timer2) {
        case 0:
            switch (--super->actionDelay) {
                case 0:
                    this->timer2++;
                    super->actionDelay = 0x38;
                    super->field_0xf = 0;
                    super->parent->spriteSettings.draw = 0;
                    break;
                case 8:
                    if (EntityInRectRadius(super, &gPlayerEntity, 0xa0, 0xa0) && CheckOnScreen(super)) {
                        Entity* projectile = CreateProjectileWithParent(super, WIND_PROJECTILE, 1);
                        if (projectile != NULL) {
                            projectile->direction = super->direction & 0x18;
                        }
                    }
                    break;
            }
            break;
        case 1:
            if (--super->actionDelay == 0) {
                this->timer2++;
                this->timer1 = 0x28;
                super->actionDelay = 0x28;
                super->field_0xf = 0;
                super->flags &= 0x7f;
                EnqueueSFX(SFX_156);
                SetTile(this->tileIndex, this->tilePosition, super->collisionLayer);
                InitializeAnimation(super, super->direction >> 3);
            }
            break;
        case 2:
            if (--super->actionDelay == 0) {
                this->timer2++;
                super->actionDelay = (Random() & 0x3f) + 0x20;
                super->spriteSettings.draw = 0;
            }
            break;
        case 3:
            if (--super->actionDelay == 0) {
                super->action = 1;
                this->timer2 = 0;
                this->timer1 = 0x28;
                super->actionDelay = 0x28;
                EnqueueSFX(SFX_156);
                sub_0802F8E4(this);
                InitializeAnimation(super, super->direction >> 3);
            }
            break;
    }
    sub_0802F9C8(this);
}

void WizzrobeWind_Action3(WizzrobeEntity* this) {
    Entity* parent;
    sub_0802FA88(this);
    sub_0802F9C8(this);
    parent = super->parent;
    if (this->timer1 == 0) {

        switch (this->timer2) {
            case 0:
                this->timer2 = 1;
                super->actionDelay = 0x40;
                break;
            case 1:
                if (--super->actionDelay != 0) {
                    return;
                }
                this->timer2++;
                super->actionDelay = 0x28;
                parent->actionDelay = 1;
                parent->spriteSettings.draw = 1;
                InitializeAnimation(super, super->animationState >> 1 | 4);
                break;
            case 2:
                if (--super->actionDelay == 0) {
                    this->timer2++;
                    super->actionDelay = (Random() & 0x1f) + 0x30;
                    parent->spriteSettings.draw = 0;
                    InitializeAnimation(super, super->animationState >> 1);
                } else if (super->actionDelay == 8) {
                    parent = CreateProjectileWithParent(super, WIND_PROJECTILE, 1);
                    if (parent != NULL) {
                        parent->direction = super->direction & 0x18;
                    }
                }
        }
    } else {
        if (this->timer2 != 0) {
            this->timer2 = 0;
            parent->spriteSettings.draw = 0;
        }
    }
}

void sub_0802F888(WizzrobeEntity* this) {
    super->direction = (sub_08049F84(super, 3) + 4) & 0x18;
    this->tilePosition = COORD_TO_TILE(super);
    this->tileIndex = GetTileIndex(this->tilePosition, super->collisionLayer);
    SetTile(0x4071, this->tilePosition, super->collisionLayer);
}

void sub_0802F8E4(WizzrobeEntity* this) {
    u16 uVar1;
    s32 iVar4;
    u32 uVar6;
    u32 uVar7;
    u32 uVar8;

    bool32 loopCondition;
    u32 rand;

    if (super->type2 == 0) {
        loopCondition = TRUE;
        do {
            rand = Random();
            uVar1 = this->unk_70;
            iVar4 = ((s32)rand & 0x7ff0) % (this->unk_6e << 3);
            uVar8 = (uVar1 + iVar4) | 8;
            rand >>= 0x10;
            uVar1 = this->unk_72;
            iVar4 = ((s32)(rand)&0x7ff0) % (this->unk_6f << 3);
            uVar7 = (uVar1 + iVar4) | 8;
            uVar6 = TILE(uVar8, uVar7);
            if ((sub_080002E0(uVar6, super->collisionLayer) == 0) &&
                (GetTileIndex(uVar6, super->collisionLayer) != 0x4071)) {
                super->x.HALF.HI = (s16)uVar8;
                super->y.HALF.HI = (s16)uVar7;
                if (sub_08049FA0(super) != 0) {
                    loopCondition = FALSE;
                }
            }
        } while (loopCondition);
        sub_0802F888(this);
    }
}

void sub_0802F9C8(WizzrobeEntity* this) {
    if (super->field_0xf == 0) {
        if (this->timer1 != 0) {
            if ((--this->timer1 & 1) != 0) {
                super->spriteSettings.draw = 0;
            } else {
                super->spriteSettings.draw = 1;
            }
            if ((super->type2 != 0) && (LinearMoveUpdate(super), this->timer1 == 0)) {
                super->flags |= 0x80;
            }
        } else {
            if (super->type2 != 0) {
                ProcessMovement(super);
                if (super->collisions != 0) {
                    super->flags &= 0x7f;
                    this->timer1 = 0x28;
                }
            }
        }
        GetNextFrame(super);
    }
}

void sub_0802FA48(WizzrobeEntity* this) {
    u16* target;
    u16* child;

    child = (u16*)super->child;
    target = &child[this->targetIndex * 2];
    if (target[0] == 0xffff) {
        this->targetIndex = 0;
        target = child;
    }
    this->targetX = gRoomControls.origin_x + target[0];
    this->targetY = gRoomControls.origin_y + target[1];
}

bool32 sub_0802FA88(WizzrobeEntity* this) {
    u32 direction;
    bool32 result = FALSE;
    if (EntityWithinDistance(super, this->targetX, this->targetY, 2)) {
        this->targetIndex++;
        sub_0802FA48(this);
        direction = CalculateDirectionTo(super->x.HALF.HI, super->y.HALF.HI, this->targetX, this->targetY);
        super->direction = direction;
        super->animationState = ((direction + 4) & 0x18) >> 2;
        if (((super->parent)->spriteSettings.draw & 3) != 0) {
            InitializeAnimation(super, direction >> 3 | 4);
        } else {
            InitializeAnimation(super, direction >> 3);
        }
        result = TRUE;
    } else {
        direction = CalculateDirectionTo(super->x.HALF.HI, super->y.HALF.HI, this->targetX, this->targetY);
        sub_08004596(super, direction);
        direction = ((super->direction + 4) & 0x18) >> 2;
        if (direction != super->animationState) {
            super->animationState = direction;
            InitializeAnimation(super, direction >> 1);
        }
    }
    return result;
}

void (*const WizzrobeWind_Functions[])(WizzrobeEntity*) = {
    WizzrobeWind_OnTick,
    sub_0802F4E4,
    (void (*)(WizzrobeEntity*))sub_08001324,
    (void (*)(WizzrobeEntity*))sub_0804A7D4,
    (void (*)(WizzrobeEntity*))sub_08001242,
    WizzrobeWind_OnTick,
};
void (*const WizzrobeWind_Actions[])(WizzrobeEntity*) = {
    WizzrobeWind_Init,
    WizzrobeWind_Action1,
    WizzrobeWind_Action2,
    WizzrobeWind_Action3,
};