// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_ImpactCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climber_ImpactCameraShake.Climber_ImpactCameraShake_C.ExecuteUbergraph_Climber_ImpactCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_ImpactCameraShake_C::ExecuteUbergraph_Climber_ImpactCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_ImpactCameraShake.Climber_ImpactCameraShake_C.ExecuteUbergraph_Climber_ImpactCameraShake");

	UClimber_ImpactCameraShake_C_ExecuteUbergraph_Climber_ImpactCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
