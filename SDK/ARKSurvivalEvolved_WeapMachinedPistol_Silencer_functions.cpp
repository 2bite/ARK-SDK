// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_Silencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.UserConstructionScript
// ()

void AWeapMachinedPistol_Silencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.UserConstructionScript");

	AWeapMachinedPistol_Silencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.ExecuteUbergraph_WeapMachinedPistol_Silencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_Silencer_C::ExecuteUbergraph_WeapMachinedPistol_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol_Silencer.WeapMachinedPistol_Silencer_C.ExecuteUbergraph_WeapMachinedPistol_Silencer");

	AWeapMachinedPistol_Silencer_C_ExecuteUbergraph_WeapMachinedPistol_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
