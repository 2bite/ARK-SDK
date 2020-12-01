// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_FireBallTrail_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Phoenix_FireBallTrail_Emitter.Phoenix_FireBallTrail_Emitter_C.UserConstructionScript
// ()

void APhoenix_FireBallTrail_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_FireBallTrail_Emitter.Phoenix_FireBallTrail_Emitter_C.UserConstructionScript");

	APhoenix_FireBallTrail_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Phoenix_FireBallTrail_Emitter.Phoenix_FireBallTrail_Emitter_C.ExecuteUbergraph_Phoenix_FireBallTrail_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APhoenix_FireBallTrail_Emitter_C::ExecuteUbergraph_Phoenix_FireBallTrail_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Phoenix_FireBallTrail_Emitter.Phoenix_FireBallTrail_Emitter_C.ExecuteUbergraph_Phoenix_FireBallTrail_Emitter");

	APhoenix_FireBallTrail_Emitter_C_ExecuteUbergraph_Phoenix_FireBallTrail_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
