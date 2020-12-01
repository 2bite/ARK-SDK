// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPistol_ShotgunCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C.ExecuteUbergraph_WeapPistol_ShotgunCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapPistol_ShotgunCameraShake_C::ExecuteUbergraph_WeapPistol_ShotgunCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C.ExecuteUbergraph_WeapPistol_ShotgunCameraShake");

	UWeapPistol_ShotgunCameraShake_C_ExecuteUbergraph_WeapPistol_ShotgunCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
