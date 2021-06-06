#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Equus_Character_BP.Equus_Character_BP_C.BPModifyHarvestDamage
struct AEquus_Character_BP_C_BPModifyHarvestDamage_Params
{
	class UPrimalHarvestingComponent**                 harvestComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inDamage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.Setup Buck Taming Stats
struct AEquus_Character_BP_C_Setup_Buck_Taming_Stats_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPTryMultiUse
struct AEquus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPGetMultiUseEntries
struct AEquus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPTimerNonDedicated
struct AEquus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.UpdateRandomLocation
struct AEquus_Character_BP_C_UpdateRandomLocation_Params
{
	bool                                               FoundValidPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocationPoint;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.IncreaseTamingAffinity
struct AEquus_Character_BP_C_IncreaseTamingAffinity_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPDoAttack
struct AEquus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.Reset Buck Taming Stats
struct AEquus_Character_BP_C_Reset_Buck_Taming_Stats_Params
{
	bool                                               ForceReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPSetupTamed
struct AEquus_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPPreventInputType
struct AEquus_Character_BP_C_BPPreventInputType_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.ForceDismount
struct AEquus_Character_BP_C_ForceDismount_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.ConsumeValidFood
struct AEquus_Character_BP_C_ConsumeValidFood_Params
{
	bool                                               DidConsumeFood;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EffectivenessMultiplier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPNotifySetRider
struct AEquus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPTimerServer
struct AEquus_Character_BP_C_BPTimerServer_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.BPUntamedConsumeFoodItem
struct AEquus_Character_BP_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.UserConstructionScript
struct AEquus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.StartMount
struct AEquus_Character_BP_C_StartMount_Params
{
	class AShooterCharacter*                           TargetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.ThrowPlayerOrTame
struct AEquus_Character_BP_C_ThrowPlayerOrTame_Params
{
	float                                              BuckAnimLength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.SetAllowRiding
struct AEquus_Character_BP_C_SetAllowRiding_Params
{
	bool                                               ShouldAllow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayFedSound
struct AEquus_Character_BP_C_Server_PlayFedSound_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.ClearBucking
struct AEquus_Character_BP_C_ClearBucking_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayStoleFoodSound
struct AEquus_Character_BP_C_Server_PlayStoleFoodSound_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.PathingInput
struct AEquus_Character_BP_C_PathingInput_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.Server_Path
struct AEquus_Character_BP_C_Server_Path_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.Multi_UpdateRandomDestination
struct AEquus_Character_BP_C_Multi_UpdateRandomDestination_Params
{
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Equus_Character_BP.Equus_Character_BP_C.ThrowOrTameNoDelay
struct AEquus_Character_BP_C_ThrowOrTameNoDelay_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.RespondToDismount
struct AEquus_Character_BP_C_RespondToDismount_Params
{
};

// Function Equus_Character_BP.Equus_Character_BP_C.ExecuteUbergraph_Equus_Character_BP
struct AEquus_Character_BP_C_ExecuteUbergraph_Equus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
