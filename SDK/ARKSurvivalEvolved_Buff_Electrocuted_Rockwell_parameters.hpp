#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_Rockwell_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.BPCustomAllowAddBuff
struct ABuff_Electrocuted_Rockwell_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.UserConstructionScript
struct ABuff_Electrocuted_Rockwell_C_UserConstructionScript_Params
{
};

// Function Buff_Electrocuted_Rockwell.Buff_Electrocuted_Rockwell_C.ExecuteUbergraph_Buff_Electrocuted_Rockwell
struct ABuff_Electrocuted_Rockwell_C_ExecuteUbergraph_Buff_Electrocuted_Rockwell_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
