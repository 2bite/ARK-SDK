// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekRifle.WeapTekRifle_C.BPAppliedPrimalItemToWeapon
// (Native, NetMulticast, Public, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void AWeapTekRifle_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPAppliedPrimalItemToWeapon");

	AWeapTekRifle_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.ReceiveDestroyed
// (Exec, Native, NetMulticast, Public, Protected, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void AWeapTekRifle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.ReceiveDestroyed");

	AWeapTekRifle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.BPPreventSwitchingWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekRifle_C::BPPreventSwitchingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPPreventSwitchingWeapon");

	AWeapTekRifle_C_BPPreventSwitchingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekRifle.WeapTekRifle_C.BPWeaponZoom
// ()
// Parameters:
// bool*                          bZoomingIn                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekRifle_C::BPWeaponZoom(bool* bZoomingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPWeaponZoom");

	AWeapTekRifle_C_BPWeaponZoom_Params params;
	params.bZoomingIn = bZoomingIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.BPGlobalFireWeapon
// ()

void AWeapTekRifle_C::BPGlobalFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPGlobalFireWeapon");

	AWeapTekRifle_C_BPGlobalFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.AllowTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekRifle_C::AllowTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.AllowTargeting");

	AWeapTekRifle_C_AllowTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekRifle.WeapTekRifle_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekRifle_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPWeaponCanFire");

	AWeapTekRifle_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekRifle.WeapTekRifle_C.BPFireWeapon
// ()

void AWeapTekRifle_C::BPFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.BPFireWeapon");

	AWeapTekRifle_C_BPFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekRifle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.ReceiveTick");

	AWeapTekRifle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.GetIs Overheated
// ()
// Parameters:
// bool                           bRetOverheated                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekRifle_C::GetIs_Overheated(bool* bRetOverheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.GetIs Overheated");

	AWeapTekRifle_C_GetIs_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRetOverheated != nullptr)
		*bRetOverheated = params.bRetOverheated;
}


// Function WeapTekRifle.WeapTekRifle_C.UserConstructionScript
// ()

void AWeapTekRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.UserConstructionScript");

	AWeapTekRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.Overheated
// ()

void AWeapTekRifle_C::Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.Overheated");

	AWeapTekRifle_C_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.AddHeat
// ()

void AWeapTekRifle_C::AddHeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.AddHeat");

	AWeapTekRifle_C_AddHeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.NotOverheated
// ()

void AWeapTekRifle_C::NotOverheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.NotOverheated");

	AWeapTekRifle_C_NotOverheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekRifle.WeapTekRifle_C.ExecuteUbergraph_WeapTekRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekRifle_C::ExecuteUbergraph_WeapTekRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekRifle.WeapTekRifle_C.ExecuteUbergraph_WeapTekRifle");

	AWeapTekRifle_C_ExecuteUbergraph_WeapTekRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
