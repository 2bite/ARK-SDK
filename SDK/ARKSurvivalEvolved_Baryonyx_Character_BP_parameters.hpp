#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Baryonyx_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPSetupTamed
struct ABaryonyx_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.IsActorHealingFish
struct ABaryonyx_Character_BP_C_IsActorHealingFish_Params
{
	class AActor*                                      ActorToTest;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTimerServer
struct ABaryonyx_Character_BP_C_BPTimerServer_Params
{
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanRiderAttack
struct ABaryonyx_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BaryCanAttack
struct ABaryonyx_Character_BP_C_BaryCanAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RetVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintCanAttack
struct ABaryonyx_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPKilledSomethingEvent
struct ABaryonyx_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.K2_OnMovementModeChanged
struct ABaryonyx_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BlueprintAdjustOutputDamage
struct ABaryonyx_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPGetMultiUseEntries
struct ABaryonyx_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.BPTryMultiUse
struct ABaryonyx_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.UserConstructionScript
struct ABaryonyx_Character_BP_C_UserConstructionScript_Params
{
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackStart
struct ABaryonyx_Character_BP_C_AnimNotify_StunAttackStart_Params
{
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.AnimNotify_StunAttackMid
struct ABaryonyx_Character_BP_C_AnimNotify_StunAttackMid_Params
{
};

// Function Baryonyx_Character_BP.Baryonyx_Character_BP_C.ExecuteUbergraph_Baryonyx_Character_BP
struct ABaryonyx_Character_BP_C_ExecuteUbergraph_Baryonyx_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
