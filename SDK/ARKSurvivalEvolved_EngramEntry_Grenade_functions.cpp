// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Grenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Grenade.EngramEntry_Grenade_C.ExecuteUbergraph_EngramEntry_Grenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Grenade_C::ExecuteUbergraph_EngramEntry_Grenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Grenade.EngramEntry_Grenade_C.ExecuteUbergraph_EngramEntry_Grenade");

	UEngramEntry_Grenade_C_ExecuteUbergraph_EngramEntry_Grenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
