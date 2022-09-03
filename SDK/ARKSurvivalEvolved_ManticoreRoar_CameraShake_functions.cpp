// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ManticoreRoar_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ManticoreRoar_CameraShake.ManticoreRoar_CameraShake_C.ExecuteUbergraph_ManticoreRoar_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UManticoreRoar_CameraShake_C::ExecuteUbergraph_ManticoreRoar_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManticoreRoar_CameraShake.ManticoreRoar_CameraShake_C.ExecuteUbergraph_ManticoreRoar_CameraShake");

	UManticoreRoar_CameraShake_C_ExecuteUbergraph_ManticoreRoar_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
