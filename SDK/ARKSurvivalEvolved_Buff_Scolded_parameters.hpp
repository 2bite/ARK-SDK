#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Scolded_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Scolded.Buff_Scolded_C.ReceiveTick
struct ABuff_Scolded_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Scolded.Buff_Scolded_C.BPCustomAllowAddBuff
struct ABuff_Scolded_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Scolded.Buff_Scolded_C.UserConstructionScript
struct ABuff_Scolded_C_UserConstructionScript_Params
{
};

// Function Buff_Scolded.Buff_Scolded_C.ExecuteUbergraph_Buff_Scolded
struct ABuff_Scolded_C_ExecuteUbergraph_Buff_Scolded_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
