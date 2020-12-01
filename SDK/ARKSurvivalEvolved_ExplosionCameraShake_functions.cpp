// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionCameraShake.ExplosionCameraShake_C.ExecuteUbergraph_ExplosionCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UExplosionCameraShake_C::ExecuteUbergraph_ExplosionCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionCameraShake.ExplosionCameraShake_C.ExecuteUbergraph_ExplosionCameraShake");

	UExplosionCameraShake_C_ExecuteUbergraph_ExplosionCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
