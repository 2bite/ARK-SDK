// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_HLN-A_ExplorerNote_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_HLN_A_ExplorerNote_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.BlueprintUpdateAnimation");

	USK_HLN_A_ExplorerNote_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.ExecuteUbergraph_SK_HLN-A_ExplorerNote_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USK_HLN_A_ExplorerNote_AnimBlueprint_C::ExecuteUbergraph_SK_HLN_A_ExplorerNote_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_HLN-A_ExplorerNote_AnimBlueprint.SK_HLN-A_ExplorerNote_AnimBlueprint_C.ExecuteUbergraph_SK_HLN-A_ExplorerNote_AnimBlueprint");

	USK_HLN_A_ExplorerNote_AnimBlueprint_C_ExecuteUbergraph_SK_HLN_A_ExplorerNote_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
