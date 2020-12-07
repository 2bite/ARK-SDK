// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MuzzleFlashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.UserConstructionScript
// ()

void AMuzzleFlashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.UserConstructionScript");

	AMuzzleFlashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.ExecuteUbergraph_MuzzleFlashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMuzzleFlashEmitter_C::ExecuteUbergraph_MuzzleFlashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitter.MuzzleFlashEmitter_C.ExecuteUbergraph_MuzzleFlashEmitter");

	AMuzzleFlashEmitter_C_ExecuteUbergraph_MuzzleFlashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
