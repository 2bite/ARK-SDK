// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSawedOffShotgun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.UserConstructionScript
// ()

void AWeapSawedOffShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.UserConstructionScript");

	AWeapSawedOffShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.ExecuteUbergraph_WeapSawedOffShotgun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSawedOffShotgun_C::ExecuteUbergraph_WeapSawedOffShotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSawedOffShotgun.WeapSawedOffShotgun_C.ExecuteUbergraph_WeapSawedOffShotgun");

	AWeapSawedOffShotgun_C_ExecuteUbergraph_WeapSawedOffShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
