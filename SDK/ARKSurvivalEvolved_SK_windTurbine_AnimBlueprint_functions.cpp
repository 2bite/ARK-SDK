// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_windTurbine_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_572
// ()

void USK_windTurbine_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_572()
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_572");

	USK_windTurbine_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_AnimGraphNode_ModifyBone_572_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_windTurbine_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_windTurbine_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.ExecuteUbergraph_SK_windTurbine_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_windTurbine_AnimBlueprint_C::ExecuteUbergraph_SK_windTurbine_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_windTurbine_AnimBlueprint.SK_windTurbine_AnimBlueprint_C.ExecuteUbergraph_SK_windTurbine_AnimBlueprint");

	USK_windTurbine_AnimBlueprint_C_ExecuteUbergraph_SK_windTurbine_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
