#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSword_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
struct AWeapSword_Tek_C_AppliedDamageToTarget_Params
{
	class AActor*                                      DamageTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ElementCostMultiplier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExtraDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
struct AWeapSword_Tek_C_BPWeaponDealDamage_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
struct AWeapSword_Tek_C_BPStartEquippedNotify_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
struct AWeapSword_Tek_C_StartUnequipEvent_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
struct AWeapSword_Tek_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
struct AWeapSword_Tek_C_BPHandleMeleeAttack_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
struct AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
struct AWeapSword_Tek_C_UserConstructionScript_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
struct AWeapSword_Tek_C_PlayAttackSound_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
struct AWeapSword_Tek_C_NetDoPlayMeleeAttackSound_Params
{
};

// Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
struct AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
