#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveEnd
struct AXenomorph_Character_BP_Male_C_DiveEnd_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyClaimed
struct AXenomorph_Character_BP_Male_C_BPNotifyClaimed_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPChangedActorTeam
struct AXenomorph_Character_BP_Male_C_BPChangedActorTeam_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPPreventOrderAllowed
struct AXenomorph_Character_BP_Male_C_BPPreventOrderAllowed_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintExtraBabyScaling
struct AXenomorph_Character_BP_Male_C_BlueprintExtraBabyScaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPShouldForceFlee
struct AXenomorph_Character_BP_Male_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAllowClaiming
struct AXenomorph_Character_BP_Male_C_BPAllowClaiming_Params
{
	class AShooterPlayerController**                   ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPGetMultiUseEntries
struct AXenomorph_Character_BP_Male_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveSetup
struct AXenomorph_Character_BP_Male_C_DiveSetup_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DiveIdle
struct AXenomorph_Character_BP_Male_C_DiveIdle_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_isUnderground
struct AXenomorph_Character_BP_Male_C_OnRep_isUnderground_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPAdjustAttackIndex
struct AXenomorph_Character_BP_Male_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.OnRep_bIsOffspringMode
struct AXenomorph_Character_BP_Male_C_OnRep_bIsOffspringMode_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BlueprintGetAttackWeight
struct AXenomorph_Character_BP_Male_C_BlueprintGetAttackWeight_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             inputWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPNotifyBabyAgeIncrement
struct AXenomorph_Character_BP_Male_C_BPNotifyBabyAgeIncrement_Params
{
	float*                                             PreviousAge;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.GetDefaultMaleXeno
struct AXenomorph_Character_BP_Male_C_GetDefaultMaleXeno_Params
{
	class AXenomorph_Character_BP_Male_C*              AsXenomorph_Character_BP_Male_C;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.SetupOffspringMeshAndSettings
struct AXenomorph_Character_BP_Male_C_SetupOffspringMeshAndSettings_Params
{
	bool                                               OffspringMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.InitializeDive
struct AXenomorph_Character_BP_Male_C_InitializeDive_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BPBecomeAdult
struct AXenomorph_Character_BP_Male_C_BPBecomeAdult_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.Can Dive
struct AXenomorph_Character_BP_Male_C_Can_Dive_Params
{
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.UserConstructionScript
struct AXenomorph_Character_BP_Male_C_UserConstructionScript_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.DelayedUnbury
struct AXenomorph_Character_BP_Male_C_DelayedUnbury_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BornDiveOut
struct AXenomorph_Character_BP_Male_C_BornDiveOut_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_EndBury
struct AXenomorph_Character_BP_Male_C_AnimNotify_EndBury_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.BeginMaturationTransform
struct AXenomorph_Character_BP_Male_C_BeginMaturationTransform_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.AnimNotify_ChestBurst
struct AXenomorph_Character_BP_Male_C_AnimNotify_ChestBurst_Params
{
};

// Function Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C.ExecuteUbergraph_Xenomorph_Character_BP_Male
struct AXenomorph_Character_BP_Male_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
