// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ShieldTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShieldTek_C::BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand");

	UPrimalItemArmor_ShieldTek_C_BPClientHandleItemNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           bLocalOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShieldTek_C::PlayHitShieldEffect(bool bLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect");

	UPrimalItemArmor_ShieldTek_C_PlayHitShieldEffect_Params params;
	params.bLocalOnly = bLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact
// ()
// Parameters:
// class AShooterProjectile**     theProjectile                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemArmor_ShieldTek_C::BPConsumeProjectileImpact(class AShooterProjectile** theProjectile, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact");

	UPrimalItemArmor_ShieldTek_C_BPConsumeProjectileImpact_Params params;
	params.theProjectile = theProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments
// ()

void UPrimalItemArmor_ShieldTek_C::BPAddedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments");

	UPrimalItemArmor_ShieldTek_C_BPAddedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial
// ()

void UPrimalItemArmor_ShieldTek_C::RefreshAmmoMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial");

	UPrimalItemArmor_ShieldTek_C_RefreshAmmoMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo
// ()

void UPrimalItemArmor_ShieldTek_C::ClientUpdatedWeaponClipAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo");

	UPrimalItemArmor_ShieldTek_C_ClientUpdatedWeaponClipAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AShooterCharacter**      ForShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageIn                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalItemArmor_ShieldTek_C::HandleShieldDamageBlocking(class AShooterCharacter** ForShooterCharacter, float* DamageIn, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking");

	UPrimalItemArmor_ShieldTek_C_HandleShieldDamageBlocking_Params params;
	params.ForShooterCharacter = ForShooterCharacter;
	params.DamageIn = DamageIn;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ExecuteUbergraph_PrimalItemArmor_ShieldTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ShieldTek_C::ExecuteUbergraph_PrimalItemArmor_ShieldTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ExecuteUbergraph_PrimalItemArmor_ShieldTek");

	UPrimalItemArmor_ShieldTek_C_ExecuteUbergraph_PrimalItemArmor_ShieldTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
