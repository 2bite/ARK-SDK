// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedSniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedSniper.WeapMachinedSniper_C.UserConstructionScript
// ()

void AWeapMachinedSniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper.WeapMachinedSniper_C.UserConstructionScript");

	AWeapMachinedSniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedSniper.WeapMachinedSniper_C.ExecuteUbergraph_WeapMachinedSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedSniper_C::ExecuteUbergraph_WeapMachinedSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedSniper.WeapMachinedSniper_C.ExecuteUbergraph_WeapMachinedSniper");

	AWeapMachinedSniper_C_ExecuteUbergraph_WeapMachinedSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
