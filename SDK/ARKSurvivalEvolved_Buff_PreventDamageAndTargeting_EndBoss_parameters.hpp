#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventDamageAndTargeting_EndBoss_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.PreventActorTargeting
struct ABuff_PreventDamageAndTargeting_EndBoss_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.BPDeactivated
struct ABuff_PreventDamageAndTargeting_EndBoss_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.UserConstructionScript
struct ABuff_PreventDamageAndTargeting_EndBoss_C_UserConstructionScript_Params
{
};

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ReceiveBeginPlay
struct ABuff_PreventDamageAndTargeting_EndBoss_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PreventDamageAndTargeting_EndBoss.Buff_PreventDamageAndTargeting_EndBoss_C.ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss
struct ABuff_PreventDamageAndTargeting_EndBoss_C_ExecuteUbergraph_Buff_PreventDamageAndTargeting_EndBoss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
