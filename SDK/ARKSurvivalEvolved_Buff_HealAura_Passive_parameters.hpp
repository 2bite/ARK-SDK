#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_Passive_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.StartHealing
struct ABuff_HealAura_Passive_C_StartHealing_Params
{
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.Activate Healing
struct ABuff_HealAura_Passive_C_Activate_Healing_Params
{
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.HealCharacter
struct ABuff_HealAura_Passive_C_HealCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.UserConstructionScript
struct ABuff_HealAura_Passive_C_UserConstructionScript_Params
{
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ReceiveBeginPlay
struct ABuff_HealAura_Passive_C_ReceiveBeginPlay_Params
{
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.TriggerDelayedHealing
struct ABuff_HealAura_Passive_C_TriggerDelayedHealing_Params
{
};

// Function Buff_HealAura_Passive.Buff_HealAura_Passive_C.ExecuteUbergraph_Buff_HealAura_Passive
struct ABuff_HealAura_Passive_C_ExecuteUbergraph_Buff_HealAura_Passive_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
