// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RiotBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RiotBoots.EngramEntry_RiotBoots_C.ExecuteUbergraph_EngramEntry_RiotBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RiotBoots_C::ExecuteUbergraph_EngramEntry_RiotBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RiotBoots.EngramEntry_RiotBoots_C.ExecuteUbergraph_EngramEntry_RiotBoots");

	UEngramEntry_RiotBoots_C_ExecuteUbergraph_EngramEntry_RiotBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
