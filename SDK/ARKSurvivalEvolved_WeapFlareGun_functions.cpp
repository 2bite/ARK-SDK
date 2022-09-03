// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlareGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlareGun.WeapFlareGun_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFlareGun_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun.WeapFlareGun_C.BPWeaponCanFire");

	AWeapFlareGun_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript
// ()

void AWeapFlareGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun.WeapFlareGun_C.UserConstructionScript");

	AWeapFlareGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlareGun_C::ExecuteUbergraph_WeapFlareGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlareGun.WeapFlareGun_C.ExecuteUbergraph_WeapFlareGun");

	AWeapFlareGun_C_ExecuteUbergraph_WeapFlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
