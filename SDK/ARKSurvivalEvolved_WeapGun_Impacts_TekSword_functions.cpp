// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGun_Impacts_TekSword_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.UserConstructionScript
// ()

void AWeapGun_Impacts_TekSword_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.UserConstructionScript");

	AWeapGun_Impacts_TekSword_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.ExecuteUbergraph_WeapGun_Impacts_TekSword
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGun_Impacts_TekSword_C::ExecuteUbergraph_WeapGun_Impacts_TekSword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C.ExecuteUbergraph_WeapGun_Impacts_TekSword");

	AWeapGun_Impacts_TekSword_C_ExecuteUbergraph_WeapGun_Impacts_TekSword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
