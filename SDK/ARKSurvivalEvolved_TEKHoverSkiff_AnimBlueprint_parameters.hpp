#pragma once

// ARKSurvivalEvolved (320.18) SDK

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

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_828
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_828_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5020
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5020_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_310
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_310_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_309
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_309_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_108
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_108_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5019
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5019_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5018
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5018_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5017
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5017_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5016
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5016_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5015
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5015_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5014
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5014_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_308
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_308_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_107
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_TwoWayBlend_107_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5013
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5013_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5012
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5012_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5011
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5011_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5010
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5010_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5009
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5009_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_436
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_436_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5008
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5008_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5007
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5007_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5006
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5006_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5005
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5005_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5004
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5004_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5003
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_5003_Params
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
