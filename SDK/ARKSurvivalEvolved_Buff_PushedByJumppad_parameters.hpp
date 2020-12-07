#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PushedByJumppad_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_PushedByJumppad_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BPSetupForInstigator
struct ABuff_PushedByJumppad_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.Set ColorOfTrail
struct ABuff_PushedByJumppad_C_Set_ColorOfTrail_Params
{
	struct FVector                                     InColorVector;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.NotifyDamage
struct ABuff_PushedByJumppad_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.BuffAdjustDamage
struct ABuff_PushedByJumppad_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.UserConstructionScript
struct ABuff_PushedByJumppad_C_UserConstructionScript_Params
{
};

// Function Buff_PushedByJumppad.Buff_PushedByJumppad_C.ExecuteUbergraph_Buff_PushedByJumppad
struct ABuff_PushedByJumppad_C_ExecuteUbergraph_Buff_PushedByJumppad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
