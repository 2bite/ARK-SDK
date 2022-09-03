// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RocketTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RocketTrailEmitter.RocketTrailEmitter_C.UserConstructionScript
// ()

void ARocketTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketTrailEmitter.RocketTrailEmitter_C.UserConstructionScript");

	ARocketTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketTrailEmitter.RocketTrailEmitter_C.ExecuteUbergraph_RocketTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARocketTrailEmitter_C::ExecuteUbergraph_RocketTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketTrailEmitter.RocketTrailEmitter_C.ExecuteUbergraph_RocketTrailEmitter");

	ARocketTrailEmitter_C_ExecuteUbergraph_RocketTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
