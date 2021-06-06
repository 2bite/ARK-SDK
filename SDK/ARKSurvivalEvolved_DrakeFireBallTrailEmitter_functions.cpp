// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrakeFireBallTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.UserConstructionScript
// ()

void ADrakeFireBallTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.UserConstructionScript");

	ADrakeFireBallTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.ExecuteUbergraph_DrakeFireBallTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADrakeFireBallTrailEmitter_C::ExecuteUbergraph_DrakeFireBallTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.ExecuteUbergraph_DrakeFireBallTrailEmitter");

	ADrakeFireBallTrailEmitter_C_ExecuteUbergraph_DrakeFireBallTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
