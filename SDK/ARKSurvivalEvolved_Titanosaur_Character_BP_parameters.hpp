#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Titanosaur_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct ATitanosaur_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanAttack
struct ATitanosaur_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BlueprintCanRiderAttack
struct ATitanosaur_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPSetupTamed
struct ATitanosaur_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.CheckTorporDistanceTravel
struct ATitanosaur_Character_BP_C_CheckTorporDistanceTravel_Params
{
	float                                              torporIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               outValidDistanceTravel;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.IsHeadObstructed
struct ATitanosaur_Character_BP_C_IsHeadObstructed_Params
{
	bool                                               OutVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.HasMovedRecently
struct ATitanosaur_Character_BP_C_HasMovedRecently_Params
{
	bool                                               bHasMoved;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.GiveKillExperience
struct ATitanosaur_Character_BP_C_GiveKillExperience_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPPostInitializeComponents
struct ATitanosaur_Character_BP_C_BPPostInitializeComponents_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveBeginPlay
struct ATitanosaur_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.BPAdjustDamage
struct ATitanosaur_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.UserConstructionScript
struct ATitanosaur_Character_BP_C_UserConstructionScript_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ForceTamedTick
struct ATitanosaur_Character_BP_C_ForceTamedTick_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ClearTorporHit
struct ATitanosaur_Character_BP_C_ClearTorporHit_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.TorporHit
struct ATitanosaur_Character_BP_C_TorporHit_Params
{
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ReceiveTick
struct ATitanosaur_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Titanosaur_Character_BP.Titanosaur_Character_BP_C.ExecuteUbergraph_Titanosaur_Character_BP
struct ATitanosaur_Character_BP_C_ExecuteUbergraph_Titanosaur_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
