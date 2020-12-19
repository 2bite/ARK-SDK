// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CookingPot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CookingPot.EngramEntry_CookingPot_C.ExecuteUbergraph_EngramEntry_CookingPot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CookingPot_C::ExecuteUbergraph_EngramEntry_CookingPot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CookingPot.EngramEntry_CookingPot_C.ExecuteUbergraph_EngramEntry_CookingPot");

	UEngramEntry_CookingPot_C_ExecuteUbergraph_EngramEntry_CookingPot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
