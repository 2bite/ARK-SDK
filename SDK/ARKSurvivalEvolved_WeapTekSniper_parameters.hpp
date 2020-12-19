#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekSniper.WeapTekSniper_C.BPShouldDealDamage
struct AWeapTekSniper_C_BPShouldDealDamage_Params
{
	class AActor**                                     TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.Try Enable XRay
struct AWeapTekSniper_C_Try_Enable_XRay_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.Get Overheat Duration
struct AWeapTekSniper_C_Get_Overheat_Duration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPStopPenetratingAtHit
struct AWeapTekSniper_C_BPStopPenetratingAtHit_Params
{
	struct FHitResult                                  CurrentHit;                                               // (Parm, OutParm, ReferenceParm)
	bool*                                              bIsEntryHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentMaxDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPWeaponDealDamage
struct AWeapTekSniper_C_BPWeaponDealDamage_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPAdjustAmmoPerShot
struct AWeapTekSniper_C_BPAdjustAmmoPerShot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessory
struct AWeapTekSniper_C_BPToggleAccessory_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.AllowTargeting
struct AWeapTekSniper_C_AllowTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPSpawnImpactEffects
struct AWeapTekSniper_C_BPSpawnImpactEffects_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bIsEntryHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponMaxRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPOnScoped
struct AWeapTekSniper_C_BPOnScoped_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.BPAppliedPrimalItemToWeapon
struct AWeapTekSniper_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.ReceiveDestroyed
struct AWeapTekSniper_C_ReceiveDestroyed_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.Has Ammo
struct AWeapTekSniper_C_Has_Ammo_Params
{
	int                                                MinAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPToggleAccessoryFailed
struct AWeapTekSniper_C_BPToggleAccessoryFailed_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.BPCanToggleAccessory
struct AWeapTekSniper_C_BPCanToggleAccessory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.UpdateMeshOverheat Effect
struct AWeapTekSniper_C_UpdateMeshOverheat_Effect_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.Tick X-Ray Sound
struct AWeapTekSniper_C_Tick_X_Ray_Sound_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.Is X-Ray Active
struct AWeapTekSniper_C_Is_X_Ray_Active_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.Show X-Ray Enabled Message
struct AWeapTekSniper_C_Show_X_Ray_Enabled_Message_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.SniperMessage
struct AWeapTekSniper_C_SniperMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function WeapTekSniper.WeapTekSniper_C.GetOwnerCharacter
struct AWeapTekSniper_C_GetOwnerCharacter_Params
{
	class AShooterCharacter*                           AsShooterCharacter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPWeaponZoom
struct AWeapTekSniper_C_BPWeaponZoom_Params
{
	bool*                                              bZoomingIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPWeaponCanFire
struct AWeapTekSniper_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.BPFireWeapon
struct AWeapTekSniper_C_BPFireWeapon_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.ReceiveTick
struct AWeapTekSniper_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.GetIs Overheated
struct AWeapTekSniper_C_GetIs_Overheated_Params
{
	bool                                               bRetOverheated;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.UserConstructionScript
struct AWeapTekSniper_C_UserConstructionScript_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__FinishedFunc
struct AWeapTekSniper_C_FadeOutOverheatParticles__FinishedFunc_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.FadeOutOverheatParticles__UpdateFunc
struct AWeapTekSniper_C_FadeOutOverheatParticles__UpdateFunc_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.Overheated
struct AWeapTekSniper_C_Overheated_Params
{
	bool                                               JustFired;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.AddHeat
struct AWeapTekSniper_C_AddHeat_Params
{
	bool                                               JustFired;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.NotOverheated
struct AWeapTekSniper_C_NotOverheated_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.SetScoped
struct AWeapTekSniper_C_SetScoped_Params
{
	bool                                               Scoped;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalCharacterAlready
struct AWeapTekSniper_C_ClearHitPrimalCharacterAlready_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.ClearHitPrimalStructureAlready
struct AWeapTekSniper_C_ClearHitPrimalStructureAlready_Params
{
};

// Function WeapTekSniper.WeapTekSniper_C.ExecuteUbergraph_WeapTekSniper
struct AWeapTekSniper_C_ExecuteUbergraph_WeapTekSniper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
