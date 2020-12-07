// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_WallJump_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climber_WallJump_CameraShake.Climber_WallJump_CameraShake_C.ExecuteUbergraph_Climber_WallJump_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_WallJump_CameraShake_C::ExecuteUbergraph_Climber_WallJump_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_WallJump_CameraShake.Climber_WallJump_CameraShake_C.ExecuteUbergraph_Climber_WallJump_CameraShake");

	UClimber_WallJump_CameraShake_C_ExecuteUbergraph_Climber_WallJump_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
