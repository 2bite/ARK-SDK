// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HLNA_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent
// ()
// Parameters:
// class UAnimMontage**           AnimationMontage               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent");

	UHLNA_AnimBP_C_BlueprintPlayAnimationEvent_Params params;
	params.AnimationMontage = AnimationMontage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_186
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_186()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_186");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_186_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation");

	UHLNA_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHLNA_AnimBP_C::ExecuteUbergraph_HLNA_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP");

	UHLNA_AnimBP_C_ExecuteUbergraph_HLNA_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
