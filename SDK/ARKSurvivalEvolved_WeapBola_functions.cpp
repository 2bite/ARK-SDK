// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBola.WeapBola_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapBola_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola.WeapBola_C.BPWeaponCanFire");

	AWeapBola_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapBola.WeapBola_C.BPGetProjectileSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapBola_C::BPGetProjectileSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola.WeapBola_C.BPGetProjectileSpeed");

	AWeapBola_C_BPGetProjectileSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapBola.WeapBola_C.UserConstructionScript
// ()

void AWeapBola_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola.WeapBola_C.UserConstructionScript");

	AWeapBola_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBola.WeapBola_C.ExecuteUbergraph_WeapBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBola_C::ExecuteUbergraph_WeapBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola.WeapBola_C.ExecuteUbergraph_WeapBola");

	AWeapBola_C_ExecuteUbergraph_WeapBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
