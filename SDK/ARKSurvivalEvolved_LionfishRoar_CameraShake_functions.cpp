// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishRoar_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishRoar_CameraShake.LionfishRoar_CameraShake_C.ExecuteUbergraph_LionfishRoar_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishRoar_CameraShake_C::ExecuteUbergraph_LionfishRoar_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishRoar_CameraShake.LionfishRoar_CameraShake_C.ExecuteUbergraph_LionfishRoar_CameraShake");

	ULionfishRoar_CameraShake_C_ExecuteUbergraph_LionfishRoar_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
