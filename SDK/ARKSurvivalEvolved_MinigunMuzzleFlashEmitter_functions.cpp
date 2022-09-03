// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MinigunMuzzleFlashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.UserConstructionScript
// ()

void AMinigunMuzzleFlashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.UserConstructionScript");

	AMinigunMuzzleFlashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.ExecuteUbergraph_MinigunMuzzleFlashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMinigunMuzzleFlashEmitter_C::ExecuteUbergraph_MinigunMuzzleFlashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigunMuzzleFlashEmitter.MinigunMuzzleFlashEmitter_C.ExecuteUbergraph_MinigunMuzzleFlashEmitter");

	AMinigunMuzzleFlashEmitter_C_ExecuteUbergraph_MinigunMuzzleFlashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
