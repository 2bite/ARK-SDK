// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerCameraBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.UserConstructionScript
// ()

void APlayerCameraBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.UserConstructionScript");

	APlayerCameraBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ExecuteUbergraph_PlayerCameraBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCameraBlueprint_C::ExecuteUbergraph_PlayerCameraBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ExecuteUbergraph_PlayerCameraBlueprint");

	APlayerCameraBlueprint_C_ExecuteUbergraph_PlayerCameraBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
