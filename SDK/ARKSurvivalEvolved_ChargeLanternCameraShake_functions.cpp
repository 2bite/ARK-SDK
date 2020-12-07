// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeLanternCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChargeLanternCameraShake.ChargeLanternCameraShake_C.ExecuteUbergraph_ChargeLanternCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChargeLanternCameraShake_C::ExecuteUbergraph_ChargeLanternCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeLanternCameraShake.ChargeLanternCameraShake_C.ExecuteUbergraph_ChargeLanternCameraShake");

	UChargeLanternCameraShake_C_ExecuteUbergraph_ChargeLanternCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
