#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekClaws_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekClaws.WeapTekClaws_C.ReceiveDestroyed
struct AWeapTekClaws_C_ReceiveDestroyed_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.ActivateMaxPowerEffects
struct AWeapTekClaws_C_ActivateMaxPowerEffects_Params
{
	bool                                               AtMaxPower;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.BPMeleeAttackStarted
struct AWeapTekClaws_C_BPMeleeAttackStarted_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.ClientStartBlocking
struct AWeapTekClaws_C_ClientStartBlocking_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.ClientStopBlocking
struct AWeapTekClaws_C_ClientStopBlocking_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.StartSecondaryActionEvent
struct AWeapTekClaws_C_StartSecondaryActionEvent_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.StopSecondaryActionEvent
struct AWeapTekClaws_C_StopSecondaryActionEvent_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.OnAttachmentsAdded
struct AWeapTekClaws_C_OnAttachmentsAdded_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.ChooseParticleColor
struct AWeapTekClaws_C_ChooseParticleColor_Params
{
	int                                                ColorID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticleColor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.GetItemColors
struct AWeapTekClaws_C_GetItemColors_Params
{
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WeapTekClaws.WeapTekClaws_C.ApplyParticleColors
struct AWeapTekClaws_C_ApplyParticleColors_Params
{
	TArray<struct FLinearColor>                        InputPin;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*                    InputPin2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.BPSpawnMeleeEffects
struct AWeapTekClaws_C_BPSpawnMeleeEffects_Params
{
	struct FVector*                                    Impact;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.ReceiveTick
struct AWeapTekClaws_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.BPAnimNotifyCustomEvent
struct AWeapTekClaws_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.ShowBladeFX
struct AWeapTekClaws_C_ShowBladeFX_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.OnPrimalItemEquipped
struct AWeapTekClaws_C_OnPrimalItemEquipped_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.BPGetSelectedMeleeAttackAnim
struct AWeapTekClaws_C_BPGetSelectedMeleeAttackAnim_Params
{
	struct FWeaponAnim                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.BPWeaponDealDamage
struct AWeapTekClaws_C_BPWeaponDealDamage_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.StartUnequipEvent
struct AWeapTekClaws_C_StartUnequipEvent_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.BPStartEquippedNotify
struct AWeapTekClaws_C_BPStartEquippedNotify_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.BPShouldDealDamage
struct AWeapTekClaws_C_BPShouldDealDamage_Params
{
	class AActor**                                     TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.UserConstructionScript
struct AWeapTekClaws_C_UserConstructionScript_Params
{
};

// Function WeapTekClaws.WeapTekClaws_C.ServerSetBlocking
struct AWeapTekClaws_C_ServerSetBlocking_Params
{
	bool                                               StartBlocking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekClaws.WeapTekClaws_C.ExecuteUbergraph_WeapTekClaws
struct AWeapTekClaws_C_ExecuteUbergraph_WeapTekClaws_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
