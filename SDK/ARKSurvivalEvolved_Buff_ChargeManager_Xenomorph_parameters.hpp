#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_Xenomorph_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.AddChargeSource
struct ABuff_ChargeManager_Xenomorph_C_AddChargeSource_Params
{
	class ABuff_ChargeEmitter_C**                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.OnChargeEvent
struct ABuff_ChargeManager_Xenomorph_C_OnChargeEvent_Params
{
};

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.CanReceive Charge
struct ABuff_ChargeManager_Xenomorph_C_CanReceive_Charge_Params
{
	bool                                               canReceive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.UserConstructionScript
struct ABuff_ChargeManager_Xenomorph_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeManager_Xenomorph.Buff_ChargeManager_Xenomorph_C.ExecuteUbergraph_Buff_ChargeManager_Xenomorph
struct ABuff_ChargeManager_Xenomorph_C_ExecuteUbergraph_Buff_ChargeManager_Xenomorph_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
