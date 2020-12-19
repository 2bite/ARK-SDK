// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Campfire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Campfire.EngramEntry_Campfire_C.ExecuteUbergraph_EngramEntry_Campfire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Campfire_C::ExecuteUbergraph_EngramEntry_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Campfire.EngramEntry_Campfire_C.ExecuteUbergraph_EngramEntry_Campfire");

	UEngramEntry_Campfire_C_ExecuteUbergraph_EngramEntry_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
