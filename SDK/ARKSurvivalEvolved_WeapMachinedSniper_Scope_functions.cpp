// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Scope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C.UserConstructionScript
// ()

void AWeapMachinedSniper_Scope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C.UserConstructionScript");

	AWeapMachinedSniper_Scope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C.ExecuteUbergraph_WeapMachinedSniper_Scope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_Scope_C::ExecuteUbergraph_WeapMachinedSniper_Scope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C.ExecuteUbergraph_WeapMachinedSniper_Scope");

	AWeapMachinedSniper_Scope_C_ExecuteUbergraph_WeapMachinedSniper_Scope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
