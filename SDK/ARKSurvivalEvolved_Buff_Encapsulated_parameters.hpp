#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Encapsulated_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPOverrideBuffToGiveOnDeactivation
struct ABuff_Encapsulated_C_BPOverrideBuffToGiveOnDeactivation_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.PreventJump
struct ABuff_Encapsulated_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.CheckPVEEnemy
struct ABuff_Encapsulated_C_CheckPVEEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BuffTickServer
struct ABuff_Encapsulated_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPCustomAllowAddBuff
struct ABuff_Encapsulated_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPAdjustImpulseFromDamage
struct ABuff_Encapsulated_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.IsOwnerOwlRider
struct ABuff_Encapsulated_C_IsOwnerOwlRider_Params
{
	bool                                               IsOwlRider;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.DeactivateSoon
struct ABuff_Encapsulated_C_DeactivateSoon_Params
{
	float                                              DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPActivated
struct ABuff_Encapsulated_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.OnRep_IceShieldCurrentHealth
struct ABuff_Encapsulated_C_OnRep_IceShieldCurrentHealth_Params
{
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BuffAdjustDamage
struct ABuff_Encapsulated_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.ApplyDamageToIceShield
struct ABuff_Encapsulated_C_ApplyDamageToIceShield_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRemoteDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.Is Riding or Carried Player
struct ABuff_Encapsulated_C_Is_Riding_or_Carried_Player_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPSetupForInstigator
struct ABuff_Encapsulated_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.FreezeCharacter
struct ABuff_Encapsulated_C_FreezeCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Freeze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPDeactivated
struct ABuff_Encapsulated_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.UserConstructionScript
struct ABuff_Encapsulated_C_UserConstructionScript_Params
{
};

// Function Buff_Encapsulated.Buff_Encapsulated_C.ExecuteUbergraph_Buff_Encapsulated
struct ABuff_Encapsulated_C_ExecuteUbergraph_Buff_Encapsulated_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
