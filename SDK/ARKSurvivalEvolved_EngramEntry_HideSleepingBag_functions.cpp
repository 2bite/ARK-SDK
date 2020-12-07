// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HideSleepingBag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HideSleepingBag.EngramEntry_HideSleepingBag_C.ExecuteUbergraph_EngramEntry_HideSleepingBag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HideSleepingBag_C::ExecuteUbergraph_EngramEntry_HideSleepingBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HideSleepingBag.EngramEntry_HideSleepingBag_C.ExecuteUbergraph_EngramEntry_HideSleepingBag");

	UEngramEntry_HideSleepingBag_C_ExecuteUbergraph_EngramEntry_HideSleepingBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
