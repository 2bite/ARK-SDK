// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseNoteMeshAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintTriggerAnimationEvent
// ()
// Parameters:
// struct FName*                  AnimationEventName             (Parm, ZeroConstructor, IsPlainOldData)
// float                          playedAnimLength               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBaseNoteMeshAnimBP_C::BlueprintTriggerAnimationEvent(struct FName* AnimationEventName, float* playedAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintTriggerAnimationEvent");

	UBaseNoteMeshAnimBP_C_BlueprintTriggerAnimationEvent_Params params;
	params.AnimationEventName = AnimationEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playedAnimLength != nullptr)
		*playedAnimLength = params.playedAnimLength;
}


// Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_2256
// ()

void UBaseNoteMeshAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_2256()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_2256");

	UBaseNoteMeshAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_2256_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UBaseNoteMeshAnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintUpdateAnimation");

	UBaseNoteMeshAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.ExecuteUbergraph_BaseNoteMeshAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBaseNoteMeshAnimBP_C::ExecuteUbergraph_BaseNoteMeshAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.ExecuteUbergraph_BaseNoteMeshAnimBP");

	UBaseNoteMeshAnimBP_C_ExecuteUbergraph_BaseNoteMeshAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
