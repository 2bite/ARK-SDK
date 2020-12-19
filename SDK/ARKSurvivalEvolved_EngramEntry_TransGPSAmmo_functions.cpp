// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TransGPSAmmo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TransGPSAmmo.EngramEntry_TransGPSAmmo_C.ExecuteUbergraph_EngramEntry_TransGPSAmmo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TransGPSAmmo_C::ExecuteUbergraph_EngramEntry_TransGPSAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TransGPSAmmo.EngramEntry_TransGPSAmmo_C.ExecuteUbergraph_EngramEntry_TransGPSAmmo");

	UEngramEntry_TransGPSAmmo_C_ExecuteUbergraph_EngramEntry_TransGPSAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
