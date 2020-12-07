// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekGrenade.EngramEntry_TekGrenade_C.ExecuteUbergraph_EngramEntry_TekGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekGrenade_C::ExecuteUbergraph_EngramEntry_TekGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekGrenade.EngramEntry_TekGrenade_C.ExecuteUbergraph_EngramEntry_TekGrenade");

	UEngramEntry_TekGrenade_C_ExecuteUbergraph_EngramEntry_TekGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
