#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekCruiseMissile_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check intermittantly if player is controlling missile or not
struct AWeapTekCruiseMissile_C_check_intermittantly_if_player_is_controlling_missile_or_not_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPPreventSwitchingWeapon
struct AWeapTekCruiseMissile_C_BPPreventSwitchingWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Release Missile Possession And Break on unequip
struct AWeapTekCruiseMissile_C_Release_Missile_Possession_And_Break_on_unequip_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPRemainEquipped
struct AWeapTekCruiseMissile_C_BPRemainEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPCanEquip
struct AWeapTekCruiseMissile_C_BPCanEquip_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.break item
struct AWeapTekCruiseMissile_C_break_item_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveBeginPlay
struct AWeapTekCruiseMissile_C_ReceiveBeginPlay_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPWeaponCanFire
struct AWeapTekCruiseMissile_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPAnimNotifyCustomEvent
struct AWeapTekCruiseMissile_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartUnequipEvent
struct AWeapTekCruiseMissile_C_StartUnequipEvent_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.StartSecondaryActionEvent
struct AWeapTekCruiseMissile_C_StartSecondaryActionEvent_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ReceiveTick
struct AWeapTekCruiseMissile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Despawned
struct AWeapTekCruiseMissile_C_Missile_Despawned_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Missile Launched
struct AWeapTekCruiseMissile_C_Missile_Launched_Params
{
	class AActor*                                      missile;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.BPFiredWeapon
struct AWeapTekCruiseMissile_C_BPFiredWeapon_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.UserConstructionScript
struct AWeapTekCruiseMissile_C_UserConstructionScript_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__FinishedFunc
struct AWeapTekCruiseMissile_C_Timeline_0__FinishedFunc_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Timeline_0__UpdateFunc
struct AWeapTekCruiseMissile_C_Timeline_0__UpdateFunc_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Clear Description
struct AWeapTekCruiseMissile_C_Clear_Description_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Set rocket message
struct AWeapTekCruiseMissile_C_Set_rocket_message_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.Hide Projectile on Fire
struct AWeapTekCruiseMissile_C_Hide_Projectile_on_Fire_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron in
struct AWeapTekCruiseMissile_C_iron_in_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.iron out
struct AWeapTekCruiseMissile_C_iron_out_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.delay break and iron out
struct AWeapTekCruiseMissile_C_delay_break_and_iron_out_Params
{
	bool                                               delay_for_zoom_out;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.check if launch succeeded
struct AWeapTekCruiseMissile_C_check_if_launch_succeeded_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.multicast remove from base
struct AWeapTekCruiseMissile_C_multicast_remove_from_base_Params
{
};

// Function WeapTekCruiseMissile.WeapTekCruiseMissile_C.ExecuteUbergraph_WeapTekCruiseMissile
struct AWeapTekCruiseMissile_C_ExecuteUbergraph_WeapTekCruiseMissile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
