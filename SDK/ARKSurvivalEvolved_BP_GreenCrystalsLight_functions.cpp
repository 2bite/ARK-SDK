// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_GreenCrystalsLight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GreenCrystalsLight.BP_GreenCrystalsLight_C.ExecuteUbergraph_BP_GreenCrystalsLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GreenCrystalsLight_C::ExecuteUbergraph_BP_GreenCrystalsLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GreenCrystalsLight.BP_GreenCrystalsLight_C.ExecuteUbergraph_BP_GreenCrystalsLight");

	UBP_GreenCrystalsLight_C_ExecuteUbergraph_BP_GreenCrystalsLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif