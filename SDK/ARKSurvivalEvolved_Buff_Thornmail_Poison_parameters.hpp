#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Poison_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.CalculateDoTDamage
struct ABuff_Thornmail_Poison_C_CalculateDoTDamage_Params
{
	float*                                             TimeSinceLastDoT;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.UserConstructionScript
struct ABuff_Thornmail_Poison_C_UserConstructionScript_Params
{
};

// Function Buff_Thornmail_Poison.Buff_Thornmail_Poison_C.ExecuteUbergraph_Buff_Thornmail_Poison
struct ABuff_Thornmail_Poison_C_ExecuteUbergraph_Buff_Thornmail_Poison_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
