#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_IsParticleActive
struct ABuff_TekArmor_Boots_C_OnRep_IsParticleActive_Params
{
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.IsOnSteepSlope
struct ABuff_TekArmor_Boots_C_IsOnSteepSlope_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     surfaceNormal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_NewWalkableZIsActive
struct ABuff_TekArmor_Boots_C_OnRep_NewWalkableZIsActive_Params
{
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffTickServer
struct ABuff_TekArmor_Boots_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BPDeactivated
struct ABuff_TekArmor_Boots_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffAdjustDamage
struct ABuff_TekArmor_Boots_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.AdjustFallDamageAndElement
struct ABuff_TekArmor_Boots_C_AdjustFallDamageAndElement_Params
{
	float                                              fallDamage_In;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fallDamage_Out;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.CanUseTekAbility
struct ABuff_TekArmor_Boots_C_CanUseTekAbility_Params
{
	bool*                                              bNotifyIfOutOfElement;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Boots_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.UserConstructionScript
struct ABuff_TekArmor_Boots_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.PlayDamageAbsorbFX
struct ABuff_TekArmor_Boots_C_PlayDamageAbsorbFX_Params
{
};

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.ExecuteUbergraph_Buff_TekArmor_Boots
struct ABuff_TekArmor_Boots_C_ExecuteUbergraph_Buff_TekArmor_Boots_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
