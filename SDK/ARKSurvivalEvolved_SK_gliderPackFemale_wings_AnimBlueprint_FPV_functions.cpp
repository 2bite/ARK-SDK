// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_gliderPackFemale_wings_AnimBlueprint_FPV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_gliderPackFemale_wings_AnimBlueprint_FPV_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C.BlueprintUpdateAnimation");

	USK_gliderPackFemale_wings_AnimBlueprint_FPV_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_FPV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_gliderPackFemale_wings_AnimBlueprint_FPV_C::ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_FPV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_gliderPackFemale_wings_AnimBlueprint_FPV.SK_gliderPackFemale_wings_AnimBlueprint_FPV_C.ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_FPV");

	USK_gliderPackFemale_wings_AnimBlueprint_FPV_C_ExecuteUbergraph_SK_gliderPackFemale_wings_AnimBlueprint_FPV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
