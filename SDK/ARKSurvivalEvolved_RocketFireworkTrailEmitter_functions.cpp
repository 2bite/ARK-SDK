// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RocketFireworkTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RocketFireworkTrailEmitter.RocketFireworkTrailEmitter_C.UserConstructionScript
// ()

void ARocketFireworkTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketFireworkTrailEmitter.RocketFireworkTrailEmitter_C.UserConstructionScript");

	ARocketFireworkTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketFireworkTrailEmitter.RocketFireworkTrailEmitter_C.ExecuteUbergraph_RocketFireworkTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARocketFireworkTrailEmitter_C::ExecuteUbergraph_RocketFireworkTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketFireworkTrailEmitter.RocketFireworkTrailEmitter_C.ExecuteUbergraph_RocketFireworkTrailEmitter");

	ARocketFireworkTrailEmitter_C_ExecuteUbergraph_RocketFireworkTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
