#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Megalania_Character_BP.Megalania_Character_BP_C.ClimbingIK_SetNewBlendspaceAxes
struct AMegalania_Character_BP_C_ClimbingIK_SetNewBlendspaceAxes_Params
{
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.GetClimbingIK_BlendspaceAxes_Front
struct AMegalania_Character_BP_C_GetClimbingIK_BlendspaceAxes_Front_Params
{
	struct FVector2D                                   axes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.GetCustomSurfaceTraceDistance
struct AMegalania_Character_BP_C_GetCustomSurfaceTraceDistance_Params
{
	int*                                               TraceIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.IsNormalClimbable
struct AMegalania_Character_BP_C_IsNormalClimbable_Params
{
	struct FVector*                                    Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAverageNormal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.Check For Prevent Stop Climbing
struct AMegalania_Character_BP_C_Check_For_Prevent_Stop_Climbing_Params
{
	TArray<bool>                                       traceHitsArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               numValidHits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numTraces;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowClimbing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanAttack
struct AMegalania_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.BlueprintCanRiderAttack
struct AMegalania_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.UserConstructionScript
struct AMegalania_Character_BP_C_UserConstructionScript_Params
{
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.ReceiveBeginPlay
struct AMegalania_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Megalania_Character_BP.Megalania_Character_BP_C.ExecuteUbergraph_Megalania_Character_BP
struct AMegalania_Character_BP_C_ExecuteUbergraph_Megalania_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
