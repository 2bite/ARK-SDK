#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_FlashBang_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.GetActorsToIgnoreOnRaycast
struct ABuff_ChargeEmitter_Foliage_FlashBang_C_GetActorsToIgnoreOnRaycast_Params
{
	class AActor**                                     emitterActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.CanEmitCharge
struct ABuff_ChargeEmitter_Foliage_FlashBang_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.UserConstructionScript
struct ABuff_ChargeEmitter_Foliage_FlashBang_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang
struct ABuff_ChargeEmitter_Foliage_FlashBang_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
