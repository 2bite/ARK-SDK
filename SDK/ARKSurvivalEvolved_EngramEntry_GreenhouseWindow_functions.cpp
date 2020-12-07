// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseWindow.EngramEntry_GreenhouseWindow_C.ExecuteUbergraph_EngramEntry_GreenhouseWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseWindow_C::ExecuteUbergraph_EngramEntry_GreenhouseWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseWindow.EngramEntry_GreenhouseWindow_C.ExecuteUbergraph_EngramEntry_GreenhouseWindow");

	UEngramEntry_GreenhouseWindow_C_ExecuteUbergraph_EngramEntry_GreenhouseWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
