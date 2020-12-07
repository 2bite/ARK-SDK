// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
// ()
// Parameters:
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ElementCostMultiplier          (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageIn                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExtraDamage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Tek_C::AppliedDamageToTarget(class AActor* DamageTarget, float ElementCostMultiplier, int DamageIn, bool* bExtraDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget");

	AWeapSword_Tek_C_AppliedDamageToTarget_Params params;
	params.DamageTarget = DamageTarget;
	params.ElementCostMultiplier = ElementCostMultiplier;
	params.DamageIn = DamageIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExtraDamage != nullptr)
		*bExtraDamage = params.bExtraDamage;
}


// Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapSword_Tek_C::BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage");

	AWeapSword_Tek_C_BPWeaponDealDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impact != nullptr)
		*Impact = params.Impact;
	if (ShootDir != nullptr)
		*ShootDir = params.ShootDir;

	return params.ReturnValue;
}


// Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
// ()

void AWeapSword_Tek_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify");

	AWeapSword_Tek_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
// ()

void AWeapSword_Tek_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent");

	AWeapSword_Tek_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Tek_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick");

	AWeapSword_Tek_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
// ()

void AWeapSword_Tek_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack");

	AWeapSword_Tek_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
// ()

void AWeapSword_Tek_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon");

	AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
// ()

void AWeapSword_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript");

	AWeapSword_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
// ()

void AWeapSword_Tek_C::PlayAttackSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound");

	AWeapSword_Tek_C_PlayAttackSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
// ()

void AWeapSword_Tek_C::NetDoPlayMeleeAttackSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound");

	AWeapSword_Tek_C_NetDoPlayMeleeAttackSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSword_Tek_C::ExecuteUbergraph_WeapSword_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek");

	AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
