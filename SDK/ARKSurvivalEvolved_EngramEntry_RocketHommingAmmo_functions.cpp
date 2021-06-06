// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RocketHommingAmmo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RocketHommingAmmo.EngramEntry_RocketHommingAmmo_C.ExecuteUbergraph_EngramEntry_RocketHommingAmmo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RocketHommingAmmo_C::ExecuteUbergraph_EngramEntry_RocketHommingAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RocketHommingAmmo.EngramEntry_RocketHommingAmmo_C.ExecuteUbergraph_EngramEntry_RocketHommingAmmo");

	UEngramEntry_RocketHommingAmmo_C_ExecuteUbergraph_EngramEntry_RocketHommingAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
