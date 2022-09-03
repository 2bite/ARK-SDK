// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.UserConstructionScript
// ()

void AWeapMachinedPistol_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.UserConstructionScript");

	AWeapMachinedPistol_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.ExecuteUbergraph_WeapMachinedPistol_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_Flashlight_C::ExecuteUbergraph_WeapMachinedPistol_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Flashlight.WeapMachinedPistol_Flashlight_C.ExecuteUbergraph_WeapMachinedPistol_Flashlight");

	AWeapMachinedPistol_Flashlight_C_ExecuteUbergraph_WeapMachinedPistol_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
