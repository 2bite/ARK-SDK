// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GriffinDive_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GriffinDive_CameraShake.GriffinDive_CameraShake_C.ExecuteUbergraph_GriffinDive_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGriffinDive_CameraShake_C::ExecuteUbergraph_GriffinDive_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GriffinDive_CameraShake.GriffinDive_CameraShake_C.ExecuteUbergraph_GriffinDive_CameraShake");

	UGriffinDive_CameraShake_C_ExecuteUbergraph_GriffinDive_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
