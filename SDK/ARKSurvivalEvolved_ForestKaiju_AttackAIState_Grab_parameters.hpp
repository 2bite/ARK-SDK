#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AttackAIState_Grab_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation
struct UForestKaiju_AttackAIState_Grab_C_UpdateGrabAttackLocation_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge
struct UForestKaiju_AttackAIState_Grab_C_Is_Location_in_Grab_Attack_Wedge_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString
struct UForestKaiju_AttackAIState_Grab_C_DebugPrintString_Params
{
	class FString                                      String;                                                   // (Parm, ZeroConstructor)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim
struct UForestKaiju_AttackAIState_Grab_C_StartAttackAnim_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget
struct UForestKaiju_AttackAIState_Grab_C_PublicIsValidVineTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            ForestKaiju;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget
struct UForestKaiju_AttackAIState_Grab_C_IsValidVineTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            ForestKaiju;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent
struct UForestKaiju_AttackAIState_Grab_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted
struct UForestKaiju_AttackAIState_Grab_C_VineRetracted_Params
{
	TArray<struct FVineTargetData>                     Targets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent
struct UForestKaiju_AttackAIState_Grab_C_OnEndEvent_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere
struct UForestKaiju_AttackAIState_Grab_C_Debug_Draw_Sphere_Params
{
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash
struct UForestKaiju_AttackAIState_Grab_C_AnimNotifyGrabAttackSmash_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine
struct UForestKaiju_AttackAIState_Grab_C_DebugDrawLine_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines
struct UForestKaiju_AttackAIState_Grab_C_SpawnVines_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack
struct UForestKaiju_AttackAIState_Grab_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent
struct UForestKaiju_AttackAIState_Grab_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts
struct UForestKaiju_AttackAIState_Grab_C_FailsafeMissingVineRetracts_Params
{
};

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab
struct UForestKaiju_AttackAIState_Grab_C_ExecuteUbergraph_ForestKaiju_AttackAIState_Grab_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
