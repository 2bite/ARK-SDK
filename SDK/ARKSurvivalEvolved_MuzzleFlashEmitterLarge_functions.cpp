// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MuzzleFlashEmitterLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.UserConstructionScript
// ()

void AMuzzleFlashEmitterLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.UserConstructionScript");

	AMuzzleFlashEmitterLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.ExecuteUbergraph_MuzzleFlashEmitterLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMuzzleFlashEmitterLarge_C::ExecuteUbergraph_MuzzleFlashEmitterLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C.ExecuteUbergraph_MuzzleFlashEmitterLarge");

	AMuzzleFlashEmitterLarge_C_ExecuteUbergraph_MuzzleFlashEmitterLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
