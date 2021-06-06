// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishReleaseDash_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishReleaseDash_CameraShake.LionfishReleaseDash_CameraShake_C.ExecuteUbergraph_LionfishReleaseDash_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishReleaseDash_CameraShake_C::ExecuteUbergraph_LionfishReleaseDash_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishReleaseDash_CameraShake.LionfishReleaseDash_CameraShake_C.ExecuteUbergraph_LionfishReleaseDash_CameraShake");

	ULionfishReleaseDash_CameraShake_C_ExecuteUbergraph_LionfishReleaseDash_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
