// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishBuildDash_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishBuildDash_CameraShake.LionfishBuildDash_CameraShake_C.ExecuteUbergraph_LionfishBuildDash_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishBuildDash_CameraShake_C::ExecuteUbergraph_LionfishBuildDash_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishBuildDash_CameraShake.LionfishBuildDash_CameraShake_C.ExecuteUbergraph_LionfishBuildDash_CameraShake");

	ULionfishBuildDash_CameraShake_C_ExecuteUbergraph_LionfishBuildDash_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
