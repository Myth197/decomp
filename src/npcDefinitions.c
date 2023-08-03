#include "entity.h"
#include "definitions.h"

// TODO deduplicate using sprite indices enum
const NPCDefinition gNPCDefinition_3[] = {
/*  { { type, flags, unk, hitbox, gfx, gfx_type, unk2 }, { paletteIndex, unk, shadow, unk2, spriteIndex, spritePriority, draw } } */
    { { 1, 0, 0, 1, 1, 1, 0 }, { 48, 0, 0, 0, SPRITE_FORESTMINISH, 1, 0 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 48, 0, 0, 0, SPRITE_FORESTMINISH, 1, 0 } },
};
const NPCDefinition gNPCDefinition_6[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 2, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_TOWNSPERSON, 1, 1 } },
};
const NPCDefinition gNPCDefinition_7[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } }, 
    { { 1, 0, 0, 1, 2, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } },
    { { 1, 0, 0, 1, 2, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 58, 0, 0, 0, SPRITE_KID, 1, 1 } },
};
const NPCDefinition gNPCDefinition_1B[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 71, 0, 1, 0, SPRITE_TINGLESIBLINGS, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 74, 0, 1, 0, SPRITE_TINGLESIBLINGS, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 73, 0, 1, 0, SPRITE_TINGLESIBLINGS, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 72, 0, 1, 0, SPRITE_TINGLESIBLINGS, 1, 0 } },
};
const NPCDefinition gNPCDefinition_27[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 80, 0, 1, 0, SPRITE_VAATI_1, 1, 0 } },
    { { 1, 0, 0, 1, 2, 1, 0 }, { 283, 0, 1, 0, SPRITE_VAATI, 1, 0 } },
};
const NPCDefinition gNPCDefinition_2B[] = {
    { { 1, 0, 0, 1, 200, 0, 0 }, { 5, 0, 1, 0, SPRITE_CASTORWILDSSTATUE_1, 0, 1 } },
    { { 1, 0, 0, 1, 4, 1, 0 }, { 5, 0, 1, 0, SPRITE_CASTORWILDSSTATUE, 0, 1 } },
};
const NPCDefinition gNPCDefinition_30[] = {
    { { 1, 0, 0, 1, 231, 0, 0 }, { 183, 0, 1, 0, SPRITE_BLADEBROTHERS_0, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 184, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 185, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 186, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 187, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 188, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 189, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
    { { 1, 0, 0, 1, 232, 0, 0 }, { 190, 0, 1, 0, SPRITE_BLADEBROTHERS_1, 1, 1 } },
};
const NPCDefinition gNPCDefinition_33[] = {
    { { 1, 0, 0, 3, 2, 1, 0 }, { 192, 0, 2, 0, SPRITE_GORONMERCHANT_1, 1, 1 } },
    { { 1, 0, 0, 3, 2, 1, 0 }, { 192, 0, 2, 0, SPRITE_GORON, 1, 1 } },
};
const NPCDefinition gNPCDefinition_21[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 79, 0, 1, 0, SPRITE_GHOSTBROTHERS, 1, 0 } },  
    { { 1, 0, 0, 1, 1, 1, 0 }, { 78, 0, 1, 0, SPRITE_GHOSTBROTHERS, 1, 0 } },
    { { 1, 0, 0, 1, 38, 0, 0 }, { 0, 0, 0, 0, SPRITE_OBJECT2A, 3, 0 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 71, 0, 1, 0, SPRITE_TINGLESIBLINGS, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 79, 0, 1, 0, SPRITE_GHOSTBROTHERS, 0, 0 } },  
    { { 1, 0, 0, 1, 1, 1, 0 }, { 78, 0, 1, 0, SPRITE_GHOSTBROTHERS, 0, 0 } },
};
const NPCDefinition gNPCDefinition_5[] = {
    { { 1, 0, 0, 0, 1, 1, 0 }, { 54, 0, 1, 0, SPRITE_NPC5, 1, 1 } },
    { { 1, 0, 0, 0, 0, 0, 0 }, { 54, 0, 1, 0, SPRITE_NPC5, 0, 0 } },
    { { 1, 0, 0, 1, 0, 0, 0 }, { 0, 0, 1, 0, SPRITE_NPC5, 0, 0 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 54, 0, 1, 0, SPRITE_NPC5, 1, 1 } },
};
const NPCDefinition gNPCDefinition_35[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 82, 0, 1, 0, SPRITE_DOG, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 64, 0, 1, 0, SPRITE_DOG_2, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 4, 0, 1, 0, SPRITE_DOG_1, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 83, 0, 1, 0, SPRITE_DOG_2, 1, 1 } },
};
const NPCDefinition gNPCDefinition_2C[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 1, 0, 1, 0, SPRITE_CAT, 1, 0 } },  
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_CAT, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 1, 0, 1, 0, SPRITE_CAT_1, 1, 0 } },  
    { { 1, 0, 0, 1, 1, 1, 0 }, { 4, 0, 1, 0, SPRITE_CAT_1, 1, 0 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 84, 0, 1, 0, SPRITE_CAT_1, 1, 0 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 1, 0, 1, 0, SPRITE_CAT, 1, 0 } },
};
const NPCDefinition gNPCDefinition_37[] = {
    { { 1, 0, 0, 1, 261, 0, 0 }, { 233, 0, 1, 0, SPRITE_REM, 0, 1 } },
    { { 1, 0, 0, 0, 261, 0, 0 }, { 233, 0, 1, 0, SPRITE_REM, 0, 1 } },
    { { 1, 0, 0, 0, 160, 0, 0 }, { 0, 0, 1, 0, SPRITE_REM, 0, 1 } },
    { { 1, 0, 0, 0, 161, 0, 0 }, { 1, 0, 1, 0, SPRITE_REM, 0, 1 } },
    { { 1, 0, 0, 0, 455, 0, 0 }, { 1, 0, 1, 0, SPRITE_REM, 0, 1 } },
    { { 1, 0, 0, 0, 0, 2, 0 }, { 4, 0, 1, 0, SPRITE_REM, 0, 1 } },
};
const NPCDefinition gNPCDefinition_38[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 234, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 234, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 235, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 236, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 237, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 238, 0, 1, 0, SPRITE_TOWNMINISH, 1, 1 } },
};
const NPCDefinition gNPCDefinition_3D[] = {
    { { 1, 0, 0, 5, 57, 0, 0 }, { 60, 0, 0, 0, SPRITE_LIBRARIANS_0, 0, 1 } },
    { { 1, 0, 0, 5, 58, 0, 0 }, { 61, 0, 0, 0, SPRITE_LIBRARIANS_1, 0, 1 } },
};
const NPCDefinition gNPCDefinition_3E[] = {
    { { 1, 0, 0, 1, 2, 1, 0 }, { 247, 0, 1, 0, SPRITE_FARMERS_0, 1, 1 } },
    { { 1, 0, 0, 1, 2, 1, 0 }, { 248, 0, 1, 0, SPRITE_FARMERS_1, 1, 1 } },
};
const NPCDefinition gNPCDefinition_3F[] = {
    { { 1, 0, 0, 5, 288, 0, 0 }, { 249, 0, 0, 0, SPRITE_CARLOV_0, 0, 1 } },
    { { 1, 0, 0, 5, 289, 0, 0 }, { 250, 0, 0, 0, SPRITE_CARLOV_1, 0, 1 } },
};
const NPCDefinition gNPCDefinition_41[] = {
    { { 1, 0, 0, 1, 290, 0, 0 }, { 252, 0, 1, 0, SPRITE_DRLEFT, 0, 1 } },
    { { 1, 0, 0, 0, 291, 0, 0 }, { 252, 0, 0, 0, SPRITE_155, 0, 1 } },
};
const NPCDefinition gNPCDefinition_48[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 259, 0, 1, 0, SPRITE_TEACHERS, 1, 1 } },
    { { 1, 0, 0, 1, 2, 1, 0 }, { 0, 0, 1, 0, SPRITE_TEACHERS_1, 1, 1 } },
};
const NPCDefinition gNPCDefinition_49[] = {
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_0, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_1, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_2, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_3, 1, 1 } },
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_4, 1, 1 } }, 
    { { 1, 0, 0, 1, 1, 1, 0 }, { 260, 0, 1, 0, SPRITE_WINDTRIBESPEOPLE_5, 1, 1 } },
};
const NPCDefinition gNPCDefinition_4A[] = {
    { { 1, 0, 0, 4, 297, 0, 0 }, { 265, 0, 1, 0, SPRITE_GREGAL, 0, 1 } },
    { { 1, 0, 0, 0, 297, 0, 0 }, { 273, 0, 1, 0, SPRITE_GREGAL, 0, 1 } },
    { { 1, 0, 0, 0, 297, 0, 0 }, { 1, 0, 1, 0, SPRITE_GREGAL, 0, 1 } },
    { { 1, 0, 0, 1, 297, 0, 0 }, { 272, 0, 1, 0, SPRITE_GREGAL, 1, 1 } },
};
const NPCDefinition gNPCDefinition_4C[] = {
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 0, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
    { { 1, 0, 0, 0, 398, 0, 0 }, { 282, 0, 0, 0, SPRITE_159, 0, 1 } },
};
const NPCDefinition gNPCDefinition_4F[] = {
    { { 1, 0, 0, 0, 1, 1, 0 }, { 0, 0, 0, 0, SPRITE_NPC4F, 0, 1 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 0, 0, 0, 0, SPRITE_NPC4F, 0, 1 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 1, 0, 0, 0, SPRITE_NPC4F, 0, 1 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 2, 0, 0, 0, SPRITE_NPC4F, 0, 1 } },
};
const NPCDefinition gNPCDefinition_3B[] = {
    { { 1, 0, 0, 0, 2, 1, 0 }, { 312, 0, 0, 0, SPRITE_VAATIREBORNENEMY_0, 0, 1 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 312, 0, 0, 0, SPRITE_VAATIREBORNENEMY_2, 0, 1 } },
    { { 1, 0, 0, 0, 1, 1, 0 }, { 312, 0, 0, 0, SPRITE_VAATIREBORNENEMY_3, 0, 1 } },
    { { 1, 0, 0, 0, 2, 1, 0 }, { 312, 0, 0, 0, SPRITE_VAATIREBORN, 0, 1 } },
    { { 1, 0, 0, 0, 460, 0, 0 }, { 319, 0, 0, 0, SPRITE_MOBLINLADY, 0, 1 } },
    { { 1, 0, 0, 0, 2, 1, 0 }, { 319, 0, 0, 0, SPRITE_MOBLINLADY_1, 0, 1 } },
};
const NPCDefinition gNPCDefinition_52[] = {
    { { 1, 0, 0, 0, 496, 0, 0 }, { 234, 0, 0, 0, SPRITE_GYORGCHILD, 0, 1 } },
    { { 1, 0, 0, 0, 496, 0, 0 }, { 236, 0, 0, 0, SPRITE_GYORGCHILD, 0, 1 } },
    { { 1, 0, 0, 0, 496, 0, 0 }, { 237, 0, 0, 0, SPRITE_GYORGCHILD, 0, 1 } },
    { { 1, 0, 0, 0, 496, 0, 0 }, { 238, 0, 0, 0, SPRITE_GYORGCHILD, 0, 1 } },
    { { 1, 0, 0, 0, 496, 0, 0 }, { 235, 0, 0, 0, SPRITE_GYORGCHILD, 0, 1 } },
};

#define MULTI_FORM(definition_ptr)         \
    {                                      \
        { 2, 0, 0, 0, 0, 0, 0 }, {         \
            .definition = (definition_ptr) \
        }                                  \
    }

const NPCDefinition gNPCDefinitions[] = {
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_0
    { { 1, 0, 0, 1, 1, 1, 0 }, { 49, 0, 0, 0, SPRITE_GENTARI, 1, 0 } },        // GENTARI
    { { 1, 0, 0, 1, 1, 1, 0 }, { 50, 0, 0, 0, SPRITE_FESTARI, 1, 0 } },        // FESTARI
    MULTI_FORM(gNPCDefinition_3),                                              // FOREST_MINISH
    { { 1, 0, 0, 1, 1, 1, 0 }, { 0, 0, 1, 0, SPRITE_POSTMAN, 1, 1 } },         // POSTMAN
    MULTI_FORM(gNPCDefinition_5),                                              // NPC_UNK_5
    MULTI_FORM(gNPCDefinition_6),                                              // TPWNSPERSON
    MULTI_FORM(gNPCDefinition_7),                                              // KID
    { { 1, 0, 0, 1, 2, 1, 0 }, { 0, 0, 1, 0, SPRITE_GUARDWITHSPEAR, 1, 1 } },  // GUARD
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_UNK_9
    { { 1, 0, 0, 5, 59, 0, 0 }, { 65, 0, 0, 0, SPRITE_STAMP, 0, 0 } },         // STAMP
    { { 1, 0, 0, 1, 2, 1, 0 }, { 0, 0, 1, 0, SPRITE_MAID, 1, 1 } },            // MAID
    { { 1, 0, 0, 5, 60, 0, 0 }, { 66, 0, 0, 0, SPRITE_MARCY, 0, 0 } },         // MARCY
    { { 1, 0, 0, 5, 61, 0, 0 }, { 57, 0, 0, 0, SPRITE_WHEATON, 0, 1 } },       // WHEATON
    { { 1, 0, 0, 1, 64, 0, 0 }, { 56, 0, 0, 0, SPRITE_PITA, 0, 1 } },          // PITA
    { { 1, 0, 0, 1, 2, 1, 0 }, { 284, 0, 1, 0, SPRITE_MINISHEZLO, 1, 1 } },    // MINISH_EZLO
    { { 1, 0, 0, 1, 1, 1, 0 }, { 0, 0, 1, 0, SPRITE_MAILBOX, 1, 1 } },         // MAILBOX
    { { 1, 0, 0, 3, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_BEEDLE, 1, 1 } },         // BEEDLE
    { { 1, 0, 0, 1, 1, 1, 0 }, { 63, 0, 1, 0, SPRITE_BROCCO, 1, 1 } },         // BROCCO
    { { 1, 0, 0, 1, 1, 1, 0 }, { 63, 0, 1, 0, SPRITE_SITTINGPERSON, 0, 1 } },  // SITTING_PERSON
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_PINA, 1, 1 } },           // PINA
    { { 1, 0, 0, 1, 2, 1, 0 }, { 55, 0, 1, 0, SPRITE_GUARDWITHSPEAR, 1, 1 } }, // GUARD_1
    { { 1, 0, 0, 1, 1, 1, 0 }, { 70, 0, 1, 0, SPRITE_MAID, 1, 1 } },           // MAID_1
    { { 1, 0, 0, 1, 1, 1, 0 }, { 67, 0, 1, 0, SPRITE_DIN, 1, 1 } },            // DIN
    { { 1, 0, 0, 1, 1, 1, 0 }, { 68, 0, 1, 0, SPRITE_NAYRU, 1, 1 } },          // NAYRU
    { { 1, 0, 0, 1, 1, 1, 0 }, { 69, 0, 1, 0, SPRITE_FARORE, 1, 1 } },         // FARORE
    { { 1, 0, 0, 1, 56, 0, 0 }, { 59, 0, 1, 0, SPRITE_STURGEON, 1, 0 } },      // STURGEON
    MULTI_FORM(gNPCDefinition_1B),                                             // TINGLE_SIBLINGS
    { { 1, 0, 0, 5, 66, 0, 0 }, { 53, 0, 0, 0, SPRITE_STOCKWELL, 0, 0 } },     // STOCKWELL
    { { 1, 0, 0, 1, 68, 0, 0 }, { 75, 0, 1, 0, SPRITE_TALON, 1, 1 } },         // TALON
    { { 1, 0, 0, 1, 1, 1, 0 }, { 76, 0, 1, 0, SPRITE_MALON, 1, 1 } },          // MALON
    { { 1, 0, 0, 1, 1, 1, 0 }, { 1, 0, 1, 0, SPRITE_EPONA, 1, 1 } },           // EPONA
    { { 1, 0, 0, 1, 1, 1, 0 }, { 1, 0, 2, 0, SPRITE_MILKCART, 1, 0 } },        // MILK_CART
    MULTI_FORM(gNPCDefinition_21),                                             // GHOST_BROTHERS
    { { 1, 0, 0, 1, 2, 1, 0 }, { 77, 0, 1, 0, SPRITE_SMITH, 1, 1 } },          // SMITH
    { { 1, 0, 0, 1, 1, 1, 0 }, { 48, 0, 0, 0, SPRITE_FORESTMINISH, 1, 0 } },   // NPC_UNK_23
    { { 1, 0, 0, 1, 1, 1, 0 }, { 55, 0, 0, 0, SPRITE_KINGDALTUS, 1, 0 } },     // KING_DALTUS
    { { 1, 0, 0, 1, 1, 1, 0 }, { 55, 0, 0, 0, SPRITE_MINISTERPOTHO, 1, 0 } },  // MINISTER_POTHO
    { { 1, 0, 0, 1, 1, 1, 0 }, { 55, 0, 0, 0, SPRITE_NPC26, 1, 0 } },          // NPC_UNK_26
    MULTI_FORM(gNPCDefinition_27),                                             // VAATI
    { { 1, 0, 0, 1, 1, 1, 0 }, { 54, 0, 1, 0, SPRITE_NPC5, 1, 0 } },           // ZELDA
    { { 1, 0, 0, 1, 1, 1, 0 }, { 81, 0, 1, 0, SPRITE_MUTOH, 1, 1 } },          // MUTOH
    { { 1, 0, 0, 1, 2, 1, 0 }, { 81, 0, 1, 0, SPRITE_CARPENTER, 1, 1 } },      // CARPENTER
    MULTI_FORM(gNPCDefinition_2B),                                             // CASTOR_WILDS_STATUE
    MULTI_FORM(gNPCDefinition_2C),                                             // CAT
    { { 1, 0, 0, 1, 2, 1, 0 }, { 180, 0, 1, 0, SPRITE_MOUNTAINMINISH, 1, 1 } },// MOUNTAIN_MINISH
    { { 1, 0, 0, 0, 1, 1, 0 }, { 54, 0, 1, 0, SPRITE_NPC5, 1, 1 } },           // ZELDA_FOLLOWER
    { { 1, 0, 0, 3, 2, 1, 0 }, { 181, 0, 1, 0, SPRITE_MELARI, 1, 1 } },        // MELARI
    MULTI_FORM(gNPCDefinition_30),                                             // BLADE_BROTHERS
    { { 1, 0, 0, 3, 1, 1, 0 }, { 191, 0, 0, 0, SPRITE_COW, 0, 1 } },           // COW
    { { 1, 0, 0, 3, 1, 1, 0 }, { 192, 0, 2, 0, SPRITE_GORON, 1, 1 } },         // GORON
    MULTI_FORM(gNPCDefinition_33),                                             // GORON_MERCHANT
    { { 1, 0, 0, 3, 1, 1, 0 }, { 193, 0, 1, 0, SPRITE_GORMAN, 1, 1 } },        // GORMAN
    MULTI_FORM(gNPCDefinition_35),                                             // DOG
    { { 1, 0, 0, 3, 2, 1, 0 }, { 0, 0, 1, 0, SPRITE_SYRUP, 0, 1 } },           // SYRUP
    MULTI_FORM(gNPCDefinition_37),                                             // REM
    MULTI_FORM(gNPCDefinition_38),                                             // TOWN_MINISH
    { { 1, 0, 0, 1, 2, 1, 0 }, { 281, 0, 1, 0, SPRITE_LIBRARI, 1, 1 } },       // LIBRARI
    { { 1, 0, 0, 1, 1, 1, 0 }, { 246, 0, 1, 0, SPRITE_PERCY, 1, 1 } },         // PERCY
    MULTI_FORM(gNPCDefinition_3B),                                             // VAATI_REBORN
    { { 1, 0, 0, 1, 72, 0, 0 }, { 111, 0, 1, 0, SPRITE_BOWMOBLIN, 1, 1 } },    // MOBLIN_LADY
    MULTI_FORM(gNPCDefinition_3D),                                             // LIBRARIANS
    MULTI_FORM(gNPCDefinition_3E),                                             // FARMERS
    MULTI_FORM(gNPCDefinition_3F),                                             // CARLOV
    { { 1, 0, 0, 3, 1, 1, 0 }, { 251, 0, 1, 0, SPRITE_DAMPE, 1, 1 } },         // DAMPE
    MULTI_FORM(gNPCDefinition_41),                                             // DR_LEFT
    { { 1, 0, 0, 0, 1, 1, 0 }, { 253, 0, 1, 0, SPRITE_KINGGUSTAF, 0, 1 } },    // KING_GUSTAF
    { { 1, 0, 0, 1, 1, 1, 0 }, { 254, 0, 1, 0, SPRITE_GINA, 1, 1 } },          // GINA
    { { 1, 0, 0, 1, 1, 1, 0 }, { 255, 0, 1, 0, SPRITE_SIMON, 1, 1 } },         // SIMON
    { { 1, 0, 0, 1, 292, 0, 0 }, { 256, 0, 1, 0, SPRITE_ANJU, 1, 1 } },        // ANJU
    { { 1, 0, 0, 1, 1, 1, 0 }, { 257, 0, 1, 0, SPRITE_MAMA, 1, 1 } },          // MAMA
    { { 1, 0, 0, 5, 293, 0, 0 }, { 258, 0, 0, 0, SPRITE_EMMA, 0, 1 } },        // EMMA
    MULTI_FORM(gNPCDefinition_48),                                             // TEACHERS
    MULTI_FORM(gNPCDefinition_49),                                             // WIND_TRIBESPEOPLE
    MULTI_FORM(gNPCDefinition_4A),                                             // GREGAL
    { { 1, 0, 0, 1, 1, 1, 0 }, { 62, 0, 1, 0, SPRITE_MAYORHAGEN, 1, 1 } },     // MAYOR_HAGEN
    MULTI_FORM(gNPCDefinition_4C),                                             // BIG_GORON
    { { 1, 0, 0, 1, 1, 1, 0 }, { 22, 0, 1, 0, SPRITE_EZLOCAP, 1, 1 } },        // EZLO
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_UNK_4E
    MULTI_FORM(gNPCDefinition_4F),                                             // NPC_UNK_4F
    { { 1, 0, 0, 0, 464, 0, 0 }, { 0, 0, 1, 0, SPRITE_CLOTHESRACK, 0, 1 } },   // CLOTHES_RACK
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // PICOLYTE_BOTTLE
    MULTI_FORM(gNPCDefinition_52),                                             // SMALL_TOWN_MINISH
    { { 1, 0, 0, 1, 2, 1, 0 }, { 355, 0, 1, 0, SPRITE_HURDYGURDYMAN, 1, 1 } }, // HURDY_GURDY_MAN
    { { 1, 0, 0, 1, 67, 0, 0 }, { 0, 0, 1, 0, SPRITE_CUCCOAGGR, 1, 1 } },      // CUCCO
#ifdef EU
    { { 1, 0, 0, 1, 463, 0, 0 }, { 0, 0, 0, 0, 494, 1, 1 } },                  // CUCCO_CHICK
#else
    { { 1, 0, 0, 1, 463, 0, 0 }, { 0, 0, 0, 0, 495, 1, 1 } },                  // CUCCO_CHICK
#endif
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // FUSION_MENU_NPC
#ifdef EU
    { { 1, 0, 0, 3, 348, 0, 0 }, { 88, 0, 0, 0, 393, 0, 1 } },                 // PHONOGRAPH
#else
    { { 1, 0, 0, 3, 348, 0, 0 }, { 88, 0, 0, 0, 394, 0, 1 } },                 // PHONOGRAPH
#endif
    { { 1, 0, 0, 0, 1, 1, 0 }, { 0, 0, 1, 0, SPRITE_97, 0, 1 } },              // NPC_UNK_58
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_1
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_2
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_3
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_4
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_5
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_6
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_7
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_8
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_9
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_10
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_11
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_12
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_13
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_14
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_15
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_16
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_17
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_18
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_19
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_20
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_21
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_22
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_23
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_24
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_25
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_26
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_27
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_28
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_29
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_30
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_31
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_32
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_33
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_34
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_35
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_36
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_37
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_38
    { { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } },                      // NPC_NONE_39
};
