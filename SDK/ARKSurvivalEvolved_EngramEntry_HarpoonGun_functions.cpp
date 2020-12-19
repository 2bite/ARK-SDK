// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HarpoonGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HarpoonGun.EngramEntry_HarpoonGun_C.ExecuteUbergraph_EngramEntry_HarpoonGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HarpoonGun_C::ExecuteUbergraph_EngramEntry_HarpoonGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HarpoonGun.EngramEntry_HarpoonGun_C.ExecuteUbergraph_EngramEntry_HarpoonGun");

	UEngramEntry_HarpoonGun_C_ExecuteUbergraph_EngramEntry_HarpoonGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
