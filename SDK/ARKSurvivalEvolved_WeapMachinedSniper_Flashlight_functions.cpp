// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper_Flashlight.WeapMachinedSniper_Flashlight_C.UserConstructionScript
// ()

void AWeapMachinedSniper_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Flashlight.WeapMachinedSniper_Flashlight_C.UserConstructionScript");

	AWeapMachinedSniper_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper_Flashlight.WeapMachinedSniper_Flashlight_C.ExecuteUbergraph_WeapMachinedSniper_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_Flashlight_C::ExecuteUbergraph_WeapMachinedSniper_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Flashlight.WeapMachinedSniper_Flashlight_C.ExecuteUbergraph_WeapMachinedSniper_Flashlight");

	AWeapMachinedSniper_Flashlight_C_ExecuteUbergraph_WeapMachinedSniper_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
