// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekCruiseMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not
// ()

void AWeapTekCruiseMissile_C::check_intermittantly_if_player_is_controlling_missile_or_not()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not");

	AWeapTekCruiseMissile_C_check_intermittantly_if_player_is_controlling_missile_or_not_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekCruiseMissile_C::BPPreventSwitchingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon");

	AWeapTekCruiseMissile_C_BPPreventSwitchingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip
// ()

void AWeapTekCruiseMissile_C::Release_Missile_Possession_And_Break_on_unequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip");

	AWeapTekCruiseMissile_C_Release_Missile_Possession_And_Break_on_unequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekCruiseMissile_C::BPRemainEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped");

	AWeapTekCruiseMissile_C_BPRemainEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekCruiseMissile_C::BPCanEquip(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip");

	AWeapTekCruiseMissile_C_BPCanEquip_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item
// ()

void AWeapTekCruiseMissile_C::break_item()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item");

	AWeapTekCruiseMissile_C_break_item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay
// ()

void AWeapTekCruiseMissile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay");

	AWeapTekCruiseMissile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapTekCruiseMissile_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire");

	AWeapTekCruiseMissile_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekCruiseMissile_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent");

	AWeapTekCruiseMissile_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent
// ()

void AWeapTekCruiseMissile_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent");

	AWeapTekCruiseMissile_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent
// ()

void AWeapTekCruiseMissile_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent");

	AWeapTekCruiseMissile_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekCruiseMissile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick");

	AWeapTekCruiseMissile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned
// ()

void AWeapTekCruiseMissile_C::Missile_Despawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned");

	AWeapTekCruiseMissile_C_Missile_Despawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched
// ()
// Parameters:
// class AActor*                  missile                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekCruiseMissile_C::Missile_Launched(class AActor* missile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched");

	AWeapTekCruiseMissile_C_Missile_Launched_Params params;
	params.missile = missile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon
// ()

void AWeapTekCruiseMissile_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon");

	AWeapTekCruiseMissile_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript
// ()

void AWeapTekCruiseMissile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript");

	AWeapTekCruiseMissile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc
// ()

void AWeapTekCruiseMissile_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc");

	AWeapTekCruiseMissile_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc
// ()

void AWeapTekCruiseMissile_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc");

	AWeapTekCruiseMissile_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description
// ()

void AWeapTekCruiseMissile_C::Clear_Description()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description");

	AWeapTekCruiseMissile_C_Clear_Description_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message
// ()

void AWeapTekCruiseMissile_C::Set_rocket_message()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message");

	AWeapTekCruiseMissile_C_Set_rocket_message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire
// ()

void AWeapTekCruiseMissile_C::Hide_Projectile_on_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire");

	AWeapTekCruiseMissile_C_Hide_Projectile_on_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in
// ()

void AWeapTekCruiseMissile_C::iron_in()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in");

	AWeapTekCruiseMissile_C_iron_in_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out
// ()

void AWeapTekCruiseMissile_C::iron_out()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out");

	AWeapTekCruiseMissile_C_iron_out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out
// ()
// Parameters:
// bool                           delay_for_zoom_out             (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekCruiseMissile_C::delay_break_and_iron_out(bool delay_for_zoom_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out");

	AWeapTekCruiseMissile_C_delay_break_and_iron_out_Params params;
	params.delay_for_zoom_out = delay_for_zoom_out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded
// ()

void AWeapTekCruiseMissile_C::check_if_launch_succeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded");

	AWeapTekCruiseMissile_C_check_if_launch_succeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base
// ()

void AWeapTekCruiseMissile_C::multicast_remove_from_base()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base");

	AWeapTekCruiseMissile_C_multicast_remove_from_base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekCruiseMissile_C::ExecuteUbergraph_WeapTekCruiseMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile");

	AWeapTekCruiseMissile_C_ExecuteUbergraph_WeapTekCruiseMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
