// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HideBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HideBoots.EngramEntry_HideBoots_C.ExecuteUbergraph_EngramEntry_HideBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HideBoots_C::ExecuteUbergraph_EngramEntry_HideBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HideBoots.EngramEntry_HideBoots_C.ExecuteUbergraph_EngramEntry_HideBoots");

	UEngramEntry_HideBoots_C_ExecuteUbergraph_EngramEntry_HideBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
