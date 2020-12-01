// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_Jump_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climber_Jump_CameraShake.Climber_Jump_CameraShake_C.ExecuteUbergraph_Climber_Jump_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_Jump_CameraShake_C::ExecuteUbergraph_Climber_Jump_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_Jump_CameraShake.Climber_Jump_CameraShake_C.ExecuteUbergraph_Climber_Jump_CameraShake");

	UClimber_Jump_CameraShake_C_ExecuteUbergraph_Climber_Jump_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
