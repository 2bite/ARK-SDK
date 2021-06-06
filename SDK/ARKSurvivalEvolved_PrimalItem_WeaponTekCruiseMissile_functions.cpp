// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekCruiseMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 TextToUse                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_WeaponTekCruiseMissile_C::BPProcessEditText(class AShooterPlayerController** ForPC, class FString* TextToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText");

	UPrimalItem_WeaponTekCruiseMissile_C_BPProcessEditText_Params params;
	params.ForPC = ForPC;
	params.TextToUse = TextToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values
// ()
// Parameters:
// TArray<float>                  Stats                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPrimalItem_WeaponTekCruiseMissile_C::Set_Scout_Character_Status_Values(TArray<float>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values");

	UPrimalItem_WeaponTekCruiseMissile_C_Set_Scout_Character_Status_Values_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor
// ()
// Parameters:
// bool                           delay_for_zoom_out             (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekCruiseMissile_C::Missile_Released_Possessing_Survivor(bool delay_for_zoom_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor");

	UPrimalItem_WeaponTekCruiseMissile_C_Missile_Released_Possessing_Survivor_Params params;
	params.delay_for_zoom_out = delay_for_zoom_out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor
// ()

void UPrimalItem_WeaponTekCruiseMissile_C::Missile_Possessed_by_Survivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor");

	UPrimalItem_WeaponTekCruiseMissile_C_Missile_Possessed_by_Survivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekCruiseMissile_C::ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile");

	UPrimalItem_WeaponTekCruiseMissile_C_ExecuteUbergraph_PrimalItem_WeaponTekCruiseMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
