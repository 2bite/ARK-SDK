// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraShake_ExosuitLanding_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C.ExecuteUbergraph_CameraShake_ExosuitLanding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraShake_ExosuitLanding_C::ExecuteUbergraph_CameraShake_ExosuitLanding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C.ExecuteUbergraph_CameraShake_ExosuitLanding");

	UCameraShake_ExosuitLanding_C_ExecuteUbergraph_CameraShake_ExosuitLanding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
