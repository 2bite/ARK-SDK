// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_Silenced_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C.UserConstructionScript
// ()

void AWeapMachinedSniper_Silenced_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C.UserConstructionScript");

	AWeapMachinedSniper_Silenced_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C.ExecuteUbergraph_WeapMachinedSniper_Silenced
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_Silenced_C::ExecuteUbergraph_WeapMachinedSniper_Silenced(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C.ExecuteUbergraph_WeapMachinedSniper_Silenced");

	AWeapMachinedSniper_Silenced_C_ExecuteUbergraph_WeapMachinedSniper_Silenced_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
