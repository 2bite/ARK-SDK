// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_Canoe_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation
// ()
// Parameters:
// struct FVector                 PredictedLoc                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::GetPredictedServerCanoeLocation(struct FVector* PredictedLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation");

	USK_Canoe_AnimBlueprint_C_GetPredictedServerCanoeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PredictedLoc != nullptr)
		*PredictedLoc = params.PredictedLoc;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection
// ()

void USK_Canoe_AnimBlueprint_C::CheckForSimCanoeTransformCorrection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection");

	USK_Canoe_AnimBlueprint_C_CheckForSimCanoeTransformCorrection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::UpdateSimCanoeRotationTargets(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets");

	USK_Canoe_AnimBlueprint_C_UpdateSimCanoeRotationTargets_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::UpdateSimCanoeLocationTargets(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets");

	USK_Canoe_AnimBlueprint_C_UpdateSimCanoeLocationTargets_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef
// ()
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::UpdateValidCanoeOwnerRef(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef");

	USK_Canoe_AnimBlueprint_C_UpdateValidCanoeOwnerRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::UpdateSimulatedCanoeTransform(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform");

	USK_Canoe_AnimBlueprint_C_UpdateSimulatedCanoeTransform_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_924
// ()

void USK_Canoe_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_924()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_924");

	USK_Canoe_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_924_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_Canoe_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation
// ()

void USK_Canoe_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation");

	USK_Canoe_AnimBlueprint_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_Canoe_AnimBlueprint_C::ExecuteUbergraph_SK_Canoe_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint");

	USK_Canoe_AnimBlueprint_C_ExecuteUbergraph_SK_Canoe_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
