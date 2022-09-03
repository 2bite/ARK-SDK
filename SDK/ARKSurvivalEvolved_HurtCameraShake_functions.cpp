// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HurtCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HurtCameraShake.HurtCameraShake_C.ExecuteUbergraph_HurtCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHurtCameraShake_C::ExecuteUbergraph_HurtCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HurtCameraShake.HurtCameraShake_C.ExecuteUbergraph_HurtCameraShake");

	UHurtCameraShake_C_ExecuteUbergraph_HurtCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
