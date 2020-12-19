#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_Scout_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.GetScout
struct UDinoAttackStateRanged_Scout_C_GetScout_Params
{
	class AScout_Character_BP_C*                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnTickEvent
struct UDinoAttackStateRanged_Scout_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnEndEvent
struct UDinoAttackStateRanged_Scout_C_OnEndEvent_Params
{
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.BPRangedAttackOnBegin
struct UDinoAttackStateRanged_Scout_C_BPRangedAttackOnBegin_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.Tracker Impact Pawn or Terrain
struct UDinoAttackStateRanged_Scout_C_Tracker_Impact_Pawn_or_Terrain_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValidTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.CalculateProjectileImpacts
struct UDinoAttackStateRanged_Scout_C_CalculateProjectileImpacts_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnBeginEvent
struct UDinoAttackStateRanged_Scout_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.ExecuteUbergraph_DinoAttackStateRanged_Scout
struct UDinoAttackStateRanged_Scout_C_ExecuteUbergraph_DinoAttackStateRanged_Scout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
