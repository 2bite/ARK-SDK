#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmargaSpikeArmorModifier_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage
struct ABuff_AmargaSpikeArmorModifier_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription
struct ABuff_AmargaSpikeArmorModifier_C_UpdateBuffDescription_Params
{
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient
struct ABuff_AmargaSpikeArmorModifier_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer
struct ABuff_AmargaSpikeArmorModifier_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff
struct ABuff_AmargaSpikeArmorModifier_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue
struct ABuff_AmargaSpikeArmorModifier_C_BPModifyArmorValue_Params
{
	class UPrimalItem**                                ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BaseArmorValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript
struct ABuff_AmargaSpikeArmorModifier_C_UserConstructionScript_Params
{
};

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier
struct ABuff_AmargaSpikeArmorModifier_C_ExecuteUbergraph_Buff_AmargaSpikeArmorModifier_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
