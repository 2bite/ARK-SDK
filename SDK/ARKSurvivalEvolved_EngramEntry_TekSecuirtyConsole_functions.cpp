// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekSecuirtyConsole_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekSecuirtyConsole.EngramEntry_TekSecuirtyConsole_C.ExecuteUbergraph_EngramEntry_TekSecuirtyConsole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekSecuirtyConsole_C::ExecuteUbergraph_EngramEntry_TekSecuirtyConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekSecuirtyConsole.EngramEntry_TekSecuirtyConsole_C.ExecuteUbergraph_EngramEntry_TekSecuirtyConsole");

	UEngramEntry_TekSecuirtyConsole_C_ExecuteUbergraph_EngramEntry_TekSecuirtyConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
