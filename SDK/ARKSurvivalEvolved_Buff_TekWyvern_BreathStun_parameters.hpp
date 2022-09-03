#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvern_BreathStun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPOverrideBuffToGiveOnDeactivation
struct ABuff_TekWyvern_BreathStun_C_BPOverrideBuffToGiveOnDeactivation_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPCustomAllowAddBuff
struct ABuff_TekWyvern_BreathStun_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.UserConstructionScript
struct ABuff_TekWyvern_BreathStun_C_UserConstructionScript_Params
{
};

// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun
struct ABuff_TekWyvern_BreathStun_C_ExecuteUbergraph_Buff_TekWyvern_BreathStun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
