// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C.UserConstructionScript
// ()

void AWeapMachinedShotgun_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C.UserConstructionScript");

	AWeapMachinedShotgun_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C.ExecuteUbergraph_WeapMachinedShotgun_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_Flashlight_C::ExecuteUbergraph_WeapMachinedShotgun_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C.ExecuteUbergraph_WeapMachinedShotgun_Flashlight");

	AWeapMachinedShotgun_Flashlight_C_ExecuteUbergraph_WeapMachinedShotgun_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
