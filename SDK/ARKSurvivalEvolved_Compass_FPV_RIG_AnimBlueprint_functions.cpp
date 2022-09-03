// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Compass_FPV_RIG_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_500
// ()

void UCompass_FPV_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_500()
{
	static auto fn = UObject::FindObject<UFunction>("Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_500");

	UCompass_FPV_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_500_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UCompass_FPV_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");

	UCompass_FPV_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCompass_FPV_RIG_AnimBlueprint_C::ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compass_FPV_RIG_AnimBlueprint.Compass_FPV_RIG_AnimBlueprint_C.ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint");

	UCompass_FPV_RIG_AnimBlueprint_C_ExecuteUbergraph_Compass_FPV_RIG_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
