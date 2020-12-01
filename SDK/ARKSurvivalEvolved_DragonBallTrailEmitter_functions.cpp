// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DragonBallTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DragonBallTrailEmitter.DragonBallTrailEmitter_C.UserConstructionScript
// ()

void ADragonBallTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallTrailEmitter.DragonBallTrailEmitter_C.UserConstructionScript");

	ADragonBallTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DragonBallTrailEmitter.DragonBallTrailEmitter_C.ExecuteUbergraph_DragonBallTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragonBallTrailEmitter_C::ExecuteUbergraph_DragonBallTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallTrailEmitter.DragonBallTrailEmitter_C.ExecuteUbergraph_DragonBallTrailEmitter");

	ADragonBallTrailEmitter_C_ExecuteUbergraph_DragonBallTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
