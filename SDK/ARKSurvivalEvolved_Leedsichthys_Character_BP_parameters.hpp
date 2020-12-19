#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leedsichthys_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd
struct ALeedsichthys_Character_BP_C_GetNumOfStacksToAdd_Params
{
	int                                                StackQuantity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumToAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfStacks;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LeftOver;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse
struct ALeedsichthys_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack
struct ALeedsichthys_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage
struct ALeedsichthys_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex
struct ALeedsichthys_Character_BP_C_GetHarvestingIndex_Params
{
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries
struct ALeedsichthys_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse
struct ALeedsichthys_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript
struct ALeedsichthys_Character_BP_C_UserConstructionScript_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay
struct ALeedsichthys_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd
struct ALeedsichthys_Character_BP_C_ForceFwd_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd
struct ALeedsichthys_Character_BP_C_ServerForceFwd_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood
struct ALeedsichthys_Character_BP_C_Spawn_Blood_Params
{
	struct FVector                                     ActorLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash
struct ALeedsichthys_Character_BP_C_AnimNotify_TailSplash_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash
struct ALeedsichthys_Character_BP_C_AnimNotify_MouthSplash_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer
struct ALeedsichthys_Character_BP_C_BPTimerServer_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime
struct ALeedsichthys_Character_BP_C_ClearBaitTime_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior
struct ALeedsichthys_Character_BP_C_SootheBehavior_Params
{
};

// Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP
struct ALeedsichthys_Character_BP_C_ExecuteUbergraph_Leedsichthys_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
