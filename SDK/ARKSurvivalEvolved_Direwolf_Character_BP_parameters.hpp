#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direwolf_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.RidingTick
struct ADirewolf_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.AddHowlCooldownBuff
struct ADirewolf_Character_BP_C_AddHowlCooldownBuff_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.PackRoar
struct ADirewolf_Character_BP_C_PackRoar_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintDrawFloatingHUD
struct ADirewolf_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GatherPack
struct ADirewolf_Character_BP_C_GatherPack_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDoAttack
struct ADirewolf_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ADirewolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.DoSniffAbility
struct ADirewolf_Character_BP_C_DoSniffAbility_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetHiddenDinos
struct ADirewolf_Character_BP_C_GetHiddenDinos_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              foundDinos;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetExplorerChestsInRange
struct ADirewolf_Character_BP_C_GetExplorerChestsInRange_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              FoundExplorerChests;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.UpdateSniffedTargets
struct ADirewolf_Character_BP_C_UpdateSniffedTargets_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDrawToRiderHUD
struct ADirewolf_Character_BP_C_BPDrawToRiderHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.DrawSniffedTargets
struct ADirewolf_Character_BP_C_DrawSniffedTargets_Params
{
	class AHUD*                                        HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              LowHealthTargets;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              HiddenTargets;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ExplorerChests;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetEnemysBelowHealthTreshold
struct ADirewolf_Character_BP_C_GetEnemysBelowHealthTreshold_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthTreshold;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              FoundActors;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifyClearRider
struct ADirewolf_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifySetRider
struct ADirewolf_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPModifyHarvestingQuantity
struct ADirewolf_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.UserConstructionScript
struct ADirewolf_Character_BP_C_UserConstructionScript_Params
{
};

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.ExecuteUbergraph_Direwolf_Character_BP
struct ADirewolf_Character_BP_C_ExecuteUbergraph_Direwolf_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
