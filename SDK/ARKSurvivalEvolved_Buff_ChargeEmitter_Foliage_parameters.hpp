#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast
struct ABuff_ChargeEmitter_Foliage_C_GetActorsToIgnoreOnRaycast_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor
struct ABuff_ChargeEmitter_Foliage_C_GetEmitterActor_Params
{
	class AActor*                                      emitterActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable
struct ABuff_ChargeEmitter_Foliage_C_Get_Charge_Variable_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                VariableName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge
struct ABuff_ChargeEmitter_Foliage_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript
struct ABuff_ChargeEmitter_Foliage_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay
struct ABuff_ChargeEmitter_Foliage_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage
struct ABuff_ChargeEmitter_Foliage_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
