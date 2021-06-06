// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HardImpactCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HardImpactCameraShake.HardImpactCameraShake_C.ExecuteUbergraph_HardImpactCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHardImpactCameraShake_C::ExecuteUbergraph_HardImpactCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HardImpactCameraShake.HardImpactCameraShake_C.ExecuteUbergraph_HardImpactCameraShake");

	UHardImpactCameraShake_C_ExecuteUbergraph_HardImpactCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
