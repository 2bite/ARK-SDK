// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedPistol.WeapMachinedPistol_C.UserConstructionScript
// ()

void AWeapMachinedPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol.WeapMachinedPistol_C.UserConstructionScript");

	AWeapMachinedPistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedPistol.WeapMachinedPistol_C.ExecuteUbergraph_WeapMachinedPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedPistol_C::ExecuteUbergraph_WeapMachinedPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedPistol.WeapMachinedPistol_C.ExecuteUbergraph_WeapMachinedPistol");

	AWeapMachinedPistol_C_ExecuteUbergraph_WeapMachinedPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
