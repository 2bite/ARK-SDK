#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NocturnalState_Groggy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.BPCustomAllowAddBuff
struct ABuff_NocturnalState_Groggy_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.UserConstructionScript
struct ABuff_NocturnalState_Groggy_C_UserConstructionScript_Params
{
};

// Function Buff_NocturnalState_Groggy.Buff_NocturnalState_Groggy_C.ExecuteUbergraph_Buff_NocturnalState_Groggy
struct ABuff_NocturnalState_Groggy_C_ExecuteUbergraph_Buff_NocturnalState_Groggy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
