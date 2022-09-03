// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StandingTorchEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StandingTorchEmitter.StandingTorchEmitter_C.UserConstructionScript
// ()

void AStandingTorchEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandingTorchEmitter.StandingTorchEmitter_C.UserConstructionScript");

	AStandingTorchEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandingTorchEmitter.StandingTorchEmitter_C.ExecuteUbergraph_StandingTorchEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStandingTorchEmitter_C::ExecuteUbergraph_StandingTorchEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandingTorchEmitter.StandingTorchEmitter_C.ExecuteUbergraph_StandingTorchEmitter");

	AStandingTorchEmitter_C_ExecuteUbergraph_StandingTorchEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
