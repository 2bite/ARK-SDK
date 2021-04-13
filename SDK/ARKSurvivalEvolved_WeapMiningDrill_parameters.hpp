#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMiningDrill_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapMiningDrill.WeapMiningDrill_C.StartUnequipEvent
struct AWeapMiningDrill_C_StartUnequipEvent_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.HandleActivation
struct AWeapMiningDrill_C_HandleActivation_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.ReceiveDestroyed
struct AWeapMiningDrill_C_ReceiveDestroyed_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.CreateDynamicMats
struct AWeapMiningDrill_C_CreateDynamicMats_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPSpawnHarvestEffects
struct AWeapMiningDrill_C_BPSpawnHarvestEffects_Params
{
	TArray<struct FVector>                             Impacts;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeapMiningDrill.WeapMiningDrill_C.CalculateTargetPosition
struct AWeapMiningDrill_C_CalculateTargetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPStartEquippedNotify
struct AWeapMiningDrill_C_BPStartEquippedNotify_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponDealDamage
struct AWeapMiningDrill_C_BPWeaponDealDamage_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPPreFireEvent
struct AWeapMiningDrill_C_BPPreFireEvent_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPWeaponCanFire
struct AWeapMiningDrill_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.OnRep_Overheated
struct AWeapMiningDrill_C_OnRep_Overheated_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.UpdateWeaponHeat
struct AWeapMiningDrill_C_UpdateWeaponHeat_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.BPFiredWeapon
struct AWeapMiningDrill_C_BPFiredWeapon_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.ReceiveTick
struct AWeapMiningDrill_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.UserConstructionScript
struct AWeapMiningDrill_C_UserConstructionScript_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.SpawnImpact
struct AWeapMiningDrill_C_SpawnImpact_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMiningDrill.WeapMiningDrill_C.TurnOffIfRiding
struct AWeapMiningDrill_C_TurnOffIfRiding_Params
{
};

// Function WeapMiningDrill.WeapMiningDrill_C.ExecuteUbergraph_WeapMiningDrill
struct AWeapMiningDrill_C_ExecuteUbergraph_WeapMiningDrill_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
