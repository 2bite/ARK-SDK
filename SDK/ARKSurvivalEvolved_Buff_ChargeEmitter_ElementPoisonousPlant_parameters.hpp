#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_ElementPoisonousPlant_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetEmitterActor
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetEmitterActor_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ShouldEnableTimers
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetActorsToIgnoreOnRaycast
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetActorsToIgnoreOnRaycast_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.CanEmitCharge
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.UserConstructionScript
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant
struct ABuff_ChargeEmitter_ElementPoisonousPlant_C_ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
