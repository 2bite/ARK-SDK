// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPistol_FireCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapPistol_FireCameraShake_C::ExecuteUbergraph_WeapPistol_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPistol_FireCameraShake.WeapPistol_FireCameraShake_C.ExecuteUbergraph_WeapPistol_FireCameraShake");

	UWeapPistol_FireCameraShake_C_ExecuteUbergraph_WeapPistol_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
