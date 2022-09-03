// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_FireCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_FireCameraShake.WeapRifle_FireCameraShake_C.ExecuteUbergraph_WeapRifle_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapRifle_FireCameraShake_C::ExecuteUbergraph_WeapRifle_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_FireCameraShake.WeapRifle_FireCameraShake_C.ExecuteUbergraph_WeapRifle_FireCameraShake");

	UWeapRifle_FireCameraShake_C_ExecuteUbergraph_WeapRifle_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
