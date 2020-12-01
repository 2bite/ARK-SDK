#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"
#include "ARKSurvivalEvolved_AIModule_classes.hpp"
#include "ARKSurvivalEvolved_Engine_classes.hpp"
#include "ARKSurvivalEvolved_InputCore_classes.hpp"
#include "ARKSurvivalEvolved_OnlineSubsystemUtils_classes.hpp"
#include "ARKSurvivalEvolved_UMG_classes.hpp"
#include "ARKSurvivalEvolved_Slate_classes.hpp"
#include "ARKSurvivalEvolved_SlateCore_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ShooterGame.ESTOFNotificationType
enum class ESTOFNotificationType : uint8_t
{
	ESTOFNotificationType__Death   = 0,
	ESTOFNotificationType__TribeEliminated = 1,
	ESTOFNotificationType__MatchVictory = 2,
	ESTOFNotificationType__MatchDraw = 3,
	ESTOFNotificationType__MAX     = 4,
	ESTOFNotificationType__ESTOFNotificationType_MAX = 5
};


// Enum ShooterGame.EPrimalARKTributeDataType
enum class EPrimalARKTributeDataType : uint8_t
{
	EPrimalARKTributeDataType__Items = 0,
	EPrimalARKTributeDataType__TamedDinos = 1,
	EPrimalARKTributeDataType__CharacterData = 2,
	EPrimalARKTributeDataType__MAX = 3,
	EPrimalARKTributeDataType__EPrimalARKTributeDataType_MAX = 4
};


// Enum ShooterGame.EPrimalCharacterStatusValue
enum class EPrimalCharacterStatusValue : uint8_t
{
	EPrimalCharacterStatusValue__Health = 0,
	EPrimalCharacterStatusValue__Stamina = 1,
	EPrimalCharacterStatusValue__Torpidity = 2,
	EPrimalCharacterStatusValue__Oxygen = 3,
	EPrimalCharacterStatusValue__Food = 4,
	EPrimalCharacterStatusValue__Water = 5,
	EPrimalCharacterStatusValue__Temperature = 6,
	EPrimalCharacterStatusValue__Weight = 7,
	EPrimalCharacterStatusValue__MeleeDamageMultiplier = 8,
	EPrimalCharacterStatusValue__SpeedMultiplier = 9,
	EPrimalCharacterStatusValue__TemperatureFortitude = 10,
	EPrimalCharacterStatusValue__CraftingSpeedMultiplier = 11,
	EPrimalCharacterStatusValue__MAX = 12,
	EPrimalCharacterStatusValue__EPrimalCharacterStatusValue_MAX = 13
};


// Enum ShooterGame.EChatMessageType
enum class EChatMessageType : uint8_t
{
	EChatMessageType__MyMessage    = 0,
	EChatMessageType__SameTeamMessage = 1,
	EChatMessageType__DifferentTeamMessage = 2,
	EChatMessageType__SystemWideMessage = 3,
	EChatMessageType__SameAllianceMessage = 4,
	EChatMessageType__MAX          = 5,
	EChatMessageType__EChatMessageType_MAX = 6
};


// Enum ShooterGame.EChatType
enum class EChatType : uint8_t
{
	EChatType__GlobalChat          = 0,
	EChatType__ProximityChat       = 1,
	EChatType__RadioChat           = 2,
	EChatType__GlobalTribeChat     = 3,
	EChatType__AllianceChat        = 4,
	EChatType__MAX                 = 5,
	EChatType__EChatType_MAX       = 6
};


// Enum ShooterGame.EChatSendMode
enum class EChatSendMode : uint8_t
{
	EChatSendMode__GlobalChat      = 0,
	EChatSendMode__GlobalTribeChat = 1,
	EChatSendMode__LocalChat       = 2,
	EChatSendMode__AllianceChat    = 3,
	EChatSendMode__MAX             = 4,
	EChatSendMode__EChatSendMode_MAX = 5
};


// Enum ShooterGame.EShooterPhysMaterialType
enum class EShooterPhysMaterialType : uint8_t
{
	EShooterPhysMaterialType__Unknown = 0,
	EShooterPhysMaterialType__Concrete = 1,
	EShooterPhysMaterialType__Dirt = 2,
	EShooterPhysMaterialType__Water = 3,
	EShooterPhysMaterialType__Metal = 4,
	EShooterPhysMaterialType__Wood = 5,
	EShooterPhysMaterialType__Grass = 6,
	EShooterPhysMaterialType__Glass = 7,
	EShooterPhysMaterialType__Flesh = 8,
	EShooterPhysMaterialType__Leaves = 9,
	EShooterPhysMaterialType__Rock = 10,
	EShooterPhysMaterialType__Sand = 11,
	EShooterPhysMaterialType__Snow = 12,
	EShooterPhysMaterialType__Corruption = 13,
	EShooterPhysMaterialType__MAX  = 14,
	EShooterPhysMaterialType__EShooterPhysMaterialType_MAX = 15
};


// Enum ShooterGame.EPlayerActionIndex
enum class EPlayerActionIndex : uint8_t
{
	EPlayerActionIndex__None       = 0,
	EPlayerActionIndex__WhistleFollow = 1,
	EPlayerActionIndex__WhistleFollowOne = 2,
	EPlayerActionIndex__WhistleStop = 3,
	EPlayerActionIndex__WhistleStopOne = 4,
	EPlayerActionIndex__WhistleAggressive = 5,
	EPlayerActionIndex__WhistleNeutral = 6,
	EPlayerActionIndex__WhistlePassive = 7,
	EPlayerActionIndex__WhistleAttackTarget = 8,
	EPlayerActionIndex__WhistleLandFlyerOne = 9,
	EPlayerActionIndex__ShowInventory = 10,
	EPlayerActionIndex__ShowCraftables = 11,
	EPlayerActionIndex__ShowTribeManager = 12,
	EPlayerActionIndex__Poop       = 13,
	EPlayerActionIndex__ShowEmoteSelection = 14,
	EPlayerActionIndex__Emote_HatSwitch = 15,
	EPlayerActionIndex__Emote_Salute = 16,
	EPlayerActionIndex__Emote_Sorry = 17,
	EPlayerActionIndex__Emote_Thank = 18,
	EPlayerActionIndex__Emote_Wave = 19,
	EPlayerActionIndex__Emote_Laugh = 20,
	EPlayerActionIndex__Emote_Yes  = 21,
	EPlayerActionIndex__Emote_No   = 22,
	EPlayerActionIndex__Emote_Taunt = 23,
	EPlayerActionIndex__Emote_Cheer = 24,
	EPlayerActionIndex__Emote_FriendlyLowerHands = 25,
	EPlayerActionIndex__Emote_MAX  = 26,
	EPlayerActionIndex__EPlayerActionIndex_MAX = 27
};


// Enum ShooterGame.ESimpleCurve
enum class ESimpleCurve : uint8_t
{
	ESimpleCurve__Linear           = 0,
	ESimpleCurve__Pow0             = 1,
	ESimpleCurve__Pow1             = 2,
	ESimpleCurve__Pow101           = 3,
	ESimpleCurve__Pow2             = 4,
	ESimpleCurve__Pow201           = 5,
	ESimpleCurve__Pow3             = 6,
	ESimpleCurve__Pow301           = 7,
	ESimpleCurve__PowCos0          = 8,
	ESimpleCurve__PowCos1          = 9,
	ESimpleCurve__PowCos101        = 10,
	ESimpleCurve__PowCos2          = 11,
	ESimpleCurve__PowCos201        = 12,
	ESimpleCurve__PowCos3          = 13,
	ESimpleCurve__PowCos301        = 14,
	ESimpleCurve__PowSin0          = 15,
	ESimpleCurve__PowSin1          = 16,
	ESimpleCurve__PowSin101        = 17,
	ESimpleCurve__PowSin2          = 18,
	ESimpleCurve__PowSin201        = 19,
	ESimpleCurve__PowSin3          = 20,
	ESimpleCurve__PowSin301        = 21,
	ESimpleCurve__PowMinCos0       = 22,
	ESimpleCurve__PowMinCos1       = 23,
	ESimpleCurve__PowMinCos101     = 24,
	ESimpleCurve__PowMinCos2       = 25,
	ESimpleCurve__PowMinCos201     = 26,
	ESimpleCurve__PowMinCos3       = 27,
	ESimpleCurve__PowMinCos301     = 28,
	ESimpleCurve__PowMax0          = 29,
	ESimpleCurve__PowMax1          = 30,
	ESimpleCurve__PowMax101        = 31,
	ESimpleCurve__PowMax2          = 32,
	ESimpleCurve__PowMax201        = 33,
	ESimpleCurve__PowMax3          = 34,
	ESimpleCurve__PowMax301        = 35,
	ESimpleCurve__ESimpleCurve_MAX = 36
};


// Enum ShooterGame.EHUDElementType
enum class EHUDElementType : uint8_t
{
	EHUDElementType__Text          = 0,
	EHUDElementType__ProgressBar   = 1,
	EHUDElementType__Image         = 2,
	EHUDElementType__EHUDElementType_MAX = 3
};


// Enum ShooterGame.EHUDElementAnchorMode
enum class EHUDElementAnchorMode : uint8_t
{
	EHUDElementAnchorMode__Specified = 0,
	EHUDElementAnchorMode__QuickbarLeft = 1,
	EHUDElementAnchorMode__QuickbarRight = 2,
	EHUDElementAnchorMode__QuickbarTop = 3,
	EHUDElementAnchorMode__EHUDElementAnchorMode_MAX = 4
};


// Enum ShooterGame.EStencilAlliance
enum class EStencilAlliance : uint8_t
{
	EStencilAlliance__None         = 0,
	EStencilAlliance__Friendly     = 1,
	EStencilAlliance__NPC          = 2,
	EStencilAlliance__NPCFleeing   = 3,
	EStencilAlliance__Hostile      = 4,
	EStencilAlliance__Ally         = 5,
	EStencilAlliance__Element      = 6,
	EStencilAlliance__EStencilAlliance_MAX = 7
};


// Enum ShooterGame.PrimalGameData.EPrimalCharacterStatusState
enum class EPrimalCharacterStatusState : uint8_t
{
	EPrimalCharacterStatusState__Dead = 0,
	EPrimalCharacterStatusState__Winded = 1,
	EPrimalCharacterStatusState__Starvation = 2,
	EPrimalCharacterStatusState__Dehydration = 3,
	EPrimalCharacterStatusState__Suffocation = 4,
	EPrimalCharacterStatusState__Encumbered = 5,
	EPrimalCharacterStatusState__Hypothermia = 6,
	EPrimalCharacterStatusState__Hyperthermia = 7,
	EPrimalCharacterStatusState__Injured = 8,
	EPrimalCharacterStatusState__KnockedOut = 9,
	EPrimalCharacterStatusState__Sleeping = 10,
	EPrimalCharacterStatusState__Cold = 11,
	EPrimalCharacterStatusState__Hot = 12,
	EPrimalCharacterStatusState__Crafting = 13,
	EPrimalCharacterStatusState__MAX = 14,
	EPrimalCharacterStatusState__EPrimalCharacterStatusState_MAX = 15
};


// Enum ShooterGame.PrimalGameData.EPrimalConsumableType
enum class EPrimalConsumableType : uint8_t
{
	EPrimalConsumableType__Food    = 0,
	EPrimalConsumableType__Water   = 1,
	EPrimalConsumableType__Medicine = 2,
	EPrimalConsumableType__Other   = 3,
	EPrimalConsumableType__MAX     = 4,
	EPrimalConsumableType__EPrimalConsumableType_MAX = 5
};


// Enum ShooterGame.PrimalGameData.ELevelExperienceRampType
enum class ELevelExperienceRampType : uint8_t
{
	ELevelExperienceRampType__Player = 0,
	ELevelExperienceRampType__DinoEasy = 1,
	ELevelExperienceRampType__DinoMedium = 2,
	ELevelExperienceRampType__DinoHard = 3,
	ELevelExperienceRampType__MAX  = 4,
	ELevelExperienceRampType__ELevelExperienceRampType_MAX = 5
};


// Enum ShooterGame.PrimalGameData.EPrimalItemType
enum class EPrimalItemType : uint8_t
{
	EPrimalItemType__MiscConsumable = 0,
	EPrimalItemType__Equipment     = 1,
	EPrimalItemType__Weapon        = 2,
	EPrimalItemType__Ammo          = 3,
	EPrimalItemType__Structure     = 4,
	EPrimalItemType__Resource      = 5,
	EPrimalItemType__Skin          = 6,
	EPrimalItemType__WeaponAttachment = 7,
	EPrimalItemType__Artifact      = 8,
	EPrimalItemType__MAX           = 9,
	EPrimalItemType__EPrimalItemType_MAX = 10
};


// Enum ShooterGame.PrimalGameData.EPrimalCharacterInputType
enum class EPrimalCharacterInputType : uint8_t
{
	EPrimalCharacterInputType__PrimaryFire = 0,
	EPrimalCharacterInputType__Targeting = 1,
	EPrimalCharacterInputType__AltFire = 2,
	EPrimalCharacterInputType__SwitchWeapon = 3,
	EPrimalCharacterInputType__Reload = 4,
	EPrimalCharacterInputType__Crouch = 5,
	EPrimalCharacterInputType__Prone = 6,
	EPrimalCharacterInputType__CrouchProneToggle = 7,
	EPrimalCharacterInputType__SwitchMap = 8,
	EPrimalCharacterInputType__DinoAttack = 9,
	EPrimalCharacterInputType__EPrimalCharacterInputType_MAX = 10
};


// Enum ShooterGame.PrimalGameData.EPrimalItemStat
enum class EPrimalItemStat : uint8_t
{
	EPrimalItemStat__GenericQuality = 0,
	EPrimalItemStat__Armor         = 1,
	EPrimalItemStat__MaxDurability = 2,
	EPrimalItemStat__WeaponDamagePercent = 3,
	EPrimalItemStat__WeaponClipAmmo = 4,
	EPrimalItemStat__HypothermalInsulation = 5,
	EPrimalItemStat__Weight        = 6,
	EPrimalItemStat__HyperthermalInsulation = 7,
	EPrimalItemStat__MAX           = 8,
	EPrimalItemStat__EPrimalItemStat_MAX = 9
};


// Enum ShooterGame.PrimalGameData.EDinoTamedOrder
enum class EDinoTamedOrder : uint8_t
{
	EDinoTamedOrder__SetAggressionPassive = 0,
	EDinoTamedOrder__SetAggressionNeutral = 1,
	EDinoTamedOrder__SetAggressionAggressive = 2,
	EDinoTamedOrder__SetAggressionAttackTarget = 3,
	EDinoTamedOrder__ToggleFollowMe = 4,
	EDinoTamedOrder__FollowMe      = 5,
	EDinoTamedOrder__StopFollowing = 6,
	EDinoTamedOrder__CycleFollowDistance = 7,
	EDinoTamedOrder__SetAggressionPassiveFlee = 8,
	EDinoTamedOrder__LandingToMe   = 9,
	EDinoTamedOrder__MAX           = 10,
	EDinoTamedOrder__EDinoTamedOrder_MAX = 11
};


// Enum ShooterGame.PrimalGameData.EXPType
enum class EXPType : uint8_t
{
	EXPType__XP_GENERIC            = 0,
	EXPType__XP_KILL               = 1,
	EXPType__XP_HARVEST            = 2,
	EXPType__XP_CRAFT              = 3,
	EXPType__XP_SPECIAL            = 4,
	EXPType__XP_ALPHAKILL          = 5,
	EXPType__MAX                   = 6,
	EXPType__EXPType_MAX           = 7
};


// Enum ShooterGame.PrimalGameData.ETribeGroupPermission
enum class ETribeGroupPermission : uint8_t
{
	ETribeGroupPermission__STRUCTUREACTIVATE = 0,
	ETribeGroupPermission__INVENTORYACCESS = 1,
	ETribeGroupPermission__PET_ORDER = 2,
	ETribeGroupPermission__PET_RIDE = 3,
	ETribeGroupPermission__GENERAL_STRUCTUREDEMOLISH = 4,
	ETribeGroupPermission__GENERAL_STRUCTUREATTACHMENT = 5,
	ETribeGroupPermission__GENERAL_BUILDSTRUCTUREINRANGE = 6,
	ETribeGroupPermission__INVITEMEMBER = 7,
	ETribeGroupPermission__PROMOTEMEMBER = 8,
	ETribeGroupPermission__DEMOTEMEMBER = 9,
	ETribeGroupPermission__BANISHMEMBER = 10,
	ETribeGroupPermission__PET_UNCLAIM = 11,
	ETribeGroupPermission__ETribeGroupPermission_MAX = 12
};


// Enum ShooterGame.PrimalGameData.EBoneModifierType
enum class EBoneModifierType : uint8_t
{
	EBoneModifierType__HEAD        = 0,
	EBoneModifierType__NECK        = 1,
	EBoneModifierType__NECKLENGTH  = 2,
	EBoneModifierType__CHEST       = 3,
	EBoneModifierType__SHOULDERS   = 4,
	EBoneModifierType__ARMLENGTH   = 5,
	EBoneModifierType__UPPERARM    = 6,
	EBoneModifierType__LOWERARM    = 7,
	EBoneModifierType__HAND        = 8,
	EBoneModifierType__LEGLENGTH   = 9,
	EBoneModifierType__UPPERLEG    = 10,
	EBoneModifierType__LOWERLEG    = 11,
	EBoneModifierType__FOOT        = 12,
	EBoneModifierType__HIP         = 13,
	EBoneModifierType__TORSO       = 14,
	EBoneModifierType__UPPERFACESIZE = 15,
	EBoneModifierType__LOWERFACESIZE = 16,
	EBoneModifierType__TORSODEPTH  = 17,
	EBoneModifierType__HEADHEIGHT  = 18,
	EBoneModifierType__HEADWIDTH   = 19,
	EBoneModifierType__HEADDEPTH   = 20,
	EBoneModifierType__TORSOHEIGHT = 21,
	EBoneModifierType__MAX         = 22,
	EBoneModifierType__EBoneModifierType_MAX = 23
};


// Enum ShooterGame.PrimalGameData.EEngramGroup
enum class EEngramGroup : uint8_t
{
	EEngramGroup__UnusedSpacer     = 0,
	EEngramGroup__UnusedSpacer01   = 1,
	EEngramGroup__ARK_PRIME        = 2,
	EEngramGroup__UnusedSpacer02   = 3,
	EEngramGroup__ARK_SCORCHEDEARTH = 4,
	EEngramGroup__UnusedSpacer03   = 5,
	EEngramGroup__UnusedSpacer04   = 6,
	EEngramGroup__UnusedSpacer05   = 7,
	EEngramGroup__ARK_TEK          = 8,
	EEngramGroup__UnusedSpacer06   = 9,
	EEngramGroup__UnusedSpacer07   = 10,
	EEngramGroup__UnusedSpacer08   = 11,
	EEngramGroup__UnusedSpacer09   = 12,
	EEngramGroup__UnusedSpacer10   = 13,
	EEngramGroup__UnusedSpacer11   = 14,
	EEngramGroup__UnusedSpacer12   = 15,
	EEngramGroup__ARK_UNLEARNED    = 16,
	EEngramGroup__UnusedSpacer13   = 17,
	EEngramGroup__UnusedSpacer14   = 18,
	EEngramGroup__UnusedSpacer15   = 19,
	EEngramGroup__UnusedSpacer16   = 20,
	EEngramGroup__UnusedSpacer17   = 21,
	EEngramGroup__UnusedSpacer18   = 22,
	EEngramGroup__UnusedSpacer19   = 23,
	EEngramGroup__UnusedSpacer20   = 24,
	EEngramGroup__UnusedSpacer21   = 25,
	EEngramGroup__UnusedSpacer22   = 26,
	EEngramGroup__UnusedSpacer23   = 27,
	EEngramGroup__UnusedSpacer24   = 28,
	EEngramGroup__UnusedSpacer25   = 29,
	EEngramGroup__UnusedSpacer26   = 30,
	EEngramGroup__UnusedSpacer27   = 31,
	EEngramGroup__ARK_ABERRATION   = 32,
	EEngramGroup__UnusedSpacer28   = 33,
	EEngramGroup__UnusedSpacer29   = 34,
	EEngramGroup__UnusedSpacer30   = 35,
	EEngramGroup__UnusedSpacer31   = 36,
	EEngramGroup__UnusedSpacer32   = 37,
	EEngramGroup__UnusedSpacer33   = 38,
	EEngramGroup__UnusedSpacer34   = 39,
	EEngramGroup__UnusedSpacer35   = 40,
	EEngramGroup__UnusedSpacer36   = 41,
	EEngramGroup__UnusedSpacer37   = 42,
	EEngramGroup__UnusedSpacer38   = 43,
	EEngramGroup__UnusedSpacer39   = 44,
	EEngramGroup__UnusedSpacer40   = 45,
	EEngramGroup__UnusedSpacer41   = 46,
	EEngramGroup__UnusedSpacer42   = 47,
	EEngramGroup__UnusedSpacer43   = 48,
	EEngramGroup__UnusedSpacer44   = 49,
	EEngramGroup__UnusedSpacer45   = 50,
	EEngramGroup__UnusedSpacer46   = 51,
	EEngramGroup__UnusedSpacer47   = 52,
	EEngramGroup__UnusedSpacer48   = 53,
	EEngramGroup__UnusedSpacer49   = 54,
	EEngramGroup__UnusedSpacer50   = 55,
	EEngramGroup__UnusedSpacer51   = 56,
	EEngramGroup__UnusedSpacer52   = 57,
	EEngramGroup__UnusedSpacer53   = 58,
	EEngramGroup__UnusedSpacer54   = 59,
	EEngramGroup__UnusedSpacer55   = 60,
	EEngramGroup__UnusedSpacer56   = 61,
	EEngramGroup__UnusedSpacer57   = 62,
	EEngramGroup__UnusedSpacer58   = 63,
	EEngramGroup__ARK_EXTINCTION   = 64,
	EEngramGroup__MAX              = 65,
	EEngramGroup__EEngramGroup_MAX = 66
};


// Enum ShooterGame.PrimalInventoryComponent.EPrimalItemMessage
enum class EPrimalItemMessage : uint8_t
{
	EPrimalItemMessage__Broken     = 0,
	EPrimalItemMessage__Repaired   = 1,
	EPrimalItemMessage__MAX        = 2,
	EPrimalItemMessage__EPrimalItemMessage_MAX = 3
};


// Enum ShooterGame.ShooterPlayerController.EPrimalStatsValueTypes
enum class EPrimalStatsValueTypes : uint8_t
{
	EPrimalStatsValueTypes__TotalShots = 0,
	EPrimalStatsValueTypes__Misses = 1,
	EPrimalStatsValueTypes__HitsStructure = 2,
	EPrimalStatsValueTypes__HitsDinoBody = 3,
	EPrimalStatsValueTypes__HitsDinoCritical = 4,
	EPrimalStatsValueTypes__HitsPlayerBody = 5,
	EPrimalStatsValueTypes__HitsPlayerCritical = 6,
	EPrimalStatsValueTypes__MAX    = 7,
	EPrimalStatsValueTypes__EPrimalStatsValueTypes_MAX = 8
};


// Enum ShooterGame.BiomeZoneVolume.EBiomeZone
enum class EBiomeZone : uint8_t
{
	EBiomeZone__None               = 0,
	EBiomeZone__Beach              = 1,
	EBiomeZone__Canyon             = 2,
	EBiomeZone__River              = 3,
	EBiomeZone__Grassland          = 4,
	EBiomeZone__Swamp              = 5,
	EBiomeZone__Jungle             = 6,
	EBiomeZone__RedwoodForest      = 7,
	EBiomeZone__Mountain           = 8,
	EBiomeZone__Snow               = 9,
	EBiomeZone__Ocean              = 10,
	EBiomeZone__Lava               = 11,
	EBiomeZone__Surface            = 12,
	EBiomeZone__FertileChamber     = 13,
	EBiomeZone__BioluminescentChamber = 14,
	EBiomeZone__ElementChamber     = 15,
	EBiomeZone__Wasteland          = 16,
	EBiomeZone__EBiomeZone_MAX     = 17
};


// Enum ShooterGame.TerrainGenerator.EVoronoiBlendType
enum class EVoronoiBlendType : uint8_t
{
	EVoronoiBlendType__Flat        = 0,
	EVoronoiBlendType__Closest     = 1,
	EVoronoiBlendType__SecondClosest = 2,
	EVoronoiBlendType__Cellular    = 3,
	EVoronoiBlendType__Organic     = 4,
	EVoronoiBlendType__EVoronoiBlendType_MAX = 5
};


// Enum ShooterGame.DataListEntryButton_PrimalFolder.FolderWidgetType
enum class EFolderWidgetType : uint8_t
{
	FolderWidgetType__FWT_Back     = 0,
	FolderWidgetType__FWT_Folder   = 1,
	FolderWidgetType__FWT_CustomFolder = 2,
	FolderWidgetType__FWT_MAX      = 3
};


// Enum ShooterGame.FlockingBehavior.EBoidType
enum class EBoidType : uint8_t
{
	EBoidType__Follower            = 0,
	EBoidType__Leader              = 1,
	EBoidType__FreeAgent           = 2,
	EBoidType__EBoidType_MAX       = 3
};


// Enum ShooterGame.PrimalDinoCharacter.EBabyCuddleType
enum class EBabyCuddleType : uint8_t
{
	EBabyCuddleType__PET           = 0,
	EBabyCuddleType__FOOD          = 1,
	EBabyCuddleType__WALK          = 2,
	EBabyCuddleType__MAX           = 3,
	EBabyCuddleType__EBabyCuddleType_MAX = 4
};


// Enum ShooterGame.PrimalUI.ControlDirection
enum class EControlDirection : uint8_t
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	ControlDirection_MAX           = 5
};


// Enum ShooterGame.PrimalUI.HighlightStartingPoint
enum class EHighlightStartingPoint : uint8_t
{
	TopLeft                        = 0,
	Center                         = 1,
	HighlightStartingPoint_MAX     = 2
};


// Enum ShooterGame.PrimalClimbingSettings.EClimbingAnimationType
enum class EClimbingAnimationType : uint8_t
{
	EClimbingAnimationType__Up     = 0,
	EClimbingAnimationType__Down   = 1,
	EClimbingAnimationType__Right  = 2,
	EClimbingAnimationType__Left   = 3,
	EClimbingAnimationType__MeleeUp = 4,
	EClimbingAnimationType__MeleeRight = 5,
	EClimbingAnimationType__MeleeLeft = 6,
	EClimbingAnimationType__FinishUp = 7,
	EClimbingAnimationType__FinishDown = 8,
	EClimbingAnimationType__HangingFwd = 9,
	EClimbingAnimationType__HangingMelee = 10,
	EClimbingAnimationType__HangingFinishUp = 11,
	EClimbingAnimationType__HangingFinishDown = 12,
	EClimbingAnimationType__JumpUp = 13,
	EClimbingAnimationType__JumpUpRight = 14,
	EClimbingAnimationType__JumpUpLeft = 15,
	EClimbingAnimationType__SlideDown = 16,
	EClimbingAnimationType__AttachUp = 17,
	EClimbingAnimationType__AttachDown = 18,
	EClimbingAnimationType__AttachHangingUp = 19,
	EClimbingAnimationType__AttachHangingDown = 20,
	EClimbingAnimationType__FlipLeft = 21,
	EClimbingAnimationType__FlipRight = 22,
	EClimbingAnimationType__FlipUp = 23,
	EClimbingAnimationType__FlipDown = 24,
	EClimbingAnimationType__TurnUp = 25,
	EClimbingAnimationType__TurnDown = 26,
	EClimbingAnimationType__TurnRight = 27,
	EClimbingAnimationType__TurnLeft = 28,
	EClimbingAnimationType__OpenInventory = 29,
	EClimbingAnimationType__OpenInventoryHanging = 30,
	EClimbingAnimationType__QuakeFall = 31,
	EClimbingAnimationType__MAX    = 32,
	EClimbingAnimationType__EClimbingAnimationType_MAX = 33
};


// Enum ShooterGame.PrimalClimbingSettings.EClimbingType
enum class EClimbingType : uint8_t
{
	EClimbingType__None            = 0,
	EClimbingType__ClimbLook       = 1,
	EClimbingType__ClimbInput      = 2,
	EClimbingType__Slide           = 3,
	EClimbingType__MAX             = 4,
	EClimbingType__EClimbingType_MAX = 5
};


// Enum ShooterGame.PrimalClimbingSettings.EClimbingMode
enum class EClimbingMode : uint8_t
{
	EClimbingMode__None            = 0,
	EClimbingMode__Attached        = 1,
	EClimbingMode__Finalizing      = 2,
	EClimbingMode__MAX             = 3,
	EClimbingMode__EClimbingMode_MAX = 4
};


// Enum ShooterGame.PrimalStructureElevatorPlatform.EPrimalStructureElevatorState
enum class EPrimalStructureElevatorState : uint8_t
{
	PSLS_Down                      = 0,
	PSLS_Up                        = 1,
	PSLS_MAX                       = 2
};


// Enum ShooterGame.VictoryCore.EEditorMessageLogLevel
enum class EEditorMessageLogLevel : uint8_t
{
	EEditorMessageLogLevel__Error  = 0,
	EEditorMessageLogLevel__Warning = 1,
	EEditorMessageLogLevel__Info   = 2,
	EEditorMessageLogLevel__Success = 3,
	EEditorMessageLogLevel__EEditorMessageLogLevel_MAX = 4
};


// Enum ShooterGame.VictoryCore.EServerOctreeGroup
enum class EServerOctreeGroup : uint8_t
{
	EServerOctreeGroup__STASISCOMPONENTS = 0,
	EServerOctreeGroup__PLAYERPAWNS = 1,
	EServerOctreeGroup__DINOPAWNS  = 2,
	EServerOctreeGroup__PAWNS      = 3,
	EServerOctreeGroup__STRUCTURES = 4,
	EServerOctreeGroup__TARGETABLEACTORS = 5,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS = 6,
	EServerOctreeGroup__SPATIALNETWORKEDACTORS_DORMANT = 7,
	EServerOctreeGroup__ALL_SPATIAL = 8,
	EServerOctreeGroup__THERMALSTRUCTURES = 9,
	EServerOctreeGroup__STRUCTURES_CORE = 10,
	EServerOctreeGroup__DINOPAWNS_TAMED = 11,
	EServerOctreeGroup__PLAYERS_AND_TAMED_DINOS = 12,
	EServerOctreeGroup__DINOFOODCONTAINER = 13,
	EServerOctreeGroup__GRENADES   = 14,
	EServerOctreeGroup__TREESAPTAPS = 15,
	EServerOctreeGroup__LARGEUNSTASISRANGE = 16,
	EServerOctreeGroup__TRAPS      = 17,
	EServerOctreeGroup__MAX        = 18,
	EServerOctreeGroup__EServerOctreeGroup_MAX = 19
};


// Enum ShooterGame.StructuresPlus.EGlassTransparencyType
enum class EGlassTransparencyType : uint8_t
{
	EGlassTransparencyType__TwoWay = 0,
	EGlassTransparencyType__OneWayA = 1,
	EGlassTransparencyType__OneWayB = 2,
	EGlassTransparencyType__Opaque = 3,
	EGlassTransparencyType__EGlassTransparencyType_MAX = 4
};


// Enum ShooterGame.StructuresPlus.ESPMessageType
enum class ESPMessageType : uint8_t
{
	ESPMessageType__Default        = 0,
	ESPMessageType__Error          = 1,
	ESPMessageType__Warning        = 2,
	ESPMessageType__Helpful        = 3,
	ESPMessageType__ESPMessageType_MAX = 4
};


// Enum ShooterGame.ContextMenuItem.UContextMenuItemSwitchMode
enum class EUContextMenuItemSwitchMode : uint8_t
{
	UContextMenuItemSwitchMode__None = 0,
	UContextMenuItemSwitchMode__Radio = 1,
	UContextMenuItemSwitchMode__Checkbox = 2,
	UContextMenuItemSwitchMode__UContextMenuItemSwitchMode_MAX = 3
};


// Enum ShooterGame.PrimalStructurePlacer.EPrimalStructurePlacerState
enum class EPrimalStructurePlacerState : uint8_t
{
	EPrimalStructurePlacerState__Default = 0,
	EPrimalStructurePlacerState__FadeAway = 1,
	EPrimalStructurePlacerState__PlacingStructure = 2,
	EPrimalStructurePlacerState__EPrimalStructurePlacerState_MAX = 3
};


// Enum ShooterGame.PrimalStructureItemContainer_CropPlot.ESeedCropPhase
enum class ESeedCropPhase : uint8_t
{
	ESeedCropPhase__Seedling       = 0,
	ESeedCropPhase__Midling        = 1,
	ESeedCropPhase__Growthling     = 2,
	ESeedCropPhase__Fruiting       = 3,
	ESeedCropPhase__MAX            = 4,
	ESeedCropPhase__ESeedCropPhase_MAX = 5
};


// Enum ShooterGame.UI_Inventory.EDropItemIconAction
enum class EDropItemIconAction : uint8_t
{
	EDropItemIconAction__DA_NoAction = 0,
	EDropItemIconAction__DA_Equip  = 1,
	EDropItemIconAction__DA_UnEquip = 2,
	EDropItemIconAction__DA_AddToSlot = 3,
	EDropItemIconAction__DA_RemoveFromSlot = 4,
	EDropItemIconAction__DA_ToRemoteInv = 5,
	EDropItemIconAction__DA_FromRemoteInv = 6,
	EDropItemIconAction__DA_RemoteEquip = 7,
	EDropItemIconAction__DA_MergeItemStack = 8,
	EDropItemIconAction__DA_SplitItemStack = 9,
	EDropItemIconAction__DA_SwapItems = 10,
	EDropItemIconAction__DA_UseWithItem = 11,
	EDropItemIconAction__DA_UnEquipTransferToLocal = 12,
	EDropItemIconAction__DA_RemoveItemSkin = 13,
	EDropItemIconAction__DA_SplitItemStackOne = 14,
	EDropItemIconAction__DA_RemoveWeaponAmmo = 15,
	EDropItemIconAction__DA_FromRemoteInvToSlot = 16,
	EDropItemIconAction__DA_ToRemoteInvFromSlot = 17,
	EDropItemIconAction__DA_EquipLocalFromRemote = 18,
	EDropItemIconAction__DA_EquipRemoteFromLocal = 19,
	EDropItemIconAction__DA_UnequipRemote = 20,
	EDropItemIconAction__DA_UnequipTransferToRemote = 21,
	EDropItemIconAction__DA_ToArkInv = 22,
	EDropItemIconAction__DA_FromArkInv = 23,
	EDropItemIconAction__MAX       = 24,
	EDropItemIconAction__EDropItemIconAction_MAX = 25
};


// Enum ShooterGame.UI_Hub.EHubSubMenu
enum class EHubSubMenu : uint8_t
{
	EHubSubMenu__Inventory         = 0,
	EHubSubMenu__Engrams           = 1,
	EHubSubMenu__TribeManager      = 2,
	EHubSubMenu__TameGroups        = 3,
	EHubSubMenu__SurvivalProfile   = 4,
	EHubSubMenu__MAX               = 5,
	EHubSubMenu__EHubSubMenu_MAX   = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusValueDefinition
// 0x0020
struct FPrimalCharacterStatusValueDefinition
{
	class UTexture2D*                                  StatusValueIcon;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      StatusValueName;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bLevelUpSetToMaxValue;                                    // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHideCurrentValue;                                 // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayAsPercent;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalCharacterStatusStateDefinition
// 0x0050
struct FPrimalCharacterStatusStateDefinition
{
	TEnumAsByte<EPrimalCharacterStatusValue>           StatusValueType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                StatusValueThresholdIndex;                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  StatusStateIcon;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      StatusStateName;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      StatusStateDescription;                                   // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      StatusStateNameColor;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsed;                                                    // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHUDMessage;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	class FString                                      HUDMessage;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuffType;                                                 // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemStatDefinition
// 0x0018
struct FPrimalItemStatDefinition
{
	class UTexture2D*                                  ItemStatIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ItemStatName;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemDefinition
// 0x0018
struct FPrimalItemDefinition
{
	class UTexture2D*                                  ItemTypeIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ItemTypeName;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalEquipmentDefinition
// 0x0018
struct FPrimalEquipmentDefinition
{
	class UTexture2D*                                  EquipmentTypeIcon;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      EquipmentTypeName;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.PrimalItemQuality
// 0x0030
struct FPrimalItemQuality
{
	struct FLinearColor                                QualityColor;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      QualityName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              QualityRandomMultiplierThreshold;                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CraftingXPMultiplier;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairingXPMultiplier;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CraftingResourceRequirementsMultiplier;                   // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.StatusValueModifierDescription
// 0x0050
struct FStatusValueModifierDescription
{
	class UTexture2D*                                  ModifierIcon;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ModifierName;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ModifierDescription;                                      // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      ModifierColor;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayHUDMessage;                                       // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class FString                                      HUDMessage;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FColor                                      HUDMessageColor;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventDrawingBuffDescription;                           // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                BuffType;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.AppIDItem
// 0x0040
struct FAppIDItem
{
	class FString                                      AchievementID;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                AppID;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerBadgeGroup;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              PlayerIDStrings;                                          // 0x0018(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ItemClasses;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.ColorDefinition
// 0x001C
struct FColorDefinition
{
	struct FName                                       ColorName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorValue;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasOverridePriority;                                     // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRange
// 0x003C
struct FBoneModifierRange
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinScale;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxScale;                                                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinTranslation;                                           // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxTranslation;                                           // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Recursive;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.BoneModifierRangeArray
// 0x0020
struct FBoneModifierRangeArray
{
	unsigned char                                      bAffectsLegLength : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseExtraMax : 1;                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinLegLengthMultiplier;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLegLengthMultiplier;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBoneModifierRange>                  BoneArray;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.PlayerCharacterGenderDefinition
// 0x05F0
struct FPlayerCharacterGenderDefinition
{
	class FString                                      GenderString;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CharacterBlueprint;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        ColorSetBody;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetHair;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColorSetEyes;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          CharacterPreviewMaterial;                                 // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              DefaultCharacterNames;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DefaultCharacterNameWeights;                              // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     CharacterBoneModifierRanges[0x16];                        // 0x0070(0x0020) (Edit, DisableEditOnInstance)
	struct FBoneModifierRangeArray                     ExtraCharacterBoneModifierMax[0x16];                      // 0x0330(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.LevelExperienceRamp
// 0x0010
struct FLevelExperienceRamp
{
	TArray<float>                                      ExperiencePointsForLevel;                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.NamedTeamDefinition
// 0x0080
struct FNamedTeamDefinition
{
	struct FName                                       TeamName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTargetingTeamExclusionList : 1;                          // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTargetingTeamInclusionList : 1;                          // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTargetsOnOwnTeam : 1;                               // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsCarnivore : 1;                                         // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTargetPlayersAndTamedOnly : 1;                           // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceTargetPlayersAndTamed : 1;                          // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnoredByAllTeams : 1;                                   // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FName>                               TeamNameList;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TargetingMultiplierTeamNames;                             // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontGiveDamageTeamList;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               DontReceiveDamageTeamList;                                // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               MaximumTargetableDistanceTeams;                           // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaximumTargetableDistances;                               // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TargetingMultiplierTeamWeights;                           // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteAchievement
// 0x0020
struct FExplorerNoteAchievement
{
	class FString                                      AchievementName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ExplorerNoteIndices;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemapping
// 0x0010
struct FClassRemapping
{
	class UClass*                                      FromClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ToClass;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ActiveEventSupplyCrateWeight
// 0x0028
struct FActiveEventSupplyCrateWeight
{
	TArray<class UClass*>                              ReplacementCrateClasses;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ActiveEvent;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ClassAddition
// 0x0018
struct FClassAddition
{
	class UClass*                                      ForClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ClassAdditions;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.BuffAddition
// 0x0018
struct FBuffAddition
{
	class UClass*                                      ForClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              BuffAdditions;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.RandValueRange
// 0x000C
struct FRandValueRange
{
	float                                              MinVal;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVal;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandPower;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.DinoBabySetup
// 0x0038
struct FDinoBabySetup
{
	struct FName                                       DinoNameTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBoneModifierRangeArray>             BabyBoneModifierRanges;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WildRandomScaleRangeWeights;                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRandValueRange>                     WildRandomScaleRanges;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.MultiAchievement
// 0x0020
struct FMultiAchievement
{
	class FString                                      UnlockAchievement;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              RequiredAchievements;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ClassRemappingWeight
// 0x0038
struct FClassRemappingWeight
{
	class UClass*                                      FromClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ToClasses;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ActiveEvent;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExactMatch : 1;                                          // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCDifficultyLevelRange
// 0x0030
struct FNPCDifficultyLevelRange
{
	TArray<float>                                      EnemyLevelsMin;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      EnemyLevelsMax;                                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<float>                                      GameDifficulties;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntry
// 0x0108
struct FNPCSpawnEntry
{
	class FString                                      AnEntryName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NPCsToSpawn;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              NPCsToSpawnStrings;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FClassRemappingWeight>               NPCRandomSpawnClassWeights;                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             NPCsSpawnOffsets;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCsToSpawnPercentageChance;                              // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelOffset;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelOffset;                                        // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMinLevelMultiplier;                                    // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NPCMaxLevelMultiplier;                                    // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAddLevelOffsetBeforeMultiplier : 1;                      // 0x00A0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<unsigned char>                              NPCOverrideLevel;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     ExtentCheck;                                              // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroupSpawnOffset;                                         // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EntryWeight;                                              // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ManualSpawnPointSpreadRadius;                             // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterOnlySpawnMinimumWaterHeight;                         // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumWaterHeight;                                       // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNPCDifficultyLevelRange>            NPCDifficultyLevelRanges;                                 // 0x00E0(0x0010) (Edit, ZeroConstructor)
	float                                              LevelDifficultyTestOverride;                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromStructuresMultiplier;                 // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromPlayersMultiplier;                    // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnMinDistanceFromTamedDinosMultiplier;                 // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandGroupSpawnOffsetZMin;                                 // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandGroupSpawnOffsetZMax;                                 // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnLimit
// 0x0020
struct FNPCSpawnLimit
{
	class UClass*                                      NPCClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      NPCClassString;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxPercentageOfDesiredNumToAllow;                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.NPCSpawnEntriesContainerAdditions
// 0x0028
struct FNPCSpawnEntriesContainerAdditions
{
	class UClass*                                      SpawnEntriesContainerClass;                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNPCSpawnEntry>                      AdditionalNPCSpawnEntries;                                // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnLimit>                      AdditionalNPCSpawnLimits;                                 // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.LocalizedSoundCueEntry
// 0x0018
struct FLocalizedSoundCueEntry
{
	class FString                                      TwoLetterISOLanguageName;                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   LocalizedSoundCue;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ExplorerNoteEntry
// 0x0098
struct FExplorerNoteEntry
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                ExplorerNoteType;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsIsland : 1;                                            // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsScorchedEarth : 1;                                     // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsAberration : 1;                                        // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsExtinction : 1;                                        // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsGenesis1 : 1;                                          // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsDossier : 1;                                           // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDontRequireProximityToChest : 1;                         // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUnlockIgnorePopup : 1;                                   // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUnlockIgnoreSound : 1;                                   // 0x0009(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class FString                                      ExplorerNoteDescription;                                  // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DossierTameableDinoNameTag;                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               ExplorerNoteMesh;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplorerNoteAnimBP;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       ExplorerNoteTexture;                                      // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  ExplorerNoteIcon;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ExplorerNoteIconMaterial;                                 // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UnlockedSoundOverride;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowExplorerNoteTitleDelayTime;                           // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class USoundCue*                                   ExplorerNoteOpenSound;                                    // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ExplorerNoteCloseSound;                                   // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LocalizedSubtitle;                                        // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLocalizedSoundCueEntry>             LocalizedAudio;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.UnlockableEmoteEntry
// 0x0040
struct FUnlockableEmoteEntry
{
	struct FName                                       EmoteName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      EmoteDescription;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      UseEmoteMessage;                                          // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                MaleAnim;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FemaleAnim;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmotePlayMinimumInterval;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGiveDefault;                                             // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ObjectCorrelation
// 0x0010
struct FObjectCorrelation
{
	class UObject*                                     FromObject;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ToObject;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.OverrideAnimBlueprintEntry
// 0x0010
struct FOverrideAnimBlueprintEntry
{
	class UClass*                                      FromBPClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ToBPClass;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.HairStyleDefinition
// 0x0040
struct FHairStyleDefinition
{
	bool                                               bIsHairStyleLocked;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       UnlockHairStyleName;                                      // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      HairStyleName;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               HairMeshMale;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaleBeginHairMorphTargetRange;                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               HairMeshFemale;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FemaleBeginHairMorphTargetRange;                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ExtraItemAttachmentInfo
// 0x0010
struct FExtraItemAttachmentInfo
{
	class UActorComponent*                             ExtraComponentsToAttach;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketToAttachTo;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ItemAttachmentInfo
// 0x0048
struct FItemAttachmentInfo
{
	class UActorComponent*                             ComponentToAttach;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FExtraItemAttachmentInfo>            ExtraItemAttachmentInfos;                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       SocketToAttachTo;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCanBuildStructuresOn : 1;                                // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseParentAnims : 1;                                      // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToFirstPersonHands : 1;                            // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToThirdPersonWeaponMesh : 1;                       // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisabled : 1;                                            // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseItemColors : 1;                                       // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseIgnoreAttachmentWhenEquipmentOfType : 1;              // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideCharacterMesh : 1;                                   // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachmentRequireWeaponSupportShield : 1;                // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceDediAttachment : 1;                                 // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceVisibleInFirstPerson : 1;                           // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnoreEquipmentForceHideFirstPerson : 1;                 // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToFirstPersonCamera : 1;                           // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToFirstPersonCameraCapsule : 1;                    // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPersistShieldRefreshOnWeaponEquip : 1;                   // 0x0021(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      OnlyUseAttachmentForActorClass;                           // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  IgnoreAttachmentWhenEquipmentOfType;                      // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       AttachedCompName;                                         // 0x0034(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UActorComponent>              AttachedCompReference;                                    // 0x003C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.ActorClassAttachmentInfo
// 0x0050
struct FActorClassAttachmentInfo
{
	class UClass*                                      OwnerActorClassParent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FItemAttachmentInfo>                 ItemAttachmentInfos;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PlayerMeshTextureMaskParamName;                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  PlayerMeshTextureMask;                                    // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  PlayerMeshNoItemDefaultTextureMask;                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMeshTextureMaskMaterialIndex;                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPVHandsMeshTextureMaskParamName;                         // 0x0034(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UTexture2D*                                  FPVHandsMeshTextureMask;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FPVHandsMeshTextureMaskMaterialIndex;                     // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FPVHandsMeshTextureMaskMaterialIndex2;                    // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ItemNetID
// 0x0008
struct FItemNetID
{
	uint32_t                                           ItemID1;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	uint32_t                                           ItemID2;                                                  // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.CraftingResourceRequirement
// 0x0018
struct FCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ResourceItemType;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCraftingRequireExactResourceType;                        // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.UseItemAddCharacterStatusValue
// 0x0030
struct FUseItemAddCharacterStatusValue
{
	float                                              BaseAmountToAdd;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bPercentOfMaxStatusValue : 1;                             // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPercentOfCurrentStatusValue : 1;                         // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseItemQuality : 1;                                      // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDontRequireLessThanMaxToUse : 1;                         // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAddOverTime : 1;                                         // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAddOverTimeSpeedInSeconds : 1;                           // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bContinueOnUnchangedValue : 1;                            // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetValue : 1;                                            // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetAdditionalValue : 1;                                  // 0x0005(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;               // 0x0005(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceUseStatOnDinos : 1;                                 // 0x0005(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              LimitExistingModifierDescriptionToMaxAmount;              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddOverTimeSpeed;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentAbsoluteMaxValue;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentAbsoluteMinValue;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusValueModifierDescriptionIndex;                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemQualityAddValueMultiplier;                            // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           StatusValueType;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           StopAtValueNearMax;                                       // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      ScaleValueByCharacterDamageType;                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalItem.ItemStatInfo
// 0x0024
struct FItemStatInfo
{
	unsigned char                                      bUsed : 1;                                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCalculateAsPercent : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisplayAsPercent : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bRequiresSubmerged : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPreventIfSubmerged : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideStatFromTooltip : 1;                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                DefaultModifierValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomizerRangeOverride;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomizerRangeMultiplier;                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TheRandomizerPower;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              StateModifierScale;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialValueConstant;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatingValueMultiplier;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsoluteMaxValue;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalItem.CropItemPhaseData
// 0x00D0
struct FCropItemPhaseData
{
	float                                              NextStageFertilizerCacheThreshold;                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StageStaticMesh;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         StageStaticMeshes;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 HasFruitStageStaticMesh;                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         HasFruitStageStaticMeshes;                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     StageStaticMeshScale3D;                                   // 0x0038(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StageStaticMeshTranslationOffset;                         // 0x0044(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StageStaticMeshRotationOffset;                            // 0x0050(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             StageStaticMeshScales3D;                                  // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             StageStaticMeshTranslationOffsets;                        // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            StageStaticMeshRotationOffsets;                           // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              StageReachedItemsToGive;                                  // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      StageReachedItemsToGiveWeights;                           // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      StageBlockCollisions;                                     // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStageStructure;                                       // 0x00B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	class UClass*                                      StageStructure;                                           // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StageStructureOffset;                                     // 0x00C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.SaddlePassengerSeatDefinition
// 0x0098
struct FSaddlePassengerSeatDefinition
{
	struct FName                                       AttachBoneName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachBoneNameEnemyDino;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachBoneNameDino;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPVBoneName;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      BoardActionText;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     UnboardLocationOffset;                                    // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPVCameraLocationOffset;                                  // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachRelativeLocation;                                   // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachRelativeRotation;                                   // 0x0054(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DinoOverrideAttachRelativeRotation;                       // 0x0060(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UAnimSequence*                               CharacterAdditiveAnim;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bHideCharacterLowerBody : 1;                              // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLimitCameraYaw : 1;                                      // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseDinoRotationToLimitCameraYaw : 1;                     // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bWeaponIgnoreDino : 1;                                    // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHideDinoForLocalPassenger : 1;                           // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      CharacterAdditiveAnimIsNonAdditive : 1;                   // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowDinoPassenger : 1;                                  // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPreventManualPassenger : 1;                              // 0x0078(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDinoOverrideAttachRelativeRotation : 1;                  // 0x0079(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseBoneNameDinoOverride : 1;                             // 0x0079(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSavePassenger : 1;                                       // 0x0079(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPreventDamageToSeatedDino : 1;                           // 0x0079(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              CameraYawRange;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawFactor;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchFactor;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawBias;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchBias;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraHypoThermalInsulation;                               // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraHyperThermalInsulation;                              // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.DinoAncestorsEntry
// 0x0030
struct FDinoAncestorsEntry
{
	class FString                                      MaleName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           MaleDinoID1;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaleDinoID2;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      FemaleName;                                               // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           FemaleDinoID1;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           FemaleDinoID2;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalItem.CustomItemByteArray
// 0x0010
struct FCustomItemByteArray
{
	TArray<unsigned char>                              Bytes;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalItem.CustomItemByteArrays
// 0x0010
struct FCustomItemByteArrays
{
	TArray<struct FCustomItemByteArray>                ByteArrays;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalItem.CustomItemDoubles
// 0x0010
struct FCustomItemDoubles
{
	TArray<double>                                     Doubles;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalItem.CustomItemData
// 0x0078
struct FCustomItemData
{
	struct FName                                       CustomDataName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              CustomDataStrings;                                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CustomDataFloats;                                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             CustomDataObjects;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CustomDataClasses;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               CustomDataNames;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FCustomItemByteArrays                       CustomDataBytes;                                          // 0x0058(0x0010) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCustomItemDoubles                          CustomDataDoubles;                                        // 0x0068(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalItem.ItemNetInfo
// 0x01B0
struct FItemNetInfo
{
	class UClass*                                      ItemArchetype;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsBlueprint : 1;                                         // 0x0010(0x0001)
	unsigned char                                      bIsEngram : 1;                                            // 0x0010(0x0001)
	unsigned char                                      bIsCustomRecipe : 1;                                      // 0x0010(0x0001)
	unsigned char                                      bIsFoodRecipe : 1;                                        // 0x0010(0x0001)
	unsigned char                                      bIsRepairing : 1;                                         // 0x0010(0x0001)
	unsigned char                                      bAllowRemovalFromInventory : 1;                           // 0x0010(0x0001)
	unsigned char                                      bAllowRemovalFromSteamInventory : 1;                      // 0x0010(0x0001)
	unsigned char                                      bHideFromInventoryDisplay : 1;                            // 0x0010(0x0001)
	unsigned char                                      bFromSteamInventory : 1;                                  // 0x0011(0x0001)
	unsigned char                                      bIsFromAllClustersInventory : 1;                          // 0x0011(0x0001)
	unsigned char                                      bIsEquipped : 1;                                          // 0x0011(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsSlot : 1;                                              // 0x0011(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	uint32_t                                           ExpirationTimeUTC;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomItemData>                     CustomItemDatas;                                          // 0x0018(0x0010) (ZeroConstructor)
	uint64_t                                           OwnerPlayerDataID;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SlotIndex;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponClipAmmo;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             CreationTime;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ItemDurability;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ItemRating;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ItemQualityIndex;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	uint32_t                                           ItemQuantity;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CraftQueue;                                               // 0x0050(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	double                                             NextCraftCompletionTime;                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ItemStatValues[0x8];                                      // 0x0060(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            ItemColorID[0x6];                                         // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UClass*                                      ItemCustomClass;                                          // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemSkinTemplate;                                         // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CraftingSkill;                                            // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class FString                                      CustomItemName;                                           // 0x0098(0x0010) (ZeroConstructor)
	class FString                                      CustomItemDescription;                                    // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              CustomItemColors;                                         // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FCraftingResourceRequirement>        CustomResourceRequirements;                               // 0x00C8(0x0010) (ZeroConstructor)
	double                                             NextSpoilingTime;                                         // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             LastSpoilingTime;                                         // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             UploadEarliestValidTime;                                  // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AShooterCharacter>            LastOwnerPlayer;                                          // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LastAutoDurabilityDecreaseTime;                           // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                                     OriginalItemDropLocation;                                 // 0x0100(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int16_t                                            PreSkinItemColorID[0x6];                                  // 0x010C(0x0002) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      EggNumberOfLevelUpPointsApplied[0xC];                     // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              EggTamedIneffectivenessModifier;                          // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      EggColorSetIndices[0x6];                                  // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      ItemVersion;                                              // 0x012E(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x1];                                       // 0x012F(0x0001) MISSED OFFSET
	int                                                CustomItemID;                                             // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   SteamUserItemID;                                          // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      bIsInitialItem : 1;                                       // 0x0148(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	double                                             ClusterSpoilingTimeUTC;                                   // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDinoAncestorsEntry>                 EggDinoAncestors;                                         // 0x0158(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FDinoAncestorsEntry>                 EggDinoAncestorsMale;                                     // 0x0168(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                EggRandomMutationsFemale;                                 // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                EggRandomMutationsMale;                                   // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      ItemProfileVersion;                                       // 0x0180(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	class FString                                      CrafterCharacterName;                                     // 0x0188(0x0010) (ZeroConstructor)
	class FString                                      CrafterTribeName;                                         // 0x0198(0x0010) (ZeroConstructor)
	float                                              CraftedSkillBonus;                                        // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.EngramCustomFolder
// 0x0020
struct FEngramCustomFolder
{
	class FString                                      FolderName;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              EngramCustomFolderItemClasses;                            // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.PrimalMapMarkerEntryData
// 0x0028
struct FPrimalMapMarkerEntryData
{
	int                                                coord1;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                coord2;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bOverrideMarkerTextColor;                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FColor                                      OverrideMarkerTextColor;                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              coord1f;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              coord2f;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeEntity
// 0x0004
struct FArkTributeEntity
{
	int                                                UploadTime;                                               // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributeInventoryItem
// 0x01BC (0x01C0 - 0x0004)
struct FArkTributeInventoryItem : public FArkTributeEntity
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FItemNetInfo                                ArkTributeItem;                                           // 0x0008(0x01B0) (Transient)
	float                                              Version;                                                  // 0x01B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDino
// 0x011C (0x0120 - 0x0004)
struct FARKTributeDino : public FArkTributeEntity
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      DinoClassName;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      DinoClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<unsigned char>                              DinoData;                                                 // 0x0020(0x0010) (ZeroConstructor, Transient)
	class FString                                      DinoName;                                                 // 0x0030(0x0010) (ZeroConstructor, Transient)
	class FString                                      DinoNameInMap;                                            // 0x0040(0x0010) (ZeroConstructor, Transient)
	class FString                                      DinoStats[0xC];                                           // 0x0050(0x0010) (ZeroConstructor, Transient)
	float                                              DinoExperiencePoints;                                     // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Version;                                                  // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID1;                                                  // 0x0118(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID2;                                                  // 0x011C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerData
// 0x010C (0x0110 - 0x0004)
struct FArkTributePlayerData : public FArkTributeEntity
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           PlayerDataID;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              PlayerDataBytes;                                          // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      PlayerName;                                               // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      PlayerStats[0xC];                                         // 0x0030(0x0010) (ZeroConstructor, Transient)
	class FString                                      UploadingServerMapName;                                   // 0x00F0(0x0010) (ZeroConstructor, Transient)
	bool                                               bWasAllowDPCUpload;                                       // 0x0100(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWithItems;                                               // 0x0101(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	uint32_t                                           ItemCount;                                                // 0x0104(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForServerTransfer;                                       // 0x0108(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              Version;                                                  // 0x010C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkInventoryData
// 0x0030
struct FArkInventoryData
{
	TArray<struct FArkTributeInventoryItem>            ArkItems;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FARKTributeDino>                     ArkTamedDinosData;                                        // 0x0010(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArkTributePlayerData>               ArkPlayerData;                                            // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.FogOfWar.FogOfWarInfoStruct
// 0x0038
struct FFogOfWarInfoStruct
{
	class FString                                      Mapname;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              CompressedVisibilityBuffer;                               // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           UnCompressedVisibilityBufferSize;                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<bool>                                       UnlockMask;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.MapMarkerPerMapInfo
// 0x0020
struct FMapMarkerPerMapInfo
{
	class FString                                      Mapname;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPrimalMapMarkerEntryData>           MapMarkers;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.NameScalarPair
// 0x000C
struct FNameScalarPair
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.NameColorPair
// 0x0018
struct FNameColorPair
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalItem.ItemCraftQueueEntry
// 0x0018
struct FItemCraftQueueEntry
{
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRepair;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreInventoryRequirement;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              RepairPercentage;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              RepairSpeedMultiplier;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemMultiplier
// 0x0010
struct FItemMultiplier
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemMultiplier;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.EventItem
// 0x0018
struct FEventItem
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEngram;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemSpawnActorClassOverride
// 0x0010
struct FItemSpawnActorClassOverride
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorClassOverride;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ItemCraftingConsumptionReplenishment
// 0x0018
struct FItemCraftingConsumptionReplenishment
{
	TArray<class UClass*>                              ItemResourceClasses;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ToReplaceWithClass;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemEntry
// 0x0078
struct FSupplyCrateItemEntry
{
	class FString                                      ItemEntryName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              EntryWeight;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Items;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              ItemClassStrings;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ItemsWeights;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinQuantity;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxQuantity;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QuantityPower;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRandomQuality;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinQuality;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxQuality;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityPower;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bForceBlueprint : 1;                                      // 0x0064(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              ChanceToBeBlueprintOverride;                              // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToActuallyGiveItem;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiresMinQuality;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.SupplyCrateItemSet
// 0x0040
struct FSupplyCrateItemSet
{
	class FString                                      SetName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSupplyCrateItemEntry>               ItemEntries;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinNumItems;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNumItems;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumItemsPower;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetWeight;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bItemsRandomWithoutReplacement;                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UClass*                                      ItemSetOverride;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalInventoryComponent.ServerCustomFolder
// 0x0028
struct FServerCustomFolder
{
	int                                                InventoryCompType;                                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      FolderName;                                               // 0x0008(0x0010) (ZeroConstructor, Transient)
	TArray<struct FItemNetID>                          CustomFolderItemIds;                                      // 0x0018(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
// 0x00D8
struct FPrimalPlayerCharacterConfigStruct
{
	unsigned char                                      bIsFemale : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                BodyColors[0x4];                                          // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                OverrideHeadHairColor;                                    // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                OverrideFacialHairColor;                                  // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      FacialHairIndex;                                          // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      HeadHairIndex;                                            // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	class FString                                      PlayerCharacterName;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PlayerSpawnRegionIndex;                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderID
// 0x0018
struct FDinoOrderID
{
	int                                                DinoID1;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DinoID2;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      DinoName;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalPlayerData.DinoOrderGroup
// 0x0030
struct FDinoOrderGroup
{
	class FString                                      DinoOrderGroupName;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              DinoOrderClasses;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FDinoOrderID>                        DinoOrderIDs;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPersistentCharacterStatsStruct
// 0x02B0
struct FPrimalPersistentCharacterStatsStruct
{
	uint16_t                                           CharacterStatusComponent_ExtraCharacterLevel;             // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CharacterStatusComponent_ExperiencePoints;                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerState_TotalEngramPoints;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CharacterStatusComponent_HighestExtraCharacterLevel;      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	double                                             CharacterStatusComponent_LastRespecUtcTimeSeconds;        // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   PerMapExplorerNoteUnlocks;                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FName>                               EmoteUnlocks;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              PlayerState_EngramBlueprints;                             // 0x0040(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC];// 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UClass*                                      PlayerState_DefaultItemSlotClasses[0xA];                  // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      PlayerState_DefaultItemSlotEngrams[0xA];                  // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	struct FDinoOrderGroup                             DinoOrderGroups[0xA];                                     // 0x00C0(0x0030) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentlySelectedDinoOrderGroup;                          // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PercentageOfHeadHairGrowth;                               // 0x02A4(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PercentageOfFacialHairGrowth;                             // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      FacialHairIndex;                                          // 0x02AC(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      HeadHairIndex;                                            // 0x02AD(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02AE(0x0002) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerDataStruct
// 0x0420
struct FPrimalPlayerDataStruct
{
	uint64_t                                           PlayerDataID;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0008(0x0010)
	class FString                                      SavedNetworkAddress;                                      // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      PlayerName;                                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint32_t                                           LocalPlayerIndex;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFirstSpawned : 1;                                        // 0x003C(0x0001)
	unsigned char                                      bUseSpectator : 1;                                        // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FPrimalPlayerCharacterConfigStruct          MyPlayerCharacterConfig;                                  // 0x0040(0x00D8)
	int                                                LastPinCodeUsed;                                          // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FPrimalPersistentCharacterStatsStruct       MyPersistentCharacterStats;                               // 0x0120(0x02B0)
	int                                                NumPersonalDinos;                                         // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AppIDSet;                                                 // 0x03D8(0x0010) (ZeroConstructor)
	int                                                PlayerDataVersion;                                        // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	double                                             NextAllowedRespawnTime;                                   // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LastTimeDiedToEnemyTeam;                                  // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LoginTime;                                                // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                             LastLoginTime;                                            // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AllowedRespawnInterval;                                   // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              NumOfDeaths;                                              // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpawnDayNumber;                                           // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnDayTime;                                             // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.TribeAlliance
// 0x0048
struct FTribeAlliance
{
	class FString                                      AllianceName;                                             // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           AllianceID;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class FString>                              MembersTribeName;                                         // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   MembersTribeID;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   AdminsTribeID;                                            // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.TribeGovernment
// 0x0014
struct FTribeGovernment
{
	int                                                TribeGovern_PINCode;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoOwnership;                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_StructureOwnership;                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoTaming;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeGovern_DinoUnclaimAdminOnly;                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.TribeWar
// 0x0030
struct FTribeWar
{
	int                                                EnemyTribeID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartDayNumber;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndDayNumber;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartDayTime;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndDayTime;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsApproved;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                InitiatingTribeID;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      EnemyTribeName;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.TribeRankGroup
// 0x0020
struct FTribeRankGroup
{
	class FString                                      RankGroupName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      RankGroupRank;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      InventoryRank;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StructureActivationRank;                                  // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStructureActivationRank;                               // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewStructureInventoryRank;                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PetOrderRank;                                             // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PetRidingRank;                                            // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      InviteToGroupRank;                                        // 0x0017(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPromotionGroupRank;                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxDemotionGroupRank;                                     // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxBanishmentGroupRank;                                   // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumInvitesRemaining;                                      // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPreventStructureDemolish : 1;                            // 0x001C(0x0001)
	unsigned char                                      bPreventStructureAttachment : 1;                          // 0x001C(0x0001)
	unsigned char                                      bPreventStructureBuildInRange : 1;                        // 0x001C(0x0001)
	unsigned char                                      bPreventUnclaiming : 1;                                   // 0x001C(0x0001)
	unsigned char                                      bAllowInvites : 1;                                        // 0x001C(0x0001)
	unsigned char                                      bLimitInvites : 1;                                        // 0x001C(0x0001)
	unsigned char                                      bAllowDemotions : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bAllowPromotions : 1;                                     // 0x001C(0x0001)
	unsigned char                                      bAllowBanishments : 1;                                    // 0x001D(0x0001)
	unsigned char                                      bDefaultRank : 1;                                         // 0x001D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.TribeData
// 0x0138
struct FTribeData
{
	class FString                                      TribeName;                                                // 0x0000(0x0010) (ZeroConstructor)
	double                                             LastNameChangeTime;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OwnerPlayerDataID;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TribeID;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              MembersPlayerName;                                        // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   MembersPlayerDataID;                                      // 0x0030(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              MembersRankGroups;                                        // 0x0040(0x0010) (ZeroConstructor)
	TArray<double>                                     SlotFreedTime;                                            // 0x0050(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   TribeAdmins;                                              // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FTribeAlliance>                      TribeAlliances;                                           // 0x0070(0x0010) (ZeroConstructor)
	bool                                               bSetGovernment;                                           // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FTribeGovernment                            TribeGovernment;                                          // 0x0084(0x0014) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStruct>  MembersConfigs;                                           // 0x0098(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTribeWar>                           TribeWars;                                                // 0x00A8(0x0010) (ZeroConstructor)
	TArray<class FString>                              TribeLog;                                                 // 0x00B8(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                LogIndex;                                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FTribeRankGroup>                     TribeRankGroups;                                          // 0x00D0(0x0010) (ZeroConstructor)
	int                                                NumTribeDinos;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x00E4(0x0054) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalPlayerData.PrimalPlayerCharacterConfigStructReplicated
// 0x00B8
struct FPrimalPlayerCharacterConfigStructReplicated
{
	unsigned char                                      bIsFemale : 1;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                BodyColors[0x4];                                          // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class FString                                      PlayerCharacterName;                                      // 0x0048(0x0010) (ZeroConstructor)
	float                                              RawBoneModifiers[0x16];                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpawnRegionIndex;                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.SpawnPointInfo
// 0x0048
struct FSpawnPointInfo
{
	int                                                SpawnPointID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      BedName;                                                  // 0x0008(0x0010) (ZeroConstructor)
	class ABiomeZoneVolume*                            SpawnPointVolume;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnPointActorClass;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLocation;                                               // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	double                                             NextAllowedUseTime;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedUse;                                              // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.ServerOptions
// 0x02A0
struct FServerOptions
{
	class FString                                      MaxStructuresInRange;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DifficultyOffset;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      GlobalVoiceChat;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ProximityChat;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      NoTributeDownloads;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AllowThirdPersonPlayer;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AlwaysNotifyPlayerLeft;                                   // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DontAlwaysNotifyPlayerJoined;                             // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerHardcore;                                           // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerPVE;                                                // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerCrosshair;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerForceNoHUD;                                         // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ShowMapPlayerLocation;                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerPassword;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ServerAdminPassword;                                      // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SpectatorPassword;                                        // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DayCycleSpeedScale;                                       // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DayTimeSpeedScale;                                        // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      NightTimeSpeedScale;                                      // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoDamageMultiplier;                                     // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerDamageMultiplier;                                   // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      StructureDamageMultiplier;                                // 0x0150(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerResistanceMultiplier;                               // 0x0160(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoResistanceMultiplier;                                 // 0x0170(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      StructureResistanceMultiplier;                            // 0x0180(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      XPMultiplier;                                             // 0x0190(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TamingSpeedMultiplier;                                    // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HarvestAmountMultiplier;                                  // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerCharacterWaterDrainMultiplier;                      // 0x01C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerCharacterFoodDrainMultiplier;                       // 0x01D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoCharacterFoodDrainMultiplier;                         // 0x01E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerCharacterStaminaDrainMultiplier;                    // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoCharacterStaminaDrainMultiplier;                      // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerCharacterHealthRecoveryMultiplier;                  // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoCharacterHealthRecoveryMultiplier;                    // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DinoCountMultiplier;                                      // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HarvestHealthMultiplier;                                  // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PvEStructureDecayPeriodMultiplier;                        // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ResourcesRespawnPeriodMultiplier;                         // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      EnablePvPGamma;                                           // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DisableStructureDecayPvE;                                 // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AllowFlyerCarryPvE;                                       // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterPlayerState.AdminPlayerDataInfo
// 0x0040
struct FAdminPlayerDataInfo
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerSteamName;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SteamID;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int64_t                                            LinkedPlayerID;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHost;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.AliveNameAndLocation
// 0x0040
struct FAliveNameAndLocation
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TribeName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint32_t                                           TargetingTeam;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	uint64_t                                           PlayerId;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerState.AlivePlayerDataInfo
// 0x0040
struct FAlivePlayerDataInfo
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PlayerSteamName;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           PlayerId;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TribeName;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	uint64_t                                           TargetingTeamID;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterPlayerController.DinoMapMarkerInfo
// 0x0028
struct FDinoMapMarkerInfo
{
	class APrimalDinoCharacter*                        Dino;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MarkerComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     DinoLocation;                                             // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PreviousLatitudeNumber;                                   // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PreviousLongitudeNumber;                                  // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FColor                                      MarkerColor;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PaintItem
// 0x0020
struct FPaintItem
{
	class UPrimalInventoryComponent*                   InventoryComp;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ColorCode;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              X;                                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.HitMarkerSettings
// 0x0028
struct FHitMarkerSettings
{
	unsigned char                                      bIsVisible : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPlayHitSound : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawDuration;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitSound;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ARKTributeDinoListing
// 0x00F0
struct FARKTributeDinoListing
{
	class FString                                      DinoName;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	class FString                                      DinoStats[0xC];                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
	float                                              DinoExperiencePoints;                                     // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UClass*                                      DinoClass;                                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID1;                                                  // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           DinoID2;                                                  // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           ExpirationTimeUTC;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalLocalProfile.ArkTributePlayerDataListing
// 0x0100
struct FArkTributePlayerDataListing
{
	uint64_t                                           PlayerDataID;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      PlayerStats[0xC];                                         // 0x0018(0x0010) (ZeroConstructor, Transient)
	bool                                               bWasAllowDPCUpload;                                       // 0x00D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class FString                                      UploadingServerMapName;                                   // 0x00E0(0x0010) (ZeroConstructor, Transient)
	bool                                               bWithItems;                                               // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	uint32_t                                           ItemCount;                                                // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Version;                                                  // 0x00F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           ExpirationTimeUTC;                                        // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ChatMessage
// 0x0090
struct FChatMessage
{
	class FString                                      SenderName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SenderSteamName;                                          // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      SenderTribeName;                                          // 0x0020(0x0010) (ZeroConstructor)
	uint32_t                                           SenderId;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class FString                                      Message;                                                  // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Receiver;                                                 // 0x0048(0x0010) (ZeroConstructor)
	int                                                SenderTeamIndex;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	double                                             ReceivedTime;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EChatSendMode>                         SendMode;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	uint32_t                                           RadioFrequency;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EChatType>                             ChatType;                                                 // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class UTexture2D*                                  SenderIcon;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      UserId;                                                   // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.DecalData
// 0x0020
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalImpactNormalOffset;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomAngleRange;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneVolumeEffect
// 0x0048
struct FBiomeZoneVolumeEffect
{
	TEnumAsByte<EBiomeZone>                            BiomeZone;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDecalData                                  DecalData;                                                // 0x0010(0x0020) (Edit)
	unsigned char                                      bIsImpactEffect : 1;                                      // 0x0030(0x0001) (Edit)
	unsigned char                                      bIsNonImpactEffect : 1;                                   // 0x0030(0x0001) (Edit)
	unsigned char                                      bIsUnderwaterEffect : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      bDecalUniformSize : 1;                                    // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpawnDistance;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpawnDistance;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAtMinDistance;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleAtMaxDistance;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.BiomeZoneVolumeEffectUtility.BiomeZoneImpactEffect
// 0x0070
struct FBiomeZoneImpactEffect
{
	class UClass*                                      SpawnActors[0xE];                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ObjectInfo
// 0x0030
struct FObjectInfo
{
	class UObject*                                     Asset;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorToSpawn;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumProbability;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumScale;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumScale;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlignToGroundNormal : 1;                                 // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRandomYaw : 1;                                           // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleByFoliageSettings : 1;                              // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct ShooterGame.ObjectListItem
// 0x0038
struct FObjectListItem
{
	struct FObjectInfo                                 ObjectInfo;                                               // 0x0000(0x0030) (Edit, BlueprintVisible)
	float                                              Probability;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMapColor
// 0x0014
struct FBiomeMiniMapColor
{
	float                                              Height;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.TerrainGenerator.BiomeMiniMap
// 0x0018
struct FBiomeMiniMap
{
	class UFloatMap*                                   Map;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBiomeMiniMapColor>                  HeightsColors;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.CustomButtonWidgetStyle
// 0x0040 (0x0048 - 0x0008)
struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
{
	struct FLinearColor                                NormalChildTintColor;                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HoveredChildTintColor;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PressedChildTintColor;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DisabledChildTintColor;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.DataListEntryButton_PrimalFolder.PrimalFolderIcons
// 0x0020
struct FPrimalFolderIcons
{
	class UTexture2D*                                  NormalFolder;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  CustomFolder;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Back;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.DataListEntryButton.DataListEntryButtonBorderColors
// 0x0010
struct FDataListEntryButtonBorderColors
{
	struct FColor                                      Normal;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Hovered;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Pressed;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Disabled;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.DamageVolumeBase.DamageNegatingItem
// 0x0010
struct FDamageNegatingItem
{
	class UClass*                                      ItemSubclass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegationFactor;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.FlockingBehavior.Boid
// 0x0054
struct FBoid
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurnRate;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseTargeting : 1;                                        // 0x003C(0x0001) (Edit)
	unsigned char                                      bHasReachedTarget : 1;                                    // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bIsAlive : 1;                                             // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              SpiralTime;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoidType>                             Type;                                                     // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.FlockingBehavior.AvoidanceArea
// 0x0070
struct FAvoidanceArea
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (Edit, IsPlainOldData)
	struct FVector                                     BoxExtents;                                               // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             CreationTime;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bBlockBox : 1;                                            // 0x0068(0x0001) (Edit)
	unsigned char                                      bBlockSphere : 1;                                         // 0x0068(0x0001) (Edit)
	unsigned char                                      bIsDynamic : 1;                                           // 0x0068(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.FlockingBehavior.FlockPersistentData
// 0x0038
struct FFlockPersistentData
{
	float                                              AvoidanceAreaDecayRate;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceTraceInterval;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceTraceInferredBoxSize;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceTraceInferredSphereRadius;                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceTraceForwardDistance;                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceTraceDownDistance;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             LastAvoidanceTraceTime;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumAvoidanceAreas;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FAvoidanceArea>                      DynamicAvoidanceAreas;                                    // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct ShooterGame.FlockingBehavior.BoidBehavior
// 0x0040
struct FBoidBehavior
{
	TArray<struct FAvoidanceArea>                      AvoidanceAreas;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              DesiredSeparation;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeighborDist;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationMultiplier;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignmentMultiplier;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CohesionMultiplier;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceMultiplier;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetingMultiplier;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceToLeaders;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplier;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForceMultiplier;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBoundsCulling;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BoundsCullingMultiplier;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateNPCGroup
// 0x0040
struct FHordeCrateNPCGroup
{
	TArray<class UClass*>                              NPCClasses;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      NPCWeights;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        MinLevels;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        MaxLevels;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateWave
// 0x0050
struct FHordeCrateWave
{
	int                                                MinNumOfNPCs;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOfNPCs;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPrepareForWave;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHordeCrateNPCGroup                         NPCsToSpawn;                                              // 0x0010(0x0040) (Edit)
};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateDifficultyLevel
// 0x00A0
struct FHordeCrateDifficultyLevel
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MaxNumOfEventsForDifficulty;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DifficultyLevel;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNPCsToStart;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNPCsToStart;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FHordeCrateNPCGroup                         StartingNPCs;                                             // 0x0018(0x0040) (Edit)
	TArray<struct FHordeCrateWave>                     NPCWavesToComplete;                                       // 0x0058(0x0010) (Edit, ZeroConstructor)
	float                                              MinTimeBeforeSelfDestruct;                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBeforeSelfDestruct;                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorTemplate;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinQualityMultiplier;                                     // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxQualityMultiplier;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmtRewardItems;                                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmtRewardItems;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DifficultyColor;                                          // 0x0088(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MainNodeElementPct;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.HordeCrateManager.HordeCrateEvent
// 0x0020
struct FHordeCrateEvent
{
	double                                             EventStartTime;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       HordeSpawnNetwork;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       HordeModeCrate;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenInitiated;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventType;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.NPCZoneManager.LinkedZoneSpawnVolumeEntry
// 0x0030
struct FLinkedZoneSpawnVolumeEntry
{
	class ANPCZoneSpawnVolume*                         LinkedZoneSpawnVolume;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              ZoneSpawnVolumeFloors;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FName>                               ZoneSpawnVolumeFloorTags;                                 // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	float                                              EntryWeight;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.NPCZoneVolume.HibernationCountInfo
// 0x0010
struct FHibernationCountInfo
{
	class UClass*                                      ClassType;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalCableComponent.CableParticle
// 0x001C
struct FCableParticle
{
	bool                                               bFree;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldPosition;                                              // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.DamageTypeAdjuster
// 0x0010
struct FDamageTypeAdjuster
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIgnoreMultiplierIfWildDinoAttacker : 1;                  // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnoreMultiplierIfTamedDinoAttacker : 1;                 // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyUseMultiplierIfWildDinoAttacker : 1;                 // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyUseMultiplierIfTamedDinoAttacker : 1;                // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyUseMultiplierIfTamed : 1;                            // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalCharacter.PrimalSnapshotPose
// 0x0040
struct FPrimalSnapshotPose
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UAnimSequence*                               Sequence;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Pedestal;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class FString                                      PedestalBone;                                             // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     RootOffset;                                               // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.BoneDamageAdjuster
// 0x000C
struct FBoneDamageAdjuster
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalCharacter.DefaultTextureParamOverride
// 0x0010
struct FDefaultTextureParamOverride
{
	struct FName                                       TextureParamName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TextureValue;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.BlueprintVisualLogEntry
// 0x0030
struct FBlueprintVisualLogEntry
{
	class FString                                      Category;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Key;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.HUDElement
// 0x00B0
struct FHUDElement
{
	TEnumAsByte<EHUDElementType>                       Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      bIsVisible : 1;                                           // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsEditorOnly : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRespectPlayerUIScaleSetting : 1;                         // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bTitleIsExtendedInfo : 1;                                 // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLabelIsExtendedInfo : 1;                                 // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class FString                                      Title;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Label;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextScale;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ProgressColor;                                            // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  ProgressBarFillType;                                      // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHUDElementAnchorMode>                 AnchorMode;                                               // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FAnchors                                    Anchor;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Location;                                                 // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BackgroundImage;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ProgressBarFillImage;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IconSize;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoAttackInfo
// 0x0130
struct FDinoAttackInfo
{
	struct FName                                       AttackName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackWeight;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackRange;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAttackRange;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivateAttackRange;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackInterval;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHighQualityAttack : 1;                                   // 0x001C(0x0001) (Edit)
	unsigned char                                      bSkipUntamed : 1;                                         // 0x001C(0x0001) (Edit)
	unsigned char                                      bSkipTamed : 1;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      bOnlyOnWildDinos : 1;                                     // 0x001C(0x0001) (Edit)
	unsigned char                                      bPreventWhenEncumbered : 1;                               // 0x001C(0x0001) (Edit)
	unsigned char                                      bRidingOnlyAllowOnGround : 1;                             // 0x001C(0x0001) (Edit)
	unsigned char                                      bRidingOnlyAllowWhileFlying : 1;                          // 0x001C(0x0001) (Edit)
	unsigned char                                      bOnlyUseWithPlayersOrRiders : 1;                          // 0x001C(0x0001) (Edit)
	unsigned char                                      bOnlyUseWithPlayers : 1;                                  // 0x001D(0x0001) (Edit)
	unsigned char                                      bPreventWhenSwimming : 1;                                 // 0x001D(0x0001) (Edit)
	unsigned char                                      bPreventWhenInsufficientStamina : 1;                      // 0x001D(0x0001) (Edit)
	unsigned char                                      bSkipOnFlyers : 1;                                        // 0x001D(0x0001) (Edit)
	unsigned char                                      bSkipAI : 1;                                              // 0x001D(0x0001) (Edit)
	unsigned char                                      bPreventOnFemale : 1;                                     // 0x001D(0x0001) (Edit)
	unsigned char                                      bPreventOnMale : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      bPreventWhenDinoCarrying : 1;                             // 0x001D(0x0001) (Edit)
	unsigned char                                      bUseBlueprintCanRiderAttack : 1;                          // 0x001E(0x0001) (Edit)
	unsigned char                                      bRequiresWalking : 1;                                     // 0x001E(0x0001) (Edit)
	unsigned char                                      bRequiresSwimming : 1;                                    // 0x001E(0x0001) (Edit)
	unsigned char                                      AttackStatusStarted : 1;                                  // 0x001E(0x0001) (Transient)
	unsigned char                                      bAttackStopsMovement : 1;                                 // 0x001E(0x0001) (Edit)
	unsigned char                                      bAttackStopsMovementAllowFalling : 1;                     // 0x001E(0x0001) (Edit)
	unsigned char                                      bAttackWithJump : 1;                                      // 0x001E(0x0001) (Edit)
	unsigned char                                      bLocationBasedAttack : 1;                                 // 0x001E(0x0001) (Edit)
	unsigned char                                      bDropCarriedCharacter : 1;                                // 0x001F(0x0001) (Edit)
	unsigned char                                      bCancelAndDropIfCarriedCharacter : 1;                     // 0x001F(0x0001) (Edit)
	unsigned char                                      bPreventAttackWhileRunning : 1;                           // 0x001F(0x0001) (Edit)
	unsigned char                                      ForceUpdateInRange : 1;                                   // 0x001F(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ForceUpdateMeshSelf : 1;                                  // 0x001F(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseSecondaryAnimationInAir : 1;                          // 0x001F(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseBlueprintCanAttack : 1;                               // 0x001F(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseBlueprintAdjustOutputDamage : 1;                      // 0x001F(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bDisableRunningWhenAttacking : 1;                         // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bKeepExecutingWhenAcquiringTarget : 1;                    // 0x0020(0x0001) (Edit)
	unsigned char                                      bPreventWithRider : 1;                                    // 0x0020(0x0001) (Edit)
	unsigned char                                      bAIForceAttackDotProductCheck : 1;                        // 0x0020(0x0001) (Edit)
	unsigned char                                      bInstantlyHarvestCorpse : 1;                              // 0x0020(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAddPawnVelocityToProjectile : 1;                         // 0x0020(0x0001) (Edit)
	unsigned char                                      bAttackStopsRotation : 1;                                 // 0x0020(0x0001) (Edit)
	unsigned char                                      bTamedAISpecialAttack : 1;                                // 0x0020(0x0001) (Edit)
	unsigned char                                      bPreventWhenCarryingExplosive : 1;                        // 0x0021(0x0001) (Edit)
	unsigned char                                      bAllowWhenAnimationPreventsInput : 1;                     // 0x0021(0x0001) (Edit)
	unsigned char                                      bRequireLineOfSight : 1;                                  // 0x0021(0x0001) (Edit)
	unsigned char                                      bUseBPOverrideGetAttackAnimationIndex : 1;                // 0x0021(0x0001) (Edit)
	unsigned char                                      bUseSecondaryAnimationWhenSwimming : 1;                   // 0x0021(0x0001) (Edit)
	unsigned char                                      bUseTertiaryAnimationWhenSwimming : 1;                    // 0x0021(0x0001) (Edit)
	unsigned char                                      bHighQualityAttackOnlyPlayerOrTamed : 1;                  // 0x0021(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	TArray<int>                                        ChildStateIndexes;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              AttackWithJumpChance;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	double                                             LastAttackTime;                                           // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             RiderLastAttackTime;                                      // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackSelectionExpirationTime;                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	double                                             AttackSelectionTime;                                      // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AttackRotationRangeDegrees;                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackRotationGroundSpeedMultiplier;                      // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttackRotationRate;                                       // 0x0068(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FName>                               MeleeSwingSockets;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FName                                       RangedSocket;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeleeDamageAmount;                                        // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageImpulse;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeSwingRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      MeleeDamageType;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackOffset;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RiderAttackInterval;                                      // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DotProductCheckMin;                                       // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotProductCheckMax;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        AttackAnimations;                                         // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationWeights;                                   // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AttackAnimationsTimeFromEndToConsiderFinished;            // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ProjectileClass;                                          // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AttackStateTypeClass;                                     // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackRunningSpeedModifier;                               // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimmingAttackRunningSpeedModifier;                       // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetAttackTargetTime;                                      // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UPrimalAIState*                              AttackStateType;                                          // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FVector>                             LastSocketPositions;                                      // 0x0118(0x0010) (ZeroConstructor, Transient)
	double                                             LastProjectileSpawnTime;                                  // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.HibernationZoneInfo
// 0x0010
struct FHibernationZoneInfo
{
	class ANPCZoneVolume*                              Volume;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoBaseLevelWeightEntry
// 0x000C
struct FDinoBaseLevelWeightEntry
{
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLevelMinRange;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseLevelMaxRange;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.WeightedObjectList
// 0x0020
struct FWeightedObjectList
{
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             AssociatedObjects;                                        // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.PrimalSaddleStructure
// 0x0028
struct FPrimalSaddleStructure
{
	struct FVector                                     DinoRelativeLocation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    DinoRelativeRotation;                                     // 0x000C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class APrimalStructure*                            MyStructure;                                              // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ShooterGame.StatValuePair
// 0x0008
struct FStatValuePair
{
	TEnumAsByte<EPrimalCharacterStatusValue>           Stat;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoSaddleStruct
// 0x0020
struct FDinoSaddleStruct
{
	class USkeletalMeshComponent*                      Saddle;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FItemNetID                                  ItemId;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bJustRemoved;                                             // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoExtraDefaultItemList
// 0x0018
struct FDinoExtraDefaultItemList
{
	int                                                MinimumDinoLevel;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToGive;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              DefaultItemsToGive;                                       // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.ARKDinoData
// 0x0038
struct FARKDinoData
{
	class UClass*                                      DinoClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DinoData;                                                 // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      DinoNameInMap;                                            // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      DinoName;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterCharacter.PlayerStatusStateCharacterSound
// 0x0010
struct FPlayerStatusStateCharacterSound
{
	TEnumAsByte<EPrimalCharacterStatusState>           StateType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundCue*                                   SoundToPlay;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterCharacter.ShooterCharacterPostUpdateTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerController.TransponderInfo
// 0x0028
struct FTransponderInfo
{
	class FString                                      TransName;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TransLocation;                                            // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawingColor;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_Spawn.BoneModifierSlider
// 0x0028
struct FBoneModifierSlider
{
	struct FName                                       SliderWidgetName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBoneModifierRange>                  BoneModifierRanges;                                       // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EBoneModifierType>                     BoneModifierType;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0019(0x000F) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_Spawn.CharacterPreset
// 0x0020
struct FCharacterPreset
{
	float                                              BodyColorSliderValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairColorSliderValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeColorSliderValue;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      BoneModifierSliderValues;                                 // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalCharacterStatusComponent.PrimalCharacterStatusStateThresholds
// 0x0048
struct FPrimalCharacterStatusStateThresholds
{
	TArray<float>                                      HighThresholdStatusStateValues;                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EPrimalCharacterStatusState>>   HighThresholdStatusStateType;                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      LowThresholdStatusStateValues;                            // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<EPrimalCharacterStatusState>>   LowThresholdStatusStateType;                              // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               StatusStateThresholdValuesAbsolute;                       // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTypeSettings
// 0x001C
struct FClimbingTypeSettings
{
	unsigned char                                      bIsOneShot : 1;                                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WaitTime;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaConsumption;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeDurabilityMultiplier;                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachMoveTraceDistance;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachBackTraceDistance;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachForwardTraceDistance;                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalClimbingSettings.ClimbingTransitionParams
// 0x0054
struct FClimbingTransitionParams
{
	float                                              LocationInterpSpeed;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootDuration;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveExp;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveStartOffset;                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveDirectionBias;                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveStartBias;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveEndOffset;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OvershootCurveEndBias;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLocationInterpSpeed;                                // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraRotationInterpSpeed;                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraSwitch;                                            // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              CameraTransitionDuration;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraSwitchStrength;                                     // 0x0034(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSwitchLocationInterpSpeed;                          // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSwitchRotationInterpSpeed;                          // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraSwitchOffset;                                       // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalColorSet.ColorSetDefinition
// 0x0060
struct FColorSetDefinition
{
	class FString                                      RegionName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ColorEntryNames;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RandomWeights;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MinLevel;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxLevel;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalDinoCharacter.DinoFoodEffectivenessMultipliers
// 0x0030
struct FDinoFoodEffectivenessMultipliers
{
	float                                              FoodEffectivenessMultiplier;                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthEffectivenessMultiplier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TorpidityEffectivenessMultiplier;                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityEffectivenessMultiplier;                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffinityOverride;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaEffectivenessMultiplier;                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FoodItemCategory;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      FoodItemParent;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UntamedFoodConsumptionPriority;                           // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
// 0x0030
struct FDamagePrimalCharacterStatusValueModifier
{
	TEnumAsByte<EPrimalCharacterStatusValue>           ValueType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      bSpeedToAddInSeconds : 1;                                 // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bContinueOnUnchangedValue : 1;                            // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnorePawnDamageAdjusters : 1;                           // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bResetExistingModifierDescriptionIndex : 1;               // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetValue : 1;                                            // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetAdditionalValue : 1;                                  // 0x0004(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              LimitExistingModifierDescriptionToMaxAmount;              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UseAbsoluteDamageAmount;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplierAmountToAdd;                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedToAdd;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusValueModifierDescriptionIndex;                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUsePercentualDamage : 1;                                 // 0x001C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bMakeUntameable : 1;                                      // 0x001C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              PercentualDamage;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      ScaleValueByCharacterDamageType;                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalBuff.MaxStatScaler
// 0x000C
struct FMaxStatScaler
{
	TEnumAsByte<EPrimalCharacterStatusValue>           LevelUpValueType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TargetValue;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetValueIsPercent;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalBuff.PostProcessMaterialAdjuster
// 0x0048
struct FPostProcessMaterialAdjuster
{
	class UMaterialInterface*                          PostProcessParentMaterial;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ScalarParameterNames;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ScalarParameterValues;                                    // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               VectorParameterNames;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             VectorParameterValues;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalEngramEntry.EngramEntries
// 0x0010
struct FEngramEntries
{
	TArray<class UClass*>                              EngramEntries;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.HarvestResourceEntry
// 0x0078
struct FHarvestResourceEntry
{
	int                                                OverrideQuantityMax;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OverrideQuantityMin;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverrideQuantityRandomPower;                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EntryWeight;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectivenessQuantityMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectivenessQualityMultiplier;                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ResourceItem;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityMin;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QualityMax;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPGainMax;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPGainMin;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              DamageTypeEntryValuesOverrides;                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryWeightOverrides;                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMinQuantityOverrides;                      // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageTypeEntryMaxQuantityOverrides;                      // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bScaleWithDinoBabyAge : 1;                                // 0x0070(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.DamageHarvestingEntry
// 0x0028
struct FDamageHarvestingEntry
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestQuantityMultiplier;                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageHarvestAdditionalEffectiveness;                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageDurabilityConsumptionMultiplier;                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAllowUnderwaterHarvesting : 1;                           // 0x0010(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      DamageTypeParent;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HarvestDamageFXOverride;                                  // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalHarvestingComponent.ComponentAttachmentEntry
// 0x0020
struct FComponentAttachmentEntry
{
	class UClass*                                      ActorComponentClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ComponentLocationOffset;                                  // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ComponentRotationOffset;                                  // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalTextStyle
// 0x0120
struct FPrimalTextStyle
{
	struct FName                                       StyleName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0118) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalImageStyle
// 0x0090
struct FPrimalImageStyle
{
	struct FName                                       StyleName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInlineTextImageStyle                       ImageStyle;                                               // 0x0008(0x0088) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapTagSettings
// 0x0040
struct FPrimalStructureSnapTagSettings
{
	TArray<struct FName>                               SnapToStructureTagsToExclude;                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapFromStructureTagsToExclude;                           // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapToStructureTagsToInclude;                             // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnapFromStructureTagsToInclude;                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalStructure.PrimalStructureSnapPoint
// 0x00C8
struct FPrimalStructureSnapPoint
{
	struct FName                                       SnapPointDescription;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PointLocOffset;                                           // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PointRotOffset;                                           // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PointComparisonExtraRotOffset;                            // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAttachToPoint : 1;                                       // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachFromPoint : 1;                                     // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHighPriorityAttachToPoint : 1;                           // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapToUseAlternatePlacemenTraceScale : 1;                // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAttachToDisableEncroachmentCheck : 1;                    // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInvalidForStructureLinking : 1;                          // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapForceNoGroundRequirement : 1;                        // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSnapToOnlyAllowSingleAttachment : 1;                     // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPorthole : 1;                                            // 0x002D(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	int                                                ToPointSnapTypeFlags;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ToPointSnapTypeExcludeFlags;                              // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SnapPointMatchGroup;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StaticMeshSnapSocketName;                                 // 0x003C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SnapToStructureTypesToExclude;                            // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToExclude;                          // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapToStructureTypesToInclude;                            // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SnapFromStructureTypesToInclude;                          // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FPrimalStructureSnapTagSettings             SnapTags;                                                 // 0x0088(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalStructure.StructureVariant
// 0x0070
struct FStructureVariant
{
	class FString                                      VariantName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseBPAllowSwitchToVariant;                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMeshTransform;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  MeshTransform;                                            // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UDestructibleMesh*                           DestroyedMeshOverride;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalStructure.PlacementData
// 0x0060
struct FPlacementData
{
	struct FVector                                     AdjustedLocation;                                         // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    AdjustedRotation;                                         // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSnapped;                                                 // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisableEncroachmentCheck;                                // 0x0019(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                MySnapToIndex;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                TheirSnapToIndex;                                         // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AActor*                                      FloorHitActor;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ParentStructure;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ForcePlacedOnFloorParentStructure;                        // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalStructure*                            ReplacesStructure;                                        // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       AttachToPawn;                                             // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AttachToBone;                                             // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APrimalDinoCharacter*                        DinoCharacter;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalStructureSeating.SeatingSpot
// 0x001C
struct FSeatingSpot
{
	int                                                SeatNumber;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.UI_OptionsMenu.KeyBindingItem
// 0x0030
struct FKeyBindingItem
{
	unsigned char                                      bIsAxisMapping : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetName;                                               // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      ActionName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              Scale;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct ShooterGame.UI_HostSession.MapDescription
// 0x0020
struct FMapDescription
{
	class UTexture2D*                                  MapImage;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      MapDescription;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MinAscensionLevelRequired;                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalWorldModifier.FoliageReskinDefinition
// 0x0030
struct FFoliageReskinDefinition
{
	class FString                                      ForFoliage;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  NewFoliageMaterials;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OverrideDestructionMaterials;                             // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideDefinition
// 0x0010
struct FSublevelOverrideDefinition
{
	struct FName                                       SublevelPackageToReplace;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SublevelPackageToActivate;                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalWorldModifier.LevelStaticMeshReskinDefinition
// 0x0018
struct FLevelStaticMeshReskinDefinition
{
	class FString                                      MaterialNameToReplace;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          NewMaterial;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalWorldModifier.SublevelOverrideGroup
// 0x0038
struct FSublevelOverrideGroup
{
	class FString                                      ForMapName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseSublevelOverrides;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FSublevelOverrideDefinition>         SublevelOverrides;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLevelStaticMeshReskinDefinition>    StaticMeshReskins;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.InventoryComponentDefaultItemsAppend
// 0x0038
struct FInventoryComponentDefaultItemsAppend
{
	TArray<class UClass*>                              InventoryComponentClasses;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AddItems;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              RemoveItems;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAddToForceAllowCrafting;                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedStructures
// 0x0018
struct FActiveEventUndeprecatedStructures
{
	struct FName                                       ActiveEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              UndeprecatedStructuresDuringEvent;                        // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedItems
// 0x0018
struct FActiveEventUndeprecatedItems
{
	struct FName                                       ActiveEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              UndeprecatedItemsDuringEvent;                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventUndeprecatedDinos
// 0x0018
struct FActiveEventUndeprecatedDinos
{
	struct FName                                       ActiveEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              UndeprecatedDinosDuringEvent;                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalWorldSettingsEventOverrides.ActiveEventGlobalStatusAdjustments
// 0x0068
struct FActiveEventGlobalStatusAdjustments
{
	struct FName                                       ActiveEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalStatusAdjustmentRateMultipliersPositive[0xC];       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalStatusAdjustmentRateMultipliersNegative[0xC];       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterDamageType.OverrideDamageHarvestingEntry
// 0x0048
struct FOverrideDamageHarvestingEntry
{
	TArray<class UClass*>                              ForHarvestingComponents;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FDamageHarvestingEntry                      HarvestEntryOverride;                                     // 0x0010(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FHarvestResourceEntry>               HarvestResourceEntriesOverride;                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterDamageType.TargetClassDamageScaler
// 0x0010
struct FTargetClassDamageScaler
{
	class UClass*                                      TargetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGame_Menu.ActiveEventMainMenuOverride
// 0x0020
struct FActiveEventMainMenuOverride
{
	struct FName                                       ActiveEvent;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MainMenuBG;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      MusicFilename;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.ShooterGameInstance.AssetPathObjectPair
// 0x0018
struct FAssetPathObjectPair
{
	struct FStringAssetReference                       AssetPath;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     AssetObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.TerrainComponent.InstancedFoligeData
// 0x0010
struct FInstancedFoligeData
{
	class UStaticMeshComponent*                        Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     FoliageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.TerrainComponent.TerrainInfo
// 0x0058
struct FTerrainInfo
{
	class AInstancedFoliageActor*                      FoliageActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FInstancedFoligeData>                InstancedFoligeData;                                      // 0x0008(0x0010) (ZeroConstructor)
	uint16_t                                           PGPropertiesBufferSize;                                   // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<unsigned char>                              PGPropertiesBuffer;                                       // 0x0020(0x0010) (ZeroConstructor)
	int                                                Version;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<float>                                      FromFloatCacheInputs;                                     // 0x0038(0x0010) (ZeroConstructor)
	TArray<int>                                        FromFloatCacheRawOutputs;                                 // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.ShooterGameMode.PlayerDeathReason
// 0x0020
struct FPlayerDeathReason
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      DeathReason;                                              // 0x0008(0x0010) (ZeroConstructor)
	double                                             DiedAtTime;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterGameMode.EngramEntryOverride
// 0x0028
struct FEngramEntryOverride
{
	class FString                                      EngramClassName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                EngramIndex;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EngramHidden;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                EngramPointsCost;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EngramLevelRequirement;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemoveEngramPreReq;                                       // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.EngramEntryAutoUnlock
// 0x0018
struct FEngramEntryAutoUnlock
{
	class FString                                      EngramClassName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                LevelToAutoUnlock;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.DinoSpawnWeightMultiplier
// 0x0014
struct FDinoSpawnWeightMultiplier
{
	struct FName                                       DinoNameTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnWeightMultiplier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideSpawnLimitPercentage;                             // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              SpawnLimitPercentage;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterGameMode.ClassMultiplier
// 0x0018
struct FClassMultiplier
{
	class FString                                      ClassName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Multiplier;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ClassNameReplacement
// 0x0020
struct FClassNameReplacement
{
	class FString                                      FromClassName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ToClassName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ItemCraftingCostOverride
// 0x0018
struct FItemCraftingCostOverride
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCraftingResourceRequirement>        BaseCraftingResourceRequirements;                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigCraftingResourceRequirement
// 0x0020
struct FConfigCraftingResourceRequirement
{
	float                                              BaseResourceRequirement;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      ResourceItemTypeString;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCraftingRequireExactResourceType;                        // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigItemCraftingCostOverride
// 0x0020
struct FConfigItemCraftingCostOverride
{
	class FString                                      ItemClassString;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FConfigCraftingResourceRequirement>  BaseCraftingResourceRequirements;                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.MaxItemQuantityOverride
// 0x0008
struct FMaxItemQuantityOverride
{
	int                                                MaxItemQuantity;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreMultiplier;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigMaxItemQuantityOverride
// 0x0018
struct FConfigMaxItemQuantityOverride
{
	class FString                                      ItemClassString;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FMaxItemQuantityOverride                    Quantity;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ConfigSupplyCrateItemsOverride
// 0x0038
struct FConfigSupplyCrateItemsOverride
{
	class FString                                      SupplyCrateClassString;                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MinItemSets;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemSets;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumItemSetsPower;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetsRandomWithoutReplacement;                            // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FSupplyCrateItemSet>                 ItemSets;                                                 // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               bAppendItemSets;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAppendPreventIncreasingMinMaxItemSets;                   // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameMode.ConfigNPCSpawnEntriesContainer
// 0x0030
struct FConfigNPCSpawnEntriesContainer
{
	class FString                                      NPCSpawnEntriesContainerClassString;                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnEntry>                      NPCSpawnEntries;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNPCSpawnLimit>                      NPCSpawnLimits;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalGameData.ItemMaxItemQuantityOverride
// 0x0010
struct FItemMaxItemQuantityOverride
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMaxItemQuantityOverride                    Quantity;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterGameState.DinoDownloadData
// 0x0010
struct FDinoDownloadData
{
	uint32_t                                           AllowDownloadTimeUTC;                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      UniqueDino;                                               // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterGameState.GameIniData
// 0x0020
struct FGameIniData
{
	class FString                                      PropertyName;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	class FString                                      PropertyValue;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ActionReportItem
// 0x0050
struct FActionReportItem
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TribeName;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TimeOfDeath;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      LevelOfDeath;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DeathMessage;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShooterGame.BattleGameState.PlayerDeathNotification
// 0x0088
struct FPlayerDeathNotification
{
	class FString                                      PlayerDeathStringEnemy;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      PlayerDeathStringAlly;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      PlayerDeathStringYou;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      DeathReason;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              DeadPlayerNames;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsTribeDeath;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class FString                                      DeathTribeName;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TargetingTeam;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	int64_t                                            LinkedPlayerID;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                              // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShooterGame.BattleGameState.BattleTribeData
// 0x0018
struct FBattleTribeData
{
	class FString                                      TribeName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TribeID;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.BattleGameState.BattlePlayerData
// 0x0020
struct FBattlePlayerData
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bConnected;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlive;                                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                TribeID;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterGameUserSettings.DepthOfFieldSetting
// 0x0020
struct FDepthOfFieldSetting
{
	float                                              FocalDistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FocalRegion;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearTransitionRegion;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarTransitionRegion;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBokehSize;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Occlusion;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseGaussianBlur;                                          // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponData
// 0x002C
struct FWeaponData
{
	bool                                               bInfiniteAmmo;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNeverReload;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesAmmo;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDontTakeAmmoOnReload;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFullReloadFromSingleItem;                                // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowAmmoInClipAsPercent;                                 // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                AmmoPerClip;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoPerShot;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSilentOverflowReload;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TimeBetweenShots;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceReloadDuration;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoopedReloadAnim;                                        // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              ReloadDurationPerAmmoCount;                               // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemDurabilityToConsumePerShot;                           // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestResourceMultiplier;                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterWeapon.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterWeapon.InstantWeaponData
// 0x0038
struct FInstantWeaponData
{
	float                                              WeaponSpread;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingSpreadMod;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalWeaponSpreadMultiplier;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalWeaponSpreadTargetingMultiplier;                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringSpreadIncrement;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiringSpreadMax;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponRange;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDamage;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageImpulse;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientSideHitLeeway;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedViewDotHitDir;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterProjectile.ProjectileWeaponData
// 0x0028
struct FProjectileWeaponData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionImpulse;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DirectDamage;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectImpulse;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DirectDamageType;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.VictoryCore.ProjectileArc
// 0x0030
struct FProjectileArc
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartDirection;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LaunchSpeed;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRotationToGravityDirection;                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              OverrideGravityZ;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ItemSetup
// 0x0028
struct FItemSetup
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemBlueprintPath;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinQuality;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxQuality;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoEquip : 1;                                           // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDontStack : 1;                                           // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceBlueprint : 1;                                      // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalGameData.DinoSetup
// 0x00A0
struct FDinoSetup
{
	class UClass*                                      DinoType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      DinoBlueprintPath;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      DinoName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DinoLevel;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BasePointsPerStat[0xC];                                   // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PlayerAddedPointsPerStat[0xC];                            // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>                       DinoState;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   PrioritizeStats;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemSetup>                          TamedDinoInventory;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      SaddleType;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SaddleBlueprintPath;                                      // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SaddleQuality;                                            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SaddleMinRandomQuality;                                   // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsTamed : 1;                                             // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIgnoreMaxTameLimit : 1;                                  // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBlockTamedDialog : 1;                                    // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoEquipSaddle : 1;                                     // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFixedSpawnLevel : 1;                                  // 0x0098(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.VictoryCore.PenetrationTraceHit
// 0x0090
struct FPenetrationTraceHit
{
	struct FHitResult                                  Hit;                                                      // 0x0000(0x0088) (Edit)
	float                                              DistanceFromLastHit;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalDistance;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterWeapon_Climb.ClimbingAnims
// 0x0400
struct FClimbingAnims
{
	struct FWeaponAnim                                 LeftHandAnchored[0x20];                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 RightHandAnchored[0x20];                                  // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.SkyBoxLoader.SkyBoxLoadedStatus
// 0x0020
struct FSkyBoxLoadedStatus
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UTexture2D*                                  LoadedTextureResources[0x3];                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShooterGame.SOTFNotification.SOTFNotificationInfo
// 0x0070
struct FSOTFNotificationInfo
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class FString>                              PlayerNames;                                              // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      PlayerDeathReason;                                        // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      TribeName;                                                // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      CustomDrawString;                                         // 0x0038(0x0010) (ZeroConstructor)
	double                                             StartDisplayTime;                                         // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayInterval;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                              // 0x0058(0x0010) (ZeroConstructor)
	bool                                               bLastPlayer;                                              // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTOFNotificationType>                 Type;                                                     // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.ScrollingTextInfo
// 0x0010
struct FScrollingTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bActive;                                                  // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.PlayerPreviewImage
// 0x0030
struct FPlayerPreviewImage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        PreviewMesh;                                              // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        PlayerNameText;                                           // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TribeComponent;                                           // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        DeathInfo;                                                // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShooterGame.SOTFNotificationDisplay.BannerTextInfo
// 0x0018
struct FBannerTextInfo
{
	class UTextRenderComponent*                        TextComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundComponent;                                      // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ShooterGame.SoundNodeVehicleEngine.VehicleEngineDatum
// 0x0014
struct FVehicleEngineDatum
{
	float                                              FadeInRPMStart;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInRPMEnd;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMStart;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutRPMEnd;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchMultiplier;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnEntry
// 0x0018
struct FSupplyCrateSpawnEntry
{
	float                                              EntryWeight;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      CrateTemplate;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CrateEnemySpawnEntries;                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.SupplyCrateSpawningVolume.SupplyCrateSpawnPointEntry
// 0x0050
struct FSupplyCrateSpawnPointEntry
{
	class AActor*                                      LinkedSpawnPoint;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ANPCZoneManager*                             LinkedEnemySpawnZoneManager;                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       LinkedEnemySpawnZoneManagerTag;                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bTraceGroundPoint : 1;                                    // 0x0018(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     TraceGroundPointDownOffset;                               // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     TraceGroundPointUpOffset;                                 // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              SpawnPointWeight;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FSupplyCrateSpawnEntry>              OverrideSupplyCrateEntries;                               // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ShooterGame.WorldModifiersContainer.PrimalWorldModifierList
// 0x0040
struct FPrimalWorldModifierList
{
	bool                                               bUseActiveEvent;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               ActiveEventNames;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseINIStringOptionValue;                                 // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<class FString>                              INIStringOptionValues;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasOverridePriority;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UClass*                                      WorldModifierClass;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ARKTributeData
// 0x0078
struct FARKTributeData
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EPrimalARKTributeDataType>             DataType;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<unsigned char>                              DataBytes;                                                // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      DataClassName;                                            // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      DataTagName;                                              // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Name;                                                     // 0x0048(0x0010) (ZeroConstructor)
	TArray<class FString>                              DataStats;                                                // 0x0058(0x0010) (ZeroConstructor)
	double                                             LastReceiveDataTime;                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataID1;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataID2;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.SaveLoadDyePaintingItem
// 0x0038
struct FSaveLoadDyePaintingItem
{
	struct FItemNetID                                  ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      ColorName;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FColor                                      DyeColor;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MissingPercentage;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeededPercentage;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            ArchIndex;                                                // 0x0024(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<int>                                        ColorPixels;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.FishSnareData
// 0x000C
struct FFishSnareData
{
	TWeakObjectPtr<class APrimalDinoCharacter>         DinoCharacter;                                            // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnareTime;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShooterGame.GamePadKeyName
// 0x0030
struct FGamePadKeyName
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	class FString                                      Name;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  KeyIcon;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.MekBackpackData
// 0x0058
struct FMekBackpackData
{
	struct FName                                       BackpackType;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       BoolData;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      FloatData;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<double>                                     TimeData;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             VectorData;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              StringData;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShooterGame.PrimalGameData.TutorialDefinition
// 0x0030
struct FTutorialDefinition
{
	class FString                                      TutorialTitle;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TutorialText;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  TutorialImage;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TutorialDuration;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextTutorialIndex;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.PrimalGameData.ItemToDinoStatParams
// 0x0018
struct FItemToDinoStatParams
{
	TEnumAsByte<EPrimalItemStat>                       ItemStat;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           DinoStat;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinItemStatValue;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemStatValue;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinDinoStatValue;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDinoStatValue;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimpleCurve>                          ConversionCurve;                                          // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalItem.RequiresInventorySubclassMapping
// 0x0018
struct FRequiresInventorySubclassMapping
{
	class UClass*                                      InventoryComponentClassParent;                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              RequiresInventoryComponentClassChildren;                  // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.AllClustersInventory.PlayerAllClustersInventory
// 0x0038
struct FPlayerAllClustersInventory
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerController.PrimalStats
// 0x0030
struct FPrimalStats
{
	bool                                               bUsed;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	double                                             StartStatsTime;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PrimalStatsValues[0x7];                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.ShooterPlayerController.NonClusterCharacterUploadData
// 0x0128
struct FNonClusterCharacterUploadData
{
	struct FArkTributePlayerData                       PlayerData;                                               // 0x0000(0x0110)
	uint64_t                                           TribeID;                                                  // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FItemNetInfo>                        Items;                                                    // 0x0118(0x0010) (ZeroConstructor)
};

// ScriptStruct ShooterGame.HibernationManager.HibernationEntity
// 0x0060
struct FHibernationEntity
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ShooterGame.PaintingCache.PaintingStreamingJob
// 0x0040
struct FPaintingStreamingJob
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ShooterGame.PrimalChatFontData
// 0x0038
struct FPrimalChatFontData
{
	struct FName                                       FontName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FontSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FSlateColor                                 FontColor;                                                // 0x0010(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShooterGame.PrimalStructureElevatorPlatform.PrimalDroppedItemOnPlatform
// 0x0028
struct FPrimalDroppedItemOnPlatform
{
	struct FVector                                     ItemRelativeLocation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    ItemRelativeRotation;                                     // 0x000C(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class APrimalStructureItemContainer*               MyItem;                                                   // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ShooterGame.UI_MainMenu.UI_MainMenuLink
// 0x0018
struct FUI_MainMenuLink
{
	class FString                                      Mapname;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Class;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShooterGame.ShooterGameMode.AtlasAdminCommandTrackingEntry
// 0x0060
struct FAtlasAdminCommandTrackingEntry
{
	uint32_t                                           ServerUTCTime;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            PlayerId;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      SteamID;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
	class FString                                      IP;                                                       // 0x0020(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      CommandType;                                              // 0x0040(0x0010) (ZeroConstructor, Transient)
	class FString                                      Command;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.ShooterGameMode.TributePlayerTribeInfo
// 0x0020
struct FTributePlayerTribeInfo
{
	TArray<uint64_t>                                   PlayerDataIDs;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<uint64_t>                                   TribeIDs;                                                 // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ShooterGame.VictoryCore.JoyAnim
// 0x0010
struct FJoyAnim
{
	class UAnimMontage*                                Anim;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShooterGame.StructuresPlus.GlassSettings
// 0x0008
struct FGlassSettings
{
	TEnumAsByte<EGlassTransparencyType>                TransparencyType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Opacity;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
