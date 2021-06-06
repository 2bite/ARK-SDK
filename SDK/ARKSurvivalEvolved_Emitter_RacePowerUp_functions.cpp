// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_RacePowerUp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.UserConstructionScript
// ()

void AEmitter_RacePowerUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.UserConstructionScript");

	AEmitter_RacePowerUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.ExecuteUbergraph_Emitter_RacePowerUp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_RacePowerUp_C::ExecuteUbergraph_Emitter_RacePowerUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_RacePowerUp.Emitter_RacePowerUp_C.ExecuteUbergraph_Emitter_RacePowerUp");

	AEmitter_RacePowerUp_C_ExecuteUbergraph_Emitter_RacePowerUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
