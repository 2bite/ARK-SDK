#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TEKHoverSkiff_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateHoveringRootRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateHoveringRootRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateLandedRootRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateLandedRootRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTraces;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ProcessHoverIK
struct UTEKHoverSkiff_AnimBlueprint_C_ProcessHoverIK_Params
{
	struct FRotator                                    NewTargetOffset_Rotation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ComposeMeshTransformOffsets
struct UTEKHoverSkiff_AnimBlueprint_C_ComposeMeshTransformOffsets_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.HoverIK
struct UTEKHoverSkiff_AnimBlueprint_C_HoverIK_Params
{
	bool                                               bOverrideStartTransform;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          NewStartTransform;                                        // (Parm, IsPlainOldData)
	bool                                               bResetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewTargetRotOffset;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewTargetLocOffset;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPlaneNormal;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.UpdateCarriedDinoWeightRatio
struct UTEKHoverSkiff_AnimBlueprint_C_UpdateCarriedDinoWeightRatio_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.CalculateMeshRotationOffset
struct UTEKHoverSkiff_AnimBlueprint_C_CalculateMeshRotationOffset_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintPlayAnimationEvent
struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_1020
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_1020_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6954
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6954_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_502
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_502_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_501
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_501_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_132
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_132_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6953
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6953_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6952
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6952_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6951
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6951_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6950
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6950_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6949
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6949_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6948
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6948_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_500
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_500_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_131
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_131_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6947
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6947_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6946
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6946_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6945
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6945_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6944
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6944_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6943
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6943_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_646
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_646_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6942
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6942_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6941
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6941_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6940
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6940_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6939
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6939_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6938
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6938_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6937
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_6937_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintUpdateAnimation
struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.BlueprintInitializeAnimation
struct UTEKHoverSkiff_AnimBlueprint_C_BlueprintInitializeAnimation_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint
struct UTEKHoverSkiff_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
