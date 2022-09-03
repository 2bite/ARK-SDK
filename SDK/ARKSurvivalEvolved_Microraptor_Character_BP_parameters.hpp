#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino
struct AMicroraptor_Character_BP_C_CheckForTargetOrDino_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee
struct AMicroraptor_Character_BP_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer
struct AMicroraptor_Character_BP_C_ReturnToPlayer_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack
struct AMicroraptor_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target
struct AMicroraptor_Character_BP_C_Add_Z_Velocity_Toward_Target_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim
struct AMicroraptor_Character_BP_C_SwapToCorrectAttackAnim_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse
struct AMicroraptor_Character_BP_C_BPCanTargetCorpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack
struct AMicroraptor_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis
struct AMicroraptor_Character_BP_C_BPUnstasis_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino
struct AMicroraptor_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch
struct AMicroraptor_Character_BP_C_DinoShoulderMountedLaunch_Params
{
	struct FVector*                                    launchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          throwingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target
struct AMicroraptor_Character_BP_C_Get_Height_Difference_To_Target_Params
{
	float                                              HeightDifference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTargetValid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack
struct AMicroraptor_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched
struct AMicroraptor_Character_BP_C_OnLaunched_Params
{
	struct FVector*                                    LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bXYOverride;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bZOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage
struct AMicroraptor_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript
struct AMicroraptor_Character_BP_C_UserConstructionScript_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide
struct AMicroraptor_Character_BP_C_EndGlide_Params
{
	bool                                               Don_tSetPhysicsState;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide
struct AMicroraptor_Character_BP_C_StartGlide_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer
struct AMicroraptor_Character_BP_C_BPTimerServer_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay
struct AMicroraptor_Character_BP_C_StartGlideAfterDelay_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump
struct AMicroraptor_Character_BP_C_ResetAndAllowJump_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump
struct AMicroraptor_Character_BP_C_StartRaptorJump_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse
struct AMicroraptor_Character_BP_C_DelayedImpulse_Params
{
	class APrimalCharacter*                            ImpulseTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump
struct AMicroraptor_Character_BP_C_AnimNotify_NonGlideJump_Params
{
};

// Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP
struct AMicroraptor_Character_BP_C_ExecuteUbergraph_Microraptor_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
