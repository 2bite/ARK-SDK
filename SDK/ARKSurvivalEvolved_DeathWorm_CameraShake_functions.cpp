// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeathWorm_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathWorm_CameraShake.DeathWorm_CameraShake_C.ExecuteUbergraph_DeathWorm_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeathWorm_CameraShake_C::ExecuteUbergraph_DeathWorm_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWorm_CameraShake.DeathWorm_CameraShake_C.ExecuteUbergraph_DeathWorm_CameraShake");

	UDeathWorm_CameraShake_C_ExecuteUbergraph_DeathWorm_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
