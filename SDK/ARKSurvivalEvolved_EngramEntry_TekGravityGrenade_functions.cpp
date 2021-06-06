// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekGravityGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekGravityGrenade.EngramEntry_TekGravityGrenade_C.ExecuteUbergraph_EngramEntry_TekGravityGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekGravityGrenade_C::ExecuteUbergraph_EngramEntry_TekGravityGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekGravityGrenade.EngramEntry_TekGravityGrenade_C.ExecuteUbergraph_EngramEntry_TekGravityGrenade");

	UEngramEntry_TekGravityGrenade_C_ExecuteUbergraph_EngramEntry_TekGravityGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
