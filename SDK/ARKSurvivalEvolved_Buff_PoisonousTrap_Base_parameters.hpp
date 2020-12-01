#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousTrap_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ReceiveBeginPlay
struct ABuff_PoisonousTrap_Base_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BuffTickClient
struct ABuff_PoisonousTrap_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.BPCustomAllowAddBuff
struct ABuff_PoisonousTrap_Base_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.UserConstructionScript
struct ABuff_PoisonousTrap_Base_C_UserConstructionScript_Params
{
};

// Function Buff_PoisonousTrap_Base.Buff_PoisonousTrap_Base_C.ExecuteUbergraph_Buff_PoisonousTrap_Base
struct ABuff_PoisonousTrap_Base_C_ExecuteUbergraph_Buff_PoisonousTrap_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
