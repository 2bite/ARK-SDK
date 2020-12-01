// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GasCollector_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GasCollector.EngramEntry_GasCollector_C.ExecuteUbergraph_EngramEntry_GasCollector
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GasCollector_C::ExecuteUbergraph_EngramEntry_GasCollector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GasCollector.EngramEntry_GasCollector_C.ExecuteUbergraph_EngramEntry_GasCollector");

	UEngramEntry_GasCollector_C_ExecuteUbergraph_EngramEntry_GasCollector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
