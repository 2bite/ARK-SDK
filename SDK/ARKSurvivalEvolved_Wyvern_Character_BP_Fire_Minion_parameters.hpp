#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Fire_Minion_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanRiderAttack
struct AWyvern_Character_BP_Fire_Minion_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPNotifySetRider
struct AWyvern_Character_BP_Fire_Minion_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintAdjustOutputDamage
struct AWyvern_Character_BP_Fire_Minion_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BP_OnSetDeath
struct AWyvern_Character_BP_Fire_Minion_C_BP_OnSetDeath_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTimerServer
struct AWyvern_Character_BP_Fire_Minion_C_BPTimerServer_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustDamage
struct AWyvern_Character_BP_Fire_Minion_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPOnStaminaDrained
struct AWyvern_Character_BP_Fire_Minion_C_BPOnStaminaDrained_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.OnLanded
struct AWyvern_Character_BP_Fire_Minion_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BlueprintCanAttack
struct AWyvern_Character_BP_Fire_Minion_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ReceiveTick
struct AWyvern_Character_BP_Fire_Minion_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetHUDElements
struct AWyvern_Character_BP_Fire_Minion_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPDoAttack
struct AWyvern_Character_BP_Fire_Minion_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPAdjustAttackIndex
struct AWyvern_Character_BP_Fire_Minion_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPTryMultiUse
struct AWyvern_Character_BP_Fire_Minion_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.BPGetMultiUseEntries
struct AWyvern_Character_BP_Fire_Minion_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.UserConstructionScript
struct AWyvern_Character_BP_Fire_Minion_C_UserConstructionScript_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.Multi_ClearRider
struct AWyvern_Character_BP_Fire_Minion_C_Multi_ClearRider_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.DelayedClearRider
struct AWyvern_Character_BP_Fire_Minion_C_DelayedClearRider_Params
{
};

// Function Wyvern_Character_BP_Fire_Minion.Wyvern_Character_BP_Fire_Minion_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion
struct AWyvern_Character_BP_Fire_Minion_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Minion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
