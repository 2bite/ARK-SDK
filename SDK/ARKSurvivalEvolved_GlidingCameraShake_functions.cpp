// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GlidingCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlidingCameraShake.GlidingCameraShake_C.ExecuteUbergraph_GlidingCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGlidingCameraShake_C::ExecuteUbergraph_GlidingCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlidingCameraShake.GlidingCameraShake_C.ExecuteUbergraph_GlidingCameraShake");

	UGlidingCameraShake_C_ExecuteUbergraph_GlidingCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
