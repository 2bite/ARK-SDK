// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekClaws_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed
// ()

void AWeapTekClaws_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed");

	AWeapTekClaws_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects
// ()
// Parameters:
// bool                           AtMaxPower                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ActivateMaxPowerEffects(bool AtMaxPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects");

	AWeapTekClaws_C_ActivateMaxPowerEffects_Params params;
	params.AtMaxPower = AtMaxPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted
// ()

void AWeapTekClaws_C::BPMeleeAttackStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted");

	AWeapTekClaws_C_BPMeleeAttackStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking
// ()

void AWeapTekClaws_C::ClientStartBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking");

	AWeapTekClaws_C_ClientStartBlocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking
// ()

void AWeapTekClaws_C::ClientStopBlocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking");

	AWeapTekClaws_C_ClientStopBlocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent
// ()

void AWeapTekClaws_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent");

	AWeapTekClaws_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent
// ()

void AWeapTekClaws_C::StopSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent");

	AWeapTekClaws_C_StopSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded
// ()

void AWeapTekClaws_C::OnAttachmentsAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded");

	AWeapTekClaws_C_OnAttachmentsAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor
// ()
// Parameters:
// int                            ColorID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ParticleColor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ChooseParticleColor(int ColorID, struct FLinearColor* ParticleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor");

	AWeapTekClaws_C_ChooseParticleColor_Params params;
	params.ColorID = ColorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleColor != nullptr)
		*ParticleColor = params.ParticleColor;
}


// Function WeapTekClaws.WeapTekClaws_C.GetItemColors
// ()
// Parameters:
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLinearColor> AWeapTekClaws_C::GetItemColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.GetItemColors");

	AWeapTekClaws_C_GetItemColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors
// ()
// Parameters:
// TArray<struct FLinearColor>    InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UParticleSystemComponent* InputPin2                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ApplyParticleColors(class UParticleSystemComponent* InputPin2, TArray<struct FLinearColor>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors");

	AWeapTekClaws_C_ApplyParticleColors_Params params;
	params.InputPin2 = InputPin2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects
// ()
// Parameters:
// struct FVector*                Impact                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::BPSpawnMeleeEffects(struct FVector* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects");

	AWeapTekClaws_C_BPSpawnMeleeEffects_Params params;
	params.Impact = Impact;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ReceiveTick");

	AWeapTekClaws_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent");

	AWeapTekClaws_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX
// ()
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ShowBladeFX(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX");

	AWeapTekClaws_C_ShowBladeFX_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped
// ()

void AWeapTekClaws_C::OnPrimalItemEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped");

	AWeapTekClaws_C_OnPrimalItemEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim
// ()
// Parameters:
// struct FWeaponAnim             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FWeaponAnim AWeapTekClaws_C::BPGetSelectedMeleeAttackAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim");

	AWeapTekClaws_C_BPGetSelectedMeleeAttackAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage
// ()
// Parameters:
// struct FHitResult              Impact                         (Parm, OutParm, ReferenceParm)
// struct FVector                 ShootDir                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeapTekClaws_C::BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage");

	AWeapTekClaws_C_BPWeaponDealDamage_Params params;
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


// Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent
// ()

void AWeapTekClaws_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent");

	AWeapTekClaws_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify
// ()

void AWeapTekClaws_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify");

	AWeapTekClaws_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage
// ()
// Parameters:
// class AActor**                 TestActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekClaws_C::BPShouldDealDamage(class AActor** TestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage");

	AWeapTekClaws_C_BPShouldDealDamage_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript
// ()

void AWeapTekClaws_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript");

	AWeapTekClaws_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking
// ()
// Parameters:
// bool                           StartBlocking                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ServerSetBlocking(bool StartBlocking)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking");

	AWeapTekClaws_C_ServerSetBlocking_Params params;
	params.StartBlocking = StartBlocking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekClaws_C::ExecuteUbergraph_WeapTekClaws(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws");

	AWeapTekClaws_C_ExecuteUbergraph_WeapTekClaws_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
