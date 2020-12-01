// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BigTurretMuzzleFlashEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BigTurretMuzzleFlashEmitter.BigTurretMuzzleFlashEmitter_C.UserConstructionScript
// ()

void ABigTurretMuzzleFlashEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigTurretMuzzleFlashEmitter.BigTurretMuzzleFlashEmitter_C.UserConstructionScript");

	ABigTurretMuzzleFlashEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigTurretMuzzleFlashEmitter.BigTurretMuzzleFlashEmitter_C.ExecuteUbergraph_BigTurretMuzzleFlashEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigTurretMuzzleFlashEmitter_C::ExecuteUbergraph_BigTurretMuzzleFlashEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigTurretMuzzleFlashEmitter.BigTurretMuzzleFlashEmitter_C.ExecuteUbergraph_BigTurretMuzzleFlashEmitter");

	ABigTurretMuzzleFlashEmitter_C_ExecuteUbergraph_BigTurretMuzzleFlashEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
