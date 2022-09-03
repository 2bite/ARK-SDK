#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesmodusAnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.IsDiving
struct UDesmodusAnimBlueprint_C_IsDiving_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.UpdateDivingLeftRight
struct UDesmodusAnimBlueprint_C_UpdateDivingLeftRight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDiving;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.UpdateDivingForwardBack
struct UDesmodusAnimBlueprint_C_UpdateDivingForwardBack_Params
{
	class APrimalDinoCharacter*                        Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.BlueprintPlayAnimationEvent
struct UDesmodusAnimBlueprint_C_BlueprintPlayAnimationEvent_Params
{
	class UAnimMontage**                               AnimationMontage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              playedAnimLength;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6654
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6654_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ModifyBone_1002
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ModifyBone_1002_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6653
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6653_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6652
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6652_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6651
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6651_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8279
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8279_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6650
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6650_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6649
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6649_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8277
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8277_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6648
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6648_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6647
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6647_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8276
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8276_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8275
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8275_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6646
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6646_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6645
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6645_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6644
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6644_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8274
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8274_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8273
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8273_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8272
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_SequencePlayer_8272_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6643
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6643_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6642
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6642_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6641
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6641_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ApplyAdditive_617
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_ApplyAdditive_617_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6640
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6640_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6639
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6639_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_426
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_426_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_474
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_474_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_473
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_473_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_425
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_425_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_424
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_424_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6638
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6638_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_472
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendSpacePlayer_472_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6637
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6637_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6636
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6636_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6635
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6635_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6634
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6634_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6633
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6633_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6632
struct UDesmodusAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DesmodusAnimBlueprint_AnimGraphNode_BlendListByBool_6632_Params
{
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.BlueprintUpdateAnimation
struct UDesmodusAnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DesmodusAnimBlueprint.DesmodusAnimBlueprint_C.ExecuteUbergraph_DesmodusAnimBlueprint
struct UDesmodusAnimBlueprint_C_ExecuteUbergraph_DesmodusAnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
