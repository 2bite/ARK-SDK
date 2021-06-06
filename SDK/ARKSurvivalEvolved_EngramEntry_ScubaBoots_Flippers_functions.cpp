// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ScubaBoots_Flippers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C.ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ScubaBoots_Flippers_C::ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C.ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers");

	UEngramEntry_ScubaBoots_Flippers_C_ExecuteUbergraph_EngramEntry_ScubaBoots_Flippers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
