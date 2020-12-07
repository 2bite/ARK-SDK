#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_RareFlower_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.BPCustomAllowAddBuff
struct ABuff_RageEffect_RareFlower_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.UserConstructionScript
struct ABuff_RageEffect_RareFlower_C_UserConstructionScript_Params
{
};

// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.ExecuteUbergraph_Buff_RageEffect_RareFlower
struct ABuff_RageEffect_RareFlower_C_ExecuteUbergraph_Buff_RageEffect_RareFlower_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
