// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RocketMuzzleFlashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.UserConstructionScript
// ()

void ARocketMuzzleFlashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.UserConstructionScript");

	ARocketMuzzleFlashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.ExecuteUbergraph_RocketMuzzleFlashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARocketMuzzleFlashEmitter_C::ExecuteUbergraph_RocketMuzzleFlashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C.ExecuteUbergraph_RocketMuzzleFlashEmitter");

	ARocketMuzzleFlashEmitter_C_ExecuteUbergraph_RocketMuzzleFlashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
