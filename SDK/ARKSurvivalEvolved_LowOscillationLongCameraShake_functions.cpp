// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LowOscillationLongCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LowOscillationLongCameraShake.LowOscillationLongCameraShake_C.ExecuteUbergraph_LowOscillationLongCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULowOscillationLongCameraShake_C::ExecuteUbergraph_LowOscillationLongCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowOscillationLongCameraShake.LowOscillationLongCameraShake_C.ExecuteUbergraph_LowOscillationLongCameraShake");

	ULowOscillationLongCameraShake_C_ExecuteUbergraph_LowOscillationLongCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
