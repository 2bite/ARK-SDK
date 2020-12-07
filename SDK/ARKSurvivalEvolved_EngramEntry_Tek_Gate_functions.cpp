// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Tek_Gate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Tek_Gate.EngramEntry_Tek_Gate_C.ExecuteUbergraph_EngramEntry_Tek_Gate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Tek_Gate_C::ExecuteUbergraph_EngramEntry_Tek_Gate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Tek_Gate.EngramEntry_Tek_Gate_C.ExecuteUbergraph_EngramEntry_Tek_Gate");

	UEngramEntry_Tek_Gate_C_ExecuteUbergraph_EngramEntry_Tek_Gate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
