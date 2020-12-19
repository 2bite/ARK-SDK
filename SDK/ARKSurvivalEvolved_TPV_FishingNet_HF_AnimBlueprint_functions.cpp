// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_FishingNet_HF_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UTPV_FishingNet_HF_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C.BlueprintUpdateAnimation");

	UTPV_FishingNet_HF_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C.ExecuteUbergraph_TPV_FishingNet_HF_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTPV_FishingNet_HF_AnimBlueprint_C::ExecuteUbergraph_TPV_FishingNet_HF_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TPV_FishingNet_HF_AnimBlueprint.TPV_FishingNet_HF_AnimBlueprint_C.ExecuteUbergraph_TPV_FishingNet_HF_AnimBlueprint");

	UTPV_FishingNet_HF_AnimBlueprint_C_ExecuteUbergraph_TPV_FishingNet_HF_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
