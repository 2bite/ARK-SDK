// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraShake_ExosuitRunning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C.ExecuteUbergraph_CameraShake_ExosuitRunning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraShake_ExosuitRunning_C::ExecuteUbergraph_CameraShake_ExosuitRunning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C.ExecuteUbergraph_CameraShake_ExosuitRunning");

	UCameraShake_ExosuitRunning_C_ExecuteUbergraph_CameraShake_ExosuitRunning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
