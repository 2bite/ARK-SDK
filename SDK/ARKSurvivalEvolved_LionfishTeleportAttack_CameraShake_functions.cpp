// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishTeleportAttack_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishTeleportAttack_CameraShake.LionfishTeleportAttack_CameraShake_C.ExecuteUbergraph_LionfishTeleportAttack_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULionfishTeleportAttack_CameraShake_C::ExecuteUbergraph_LionfishTeleportAttack_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishTeleportAttack_CameraShake.LionfishTeleportAttack_CameraShake_C.ExecuteUbergraph_LionfishTeleportAttack_CameraShake");

	ULionfishTeleportAttack_CameraShake_C_ExecuteUbergraph_LionfishTeleportAttack_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
