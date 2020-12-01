#pragma once

// ARKSurvivalEvolved (301.1) SDK

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

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_816
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ModifyBone_816_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4936
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4936_Params
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

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4935
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4935_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4934
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4934_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4933
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4933_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4932
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4932_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4931
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4931_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4930
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4930_Params
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

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4929
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4929_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4928
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4928_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4927
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4927_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4926
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4926_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4925
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4925_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_418
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_ApplyAdditive_418_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4924
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4924_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4923
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4923_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4922
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4922_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4921
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4921_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4920
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4920_Params
{
};

// Function TEKHoverSkiff_AnimBlueprint.TEKHoverSkiff_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4919
struct UTEKHoverSkiff_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSkiff_AnimBlueprint_AnimGraphNode_BlendListByBool_4919_Params
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
