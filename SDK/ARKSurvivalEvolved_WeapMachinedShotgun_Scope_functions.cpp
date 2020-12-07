// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_Scope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedShotgun_Scope.WeapMachinedShotgun_Scope_C.UserConstructionScript
// ()

void AWeapMachinedShotgun_Scope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Scope.WeapMachinedShotgun_Scope_C.UserConstructionScript");

	AWeapMachinedShotgun_Scope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun_Scope.WeapMachinedShotgun_Scope_C.ExecuteUbergraph_WeapMachinedShotgun_Scope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_Scope_C::ExecuteUbergraph_WeapMachinedShotgun_Scope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun_Scope.WeapMachinedShotgun_Scope_C.ExecuteUbergraph_WeapMachinedShotgun_Scope");

	AWeapMachinedShotgun_Scope_C_ExecuteUbergraph_WeapMachinedShotgun_Scope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
