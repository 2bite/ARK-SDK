// ARKSurvivalEvolved (329.9) SDK

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


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_293
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_293()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_293");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_293_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_174
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_174()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_174");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_174_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_294
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_294()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_294");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_294_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_954
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_954()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_954");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_954_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_474
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_474()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_474");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_474_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_4356
// ()

void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_4356()
{
	static auto fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_4356");

	UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_4356_Params params;

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
