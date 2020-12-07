// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Flashlight.EngramEntry_Flashlight_C.ExecuteUbergraph_EngramEntry_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Flashlight_C::ExecuteUbergraph_EngramEntry_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Flashlight.EngramEntry_Flashlight_C.ExecuteUbergraph_EngramEntry_Flashlight");

	UEngramEntry_Flashlight_C_ExecuteUbergraph_EngramEntry_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
