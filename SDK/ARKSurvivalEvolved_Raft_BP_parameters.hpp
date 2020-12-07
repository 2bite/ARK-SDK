#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Raft_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Raft_BP.Raft_BP_C.BPCanCryo
struct ARaft_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Raft_BP.Raft_BP_C.ReceiveAnyDamage
struct ARaft_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raft_BP.Raft_BP_C.UserConstructionScript
struct ARaft_BP_C_UserConstructionScript_Params
{
};

// Function Raft_BP.Raft_BP_C.DoPlayKnockAnimation
struct ARaft_BP_C_DoPlayKnockAnimation_Params
{
	int                                                KnockDirectionIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raft_BP.Raft_BP_C.ExecuteUbergraph_Raft_BP
struct ARaft_BP_C_ExecuteUbergraph_Raft_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
