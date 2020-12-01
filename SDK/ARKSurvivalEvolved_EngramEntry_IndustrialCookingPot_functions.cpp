// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_IndustrialCookingPot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_IndustrialCookingPot.EngramEntry_IndustrialCookingPot_C.ExecuteUbergraph_EngramEntry_IndustrialCookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_IndustrialCookingPot_C::ExecuteUbergraph_EngramEntry_IndustrialCookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_IndustrialCookingPot.EngramEntry_IndustrialCookingPot_C.ExecuteUbergraph_EngramEntry_IndustrialCookingPot");

	UEngramEntry_IndustrialCookingPot_C_ExecuteUbergraph_EngramEntry_IndustrialCookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
