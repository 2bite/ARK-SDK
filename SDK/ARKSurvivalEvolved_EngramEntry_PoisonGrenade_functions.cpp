// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PoisonGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PoisonGrenade.EngramEntry_PoisonGrenade_C.ExecuteUbergraph_EngramEntry_PoisonGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PoisonGrenade_C::ExecuteUbergraph_EngramEntry_PoisonGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PoisonGrenade.EngramEntry_PoisonGrenade_C.ExecuteUbergraph_EngramEntry_PoisonGrenade");

	UEngramEntry_PoisonGrenade_C_ExecuteUbergraph_EngramEntry_PoisonGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
