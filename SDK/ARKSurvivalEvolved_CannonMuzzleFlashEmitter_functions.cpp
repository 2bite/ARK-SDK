// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CannonMuzzleFlashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.UserConstructionScript
// ()

void ACannonMuzzleFlashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.UserConstructionScript");

	ACannonMuzzleFlashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.ExecuteUbergraph_CannonMuzzleFlashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACannonMuzzleFlashEmitter_C::ExecuteUbergraph_CannonMuzzleFlashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CannonMuzzleFlashEmitter.CannonMuzzleFlashEmitter_C.ExecuteUbergraph_CannonMuzzleFlashEmitter");

	ACannonMuzzleFlashEmitter_C_ExecuteUbergraph_CannonMuzzleFlashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
