// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekBridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekBridge.EngramEntry_TekBridge_C.ExecuteUbergraph_EngramEntry_TekBridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekBridge_C::ExecuteUbergraph_EngramEntry_TekBridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekBridge.EngramEntry_TekBridge_C.ExecuteUbergraph_EngramEntry_TekBridge");

	UEngramEntry_TekBridge_C_ExecuteUbergraph_EngramEntry_TekBridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
