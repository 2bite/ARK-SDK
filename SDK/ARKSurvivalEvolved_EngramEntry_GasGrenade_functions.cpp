// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GasGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GasGrenade.EngramEntry_GasGrenade_C.ExecuteUbergraph_EngramEntry_GasGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GasGrenade_C::ExecuteUbergraph_EngramEntry_GasGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GasGrenade.EngramEntry_GasGrenade_C.ExecuteUbergraph_EngramEntry_GasGrenade");

	UEngramEntry_GasGrenade_C_ExecuteUbergraph_EngramEntry_GasGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
