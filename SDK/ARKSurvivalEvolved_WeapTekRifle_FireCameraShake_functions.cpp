// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekRifle_FireCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C.ExecuteUbergraph_WeapTekRifle_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapTekRifle_FireCameraShake_C::ExecuteUbergraph_WeapTekRifle_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C.ExecuteUbergraph_WeapTekRifle_FireCameraShake");

	UWeapTekRifle_FireCameraShake_C_ExecuteUbergraph_WeapTekRifle_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
