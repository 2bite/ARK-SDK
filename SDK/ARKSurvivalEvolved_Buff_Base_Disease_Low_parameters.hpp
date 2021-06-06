#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Disease_Low_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.BPCustomAllowAddBuff
struct ABuff_Base_Disease_Low_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.UserConstructionScript
struct ABuff_Base_Disease_Low_C_UserConstructionScript_Params
{
};

// Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.ExecuteUbergraph_Buff_Base_Disease_Low
struct ABuff_Base_Disease_Low_C_ExecuteUbergraph_Buff_Base_Disease_Low_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
