#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.BPIgnoreRadialDamageVictim
struct AProjArrow_Explosive_C_BPIgnoreRadialDamageVictim_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveBeginPlay
struct AProjArrow_Explosive_C_ReceiveBeginPlay_Params
{
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.OnExplode
struct AProjArrow_Explosive_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.UserConstructionScript
struct AProjArrow_Explosive_C_UserConstructionScript_Params
{
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ReceiveAnyDamage
struct AProjArrow_Explosive_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjArrow_Explosive.ProjArrow_Explosive_C.ExecuteUbergraph_ProjArrow_Explosive
struct AProjArrow_Explosive_C_ExecuteUbergraph_ProjArrow_Explosive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
