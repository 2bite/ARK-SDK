#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_LanternPet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers
struct ABuff_ChargeEmitter_LanternPet_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent
struct ABuff_ChargeEmitter_LanternPet_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed
struct ABuff_ChargeEmitter_LanternPet_C_ReceiveDestroyed_Params
{
};

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer
struct ABuff_ChargeEmitter_LanternPet_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript
struct ABuff_ChargeEmitter_LanternPet_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet
struct ABuff_ChargeEmitter_LanternPet_C_ExecuteUbergraph_Buff_ChargeEmitter_LanternPet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
