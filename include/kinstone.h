#ifndef KINSTONE_H
#define KINSTONE_H

#include "global.h"
#include "entity.h"

extern void sub_08018C58(u32);

typedef struct {
    u8 _0;
    u8 action;
    u8 _2;
    u8 kinstoneId;
    u8 prevUpdatePriority;
    u8 _5;
    u16 textIndex;
    u16 _8;
    u16 _a;
    Entity* ent;
} FuseInfo;
static_assert(sizeof(FuseInfo) == 0x10);
extern FuseInfo gFuseInfo;

typedef struct {
    u8 objPalette;
    u8 gfxOffsetPiece;
    u8 gfxOffsetFull;
    u8 subtask; // SUBTASK_WORLDEVENT or 0
    u8 worldEventId;
    u8 shape;
    u8 bubbleIcon;
    u8 mapMarkerIcon; // 0 for no map marker
} KinstoneWorldEvent;
// Indexed by kinstoneId
extern const KinstoneWorldEvent gKinstoneWorldEvents[];

typedef enum {
    KINSTONE_0,                                 //  0x00
    FUSION_CLOUD_TOPS_TOP_RIGHT,                //  0x01
    FUSION_CLOUD_TOPS_BOTTOM_LEFT,              //  0x02
    FUSION_CLOUD_TOPS_TOP_LEFT,                 //  0x03
    FUSION_CLOUD_TOPS_MIDDLE,                   //  0x04
    FUSION_CLOUD_TOPS_BOTTOM_RIGHT,             //  0x05
    FUSION_CASTOR_WILDS_STATUE_LEFT,            //  0x06
    FUSION_CASTOR_WILDS_STATUE_MIDDLE,          //  0x07
    FUSION_CASTOR_WILDS_STATUE_RIGHT,           //  0x08
    FUSION_VEIL_FALLS_DOOR,                     //  0x09
    FUSION_WIND_RUINS_BOMB_BAG_CHEST,           //  0x0A
    FUSION_TOWN_NEW_HOUSE,                      //  0x0B
    FUSION_CASTOR_WILDS_WATERFALL,              //  0x0C
    FUSION_CRENEL_NORTH_GOLDEN_TEKTITE,         //  0x0D
    FUSION_BIGGORON,                            //  0x0E
    FUSION_WIND_TRIBE_PORTAL,                   //  0x0F
    FUSION_CASTOR_WILDS_BUTTERFLY,              //  0x10
    FUSION_WESTERN_WOODS_THORNY_TREE,           //  0x11
    FUSION_LAKE_LIBRARI_CRACK,                  //  0x12
    FUSION_VEIL_FALLS_NORTH_WATERFALL,          //  0x13
    FUSION_WITCH_RED_POTION,                    //  0x14
    FUSION_NORTH_HYRULE_FIELD_WATERFALL,        //  0x15
    FUSION_EASTERN_HILLS_BOTTLE_CHEST,          //  0x16
    FUSION_WIND_RUINS_BEANSTALK,                //  0x17
    FUSION_CASTLE_GARDEN_EAST_FOUNTAIN,         //  0x18
    FUSION_ROYAL_VALLEY_BUTTERFLY,              //  0x19
    FUSION_CRENEL_BEANSTALK,                    //  0x1A
    FUSION_TOWN_2ND_HOUSE_RENT,                 //  0x1B
    FUSION_BELARI_REMOTE_BOMBS,                 //  0x1C
    FUSION_VEIL_FALLS_SOUTH_WATERFALL,          //  0x1D
    FUSION_LON_LON_RANCH_PUDDLE,                //  0x1E
    FUSION_VEIL_FALLS_ISLAND,                   //  0x1F
    FUSION_WIND_RUINS_BUTTERFLY,                //  0x20
    FUSION_WESTERN_WOODS_PERCY_FALLEN_TREE,     //  0x21
    FUSION_TRILBY_HIGHLANDS_ISLAND,             //  0x22
    FUSION_LAKE_HYLIA_BEANSTALK,                //  0x23
    FUSION_WESTERN_WOODS_BEANSTALK,             //  0x24
    FUSION_2ND_GORON_WALL,                      //  0x25
    FUSION_4TH_GORON_WALL,                      //  0x26
    FUSION_MINISH_WOODS_THORNY_TREE,            //  0x27
    FUSION_TOWN_GHOST,                          //  0x28
    FUSION_1ST_GORON_WALL,                      //  0x29
    FUSION_3RD_GORON_WALL,                      //  0x2A
    FUSION_5TH_GORON_WALL,                      //  0x2B
    FUSION_MARCY_POST_OFFICE,                   //  0x2C
    FUSION_NORTH_HYRULE_FIELD_THORNY_TREE,      //  0x2D
    FUSION_EASTERN_HILLS_BEANSTALK,             //  0x2E
    FUSION_6TH_GORON_WALL,                      //  0x2F
    FUSION_ROYAL_VALLEY_GRAVE,                  //  0x30
    FUSION_TOWN_BARLOV_GAME,                    //  0x31
    FUSION_SOUTH_HYRULE_FIELD_THORNY_TREE,      //  0x32
    FUSION_TOWN_GORON_MERCHANT,                 //  0x33
    FUSION_LAKE_HYLIA_ISLAND,                   //  0x34
    FUSION_CASTLE_GARDEN_WEST_FOUNTAIN,         //  0x35
    FUSION_TOWN_SCHOOL_PATH_CHEST,              //  0x36
    FUSION_MINISH_WOODS_PATH_CHEST,             //  0x37
    FUSION_MINISH_WOODS_SOUTH_WEST_CHEST,       //  0x38
    FUSION_MINISH_WOODS_MIDDLE_CHEST,           //  0x39
    FUSION_WESTERN_WOODS_MIDDLE_FALLEN_TREE,    //  0x3A
    FUSION_CRENEL_SOUTH_GOLDEN_TEKTITE,         //  0x3B
    FUSION_CASTLE_GARDEN_GOLDEN_ROPE,           //  0x3C
    FUSION_WESTERN_WOODS_GOLDEN_OCTO,           //  0x3D
    FUSION_CASTOR_WILDS_MIDDLE_LILY,            //  0x3E
    FUSION_TRILBY_HIGHLANDS_PUDDLE,             //  0x3F
    FUSION_NORTH_HYRULE_FIELD_TOP_RIGHT_TREE,   //  0x40
    FUSION_WIND_RUINS_MINISH_CRACK,             //  0x41
    FUSION_TOWN_WATERFALL,                      //  0x42
    FUSION_CRENEL_RAIN_PATH_CHEST,              //  0x43
    FUSION_MINISH_WOODS_NORTH_CHEST,            //  0x44
    FUSION_CRENEL_MELARI_PATH_CHEST,            //  0x45
    FUSION_MINISH_WOODS_EAST_CHEST,             //  0x46
    FUSION_MINISH_WOODS_WEST_CHEST,             //  0x47
    FUSION_WESTERN_WOODS_NORTH_FALLEN_TREE,     //  0x48
    FUSION_CASTOR_WILDS_GOLDEN_ROPE,            //  0x49
    FUSION_VEIL_FALLS_GOLDEN_TEKTITE,           //  0x4A
    FUSION_CASTOR_WILDS_NORTH_LILY,             //  0x4B
    FUSION_WESTERN_WOODS_SOUTH_FALLEN_TREE,     //  0x4C
    FUSION_NORTH_HYRULE_FIELD_BOTTOM_LEFT_TREE, //  0x4D
    FUSION_MINISH_WOODS_CRACK,                  //  0x4E
    FUSION_CRENEL_MINERAL_WATER_PATH_CHEST,     //  0x4F
    FUSION_LON_LON_RANCH_PATH_CHEST,            //  0x50
    FUSION_LAKE_HYLIA_CABIN_PATH_CHEST,         //  0x51
    FUSION_TRILBY_HIGHLANDS_NORTH_CHEST,        //  0x52
    FUSION_SOUTH_HYRULE_FIELD_CHEST,            //  0x53
    FUSION_WIND_RUINS_GOLDEN_OCTO,              //  0x54
    FUSION_EASTERN_HILLS_GOLDEN_ROPE,           //  0x55
    FUSION_MINISH_WOODS_GOLDEN_OCTO,            //  0x56
    FUSION_CASTOR_WILDS_MIDDLE_LILY,            //  0x57
    FUSION_SOUTH_HYRULE_FIELD_PUDDLE,           //  0x58
    FUSION_NORTH_HYRULE_FIELD_TOP_LEFT_TREE,    //  0x59
    FUSION_NORTH_HYRULE_FIELD_BOTTOM_RIGHT_TREE,//  0x5A
    FUSION_CASTOR_WILDS_TOP_LEFT_CRACK,         //  0x5B
    FUSION_ROYAL_VALLEY_TOP_LEFT_CHEST,         //  0x5C
    FUSION_ROYAL_VALLEY_TOP_RIGHT_CHEST,        //  0x5D
    FUSION_TRILBY_HIGHLANDS_MIDDLE_CHEST,       //  0x5E
    FUSION_NORTH_HYRULE_FIELD_WESTERN_CHEST,    //  0x5F
    FUSION_LON_LON_RANCH_NORTH_CHEST,           //  0x60
    FUSION_VEIL_FALLS_NORTH_CHEST,              //  0x61
    FUSION_CRENEL_WALL_CHEST,                   //  0x62
    FUSION_CRENEL_BASE_WEST_CHEST,              //  0x63
    FUSION_WIND_RUINS_PILLAR_CHEST,             //  0x64
} KinstoneId;

typedef struct {
    u8 unk0; /**< Bank or 0xfd or 0xfe or 0xff */
    u8 unk1; /**< Flag, for bank=0xfd: Kinstone, for bank=0xfe: Item */
    u8 unk2; /**< Gfx id in the inventory? */
    u8 unk3; /**< Offset on the gfx id? */
} struct_gUnk_080B3D20;

typedef enum {
    WORLD_EVENT_0,
    WORLD_EVENT_1,
    WORLD_EVENT_2,
    WORLD_EVENT_3,
    WORLD_EVENT_4,
    WORLD_EVENT_5,
    // TODO add all and use them in gKinstoneWorldEvents
} WorldEventId;

typedef enum {
    CND_0,
    /**< Always false. */ // CND_FALSE
    CND_1,                // local flag // CND_FLAG
    CND_2,                // f CND_INVENTORY != 0
    CND_3,                // 0x10 CND_INVENTORY == 1
    CND_4,                // 0x11 CND_INVENTORY == 2
    CND_5,                // SORA_10_H00
    CND_6,                // SORA_11_H00
    CND_7,                // SORA_12_T00
    CND_8,                // SORA_13_H00
    CND_9,                // SORA_14_T00
    CND_10,               // KS_B15
} WorldEventCondition;

typedef enum {
    WORLD_EVENT_TYPE_0, // Does nothing
    WORLD_EVENT_TYPE_1, // LoadRoomEntity after checking GlobalFlag
    WORLD_EVENT_TYPE_2, // sub_08018BB4
    WORLD_EVENT_TYPE_3, // LoadRoomEntity after checking InventoryValue
    WORLD_EVENT_TYPE_4, // sub_08018A58
    WORLD_EVENT_TYPE_5, // sub_08018B50
    WORLD_EVENT_TYPE_6, // sub_08018AB4
    WORLD_EVENT_TYPE_7, // LoadRoomEntity or sub_080189EC
    WORLD_EVENT_TYPE_8, // set a tile type
    WORLD_EVENT_TYPE_9, // LoadRoomEntity and set some tile type
    WORLD_EVENT_TYPE_BEANSTALK,
    WORLD_EVENT_TYPE_11, // LoadRoomEntity and set gRoomVars.field_0x8c
    WORLD_EVENT_TYPE_12,
    WORLD_EVENT_TYPE_13,
    WORLD_EVENT_TYPE_14,
    WORLD_EVENT_TYPE_15, // Load different room entity depending on if fused
    WORLD_EVENT_TYPE_16,
    WORLD_EVENT_TYPE_17, // Set local flag, LoadroomEntityList
    WORLD_EVENT_TYPE_18,
    WORLD_EVENT_TYPE_19,
    WORLD_EVENT_TYPE_20,
    WORLD_EVENT_TYPE_21,
    WORLD_EVENT_TYPE_22,
    WORLD_EVENT_TYPE_23,
    WORLD_EVENT_TYPE_24, // LoadRoomEntityList
    WORLD_EVENT_TYPE_25, // LoadRoomEntity, set type depending of if kinstone is fused
    // The following do nothing.
    WORLD_EVENT_TYPE_26,
    WORLD_EVENT_TYPE_27,
    WORLD_EVENT_TYPE_28
} WorldEventType;

typedef struct {
    u8 type;
    u8 entity_idx;
    u8 area;
    u8 room;
    u16 offsetX;  /**< Scroll offset X from the room origin. */
    u16 offsetY;  /**< Scroll offset Y from the room origin. */
    u16 x;        /**< X position of the actual event. */
    u16 y;        /**< Y position of the actual event. */
    u16 _c;       // see sub_080A6A80, related to _0 and _2 of gUnk_08127F94
    u16 _e;       // see sub_080A6A80, related to _1 and _3 of gUnk_08127F94
    u8 condition; // TODO some sort of flag determining what type the bank&flag are? see UpdateVisibleFusionMapMarkers
    u8 bank;      /**< @see LocalBanks */
    u16 flag;
} WorldEvent;
extern const WorldEvent gWorldEvents[];

#endif // KINSTONE_H
