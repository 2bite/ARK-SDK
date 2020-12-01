// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChargeLantern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChargeLantern.EngramEntry_ChargeLantern_C.ExecuteUbergraph_EngramEntry_ChargeLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChargeLantern_C::ExecuteUbergraph_EngramEntry_ChargeLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChargeLantern.EngramEntry_ChargeLantern_C.ExecuteUbergraph_EngramEntry_ChargeLantern");

	UEngramEntry_ChargeLantern_C_ExecuteUbergraph_EngramEntry_ChargeLantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
