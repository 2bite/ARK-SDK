// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifle_Flashlight.WeapRifle_Flashlight_C.UserConstructionScript
// ()

void AWeapRifle_Flashlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Flashlight.WeapRifle_Flashlight_C.UserConstructionScript");

	AWeapRifle_Flashlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifle_Flashlight.WeapRifle_Flashlight_C.ExecuteUbergraph_WeapRifle_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifle_Flashlight_C::ExecuteUbergraph_WeapRifle_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifle_Flashlight.WeapRifle_Flashlight_C.ExecuteUbergraph_WeapRifle_Flashlight");

	AWeapRifle_Flashlight_C_ExecuteUbergraph_WeapRifle_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
