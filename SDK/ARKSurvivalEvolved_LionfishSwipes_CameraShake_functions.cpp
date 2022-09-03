// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishSwipes_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishSwipes_CameraShake.LionfishSwipes_CameraShake_C.ExecuteUbergraph_LionfishSwipes_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishSwipes_CameraShake_C::ExecuteUbergraph_LionfishSwipes_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishSwipes_CameraShake.LionfishSwipes_CameraShake_C.ExecuteUbergraph_LionfishSwipes_CameraShake");

	ULionfishSwipes_CameraShake_C_ExecuteUbergraph_LionfishSwipes_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
