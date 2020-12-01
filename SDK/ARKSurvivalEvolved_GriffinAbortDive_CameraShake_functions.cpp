// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GriffinAbortDive_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GriffinAbortDive_CameraShake.GriffinAbortDive_CameraShake_C.ExecuteUbergraph_GriffinAbortDive_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGriffinAbortDive_CameraShake_C::ExecuteUbergraph_GriffinAbortDive_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GriffinAbortDive_CameraShake.GriffinAbortDive_CameraShake_C.ExecuteUbergraph_GriffinAbortDive_CameraShake");

	UGriffinAbortDive_CameraShake_C_ExecuteUbergraph_GriffinAbortDive_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
