// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMachinedShotgun.WeapMachinedShotgun_C.UserConstructionScript
// ()

void AWeapMachinedShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun.WeapMachinedShotgun_C.UserConstructionScript");

	AWeapMachinedShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMachinedShotgun.WeapMachinedShotgun_C.ExecuteUbergraph_WeapMachinedShotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMachinedShotgun_C::ExecuteUbergraph_WeapMachinedShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMachinedShotgun.WeapMachinedShotgun_C.ExecuteUbergraph_WeapMachinedShotgun");

	AWeapMachinedShotgun_C_ExecuteUbergraph_WeapMachinedShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
