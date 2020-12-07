// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPistol_OneShotRifleCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapPistol_OneShotRifleCameraShake.WeapPistol_OneShotRifleCameraShake_C.ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapPistol_OneShotRifleCameraShake_C::ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapPistol_OneShotRifleCameraShake.WeapPistol_OneShotRifleCameraShake_C.ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake");

	UWeapPistol_OneShotRifleCameraShake_C_ExecuteUbergraph_WeapPistol_OneShotRifleCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
