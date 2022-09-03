// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MuzzleFlashEmitterTekTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.UserConstructionScript
// ()

void AMuzzleFlashEmitterTekTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.UserConstructionScript");

	AMuzzleFlashEmitterTekTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.ExecuteUbergraph_MuzzleFlashEmitterTekTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMuzzleFlashEmitterTekTurret_C::ExecuteUbergraph_MuzzleFlashEmitterTekTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C.ExecuteUbergraph_MuzzleFlashEmitterTekTurret");

	AMuzzleFlashEmitterTekTurret_C_ExecuteUbergraph_MuzzleFlashEmitterTekTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
