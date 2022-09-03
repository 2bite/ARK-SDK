#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekPistol_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekPistol.WeapTekPistol_C.ReceiveDestroyed
struct AWeapTekPistol_C_ReceiveDestroyed_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamSounds
struct AWeapTekPistol_C_UpdateBeamSounds_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.UpdateMaterials
struct AWeapTekPistol_C_UpdateMaterials_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.CreateDynamicMats
struct AWeapTekPistol_C_CreateDynamicMats_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.ApplyHelperBuff
struct AWeapTekPistol_C_ApplyHelperBuff_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPKillImpactEffects
struct AWeapTekPistol_C_BPKillImpactEffects_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamEffect
struct AWeapTekPistol_C_UpdateBeamEffect_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPFiredWeapon
struct AWeapTekPistol_C_BPFiredWeapon_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.StartUnequipEvent
struct AWeapTekPistol_C_StartUnequipEvent_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPStartEquippedNotify
struct AWeapTekPistol_C_BPStartEquippedNotify_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPWeaponCanFire
struct AWeapTekPistol_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.Set Material Vector Parameter
struct AWeapTekPistol_C_Set_Material_Vector_Parameter_Params
{
	class USkeletalMeshComponent*                      SK;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.SetFireModeOnItem
struct AWeapTekPistol_C_SetFireModeOnItem_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.GetFireModeFromItem
struct AWeapTekPistol_C_GetFireModeFromItem_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.BPAppliedPrimalItemToWeapon
struct AWeapTekPistol_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.SelectBuff
struct AWeapTekPistol_C_SelectBuff_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.BPGetCrosshairColor
struct AWeapTekPistol_C_BPGetCrosshairColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.BPShouldDealDamage
struct AWeapTekPistol_C_BPShouldDealDamage_Params
{
	class AActor**                                     TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.BPWeaponDealDamage
struct AWeapTekPistol_C_BPWeaponDealDamage_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ApplyBeamTarget
struct AWeapTekPistol_C_ApplyBeamTarget_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPPostSpawnMuzzleEffect
struct AWeapTekPistol_C_BPPostSpawnMuzzleEffect_Params
{
	class UParticleSystemComponent**                   NewMuzzlePSC;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.GetFireModeData
struct AWeapTekPistol_C_GetFireModeData_Params
{
	struct FTekPistolFireMode_Beam                     Item;                                                     // (Parm, OutParm)
};

// Function WeapTekPistol.WeapTekPistol_C.UpdateBeamTarget
struct AWeapTekPistol_C_UpdateBeamTarget_Params
{
	struct FVector                                     BeamTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ReceiveTick
struct AWeapTekPistol_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.BPOnBurstFinished
struct AWeapTekPistol_C_BPOnBurstFinished_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPOnBurstStarted
struct AWeapTekPistol_C_BPOnBurstStarted_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.UpdateFireMode
struct AWeapTekPistol_C_UpdateFireMode_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.StartSecondaryActionEvent
struct AWeapTekPistol_C_StartSecondaryActionEvent_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.BPSpawnImpactEffects
struct AWeapTekPistol_C_BPSpawnImpactEffects_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bIsEntryHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponMaxRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.UserConstructionScript
struct AWeapTekPistol_C_UserConstructionScript_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.ServerSetFireMode
struct AWeapTekPistol_C_ServerSetFireMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ClientSetFireMode
struct AWeapTekPistol_C_ClientSetFireMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ClientBeamEffect
struct AWeapTekPistol_C_ClientBeamEffect_Params
{
	bool                                               BeamOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ServerSetBeamTarget
struct AWeapTekPistol_C_ServerSetBeamTarget_Params
{
	struct FVector                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ClientSetBeamTarget
struct AWeapTekPistol_C_ClientSetBeamTarget_Params
{
	struct FVector                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ClientNotifyHealingHit
struct AWeapTekPistol_C_ClientNotifyHealingHit_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.PreventFireDuringModeSwitch
struct AWeapTekPistol_C_PreventFireDuringModeSwitch_Params
{
};

// Function WeapTekPistol.WeapTekPistol_C.ClientUpdateFiringState
struct AWeapTekPistol_C_ClientUpdateFiringState_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BeamOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekPistol.WeapTekPistol_C.ExecuteUbergraph_WeapTekPistol
struct AWeapTekPistol_C_ExecuteUbergraph_WeapTekPistol_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
