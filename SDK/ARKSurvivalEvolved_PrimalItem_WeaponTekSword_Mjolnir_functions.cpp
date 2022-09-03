// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekSword_Mjolnir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPPreventWeaponEquip
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_WeaponTekSword_Mjolnir_C::BPPreventWeaponEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPPreventWeaponEquip");

	UPrimalItem_WeaponTekSword_Mjolnir_C_BPPreventWeaponEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPOnLocalUse
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_Mjolnir_C::BPOnLocalUse(class AShooterCharacter** forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.BPOnLocalUse");

	UPrimalItem_WeaponTekSword_Mjolnir_C_BPOnLocalUse_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_Mjolnir_C::ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Mjolnir.PrimalItem_WeaponTekSword_Mjolnir_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir");

	UPrimalItem_WeaponTekSword_Mjolnir_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Mjolnir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
