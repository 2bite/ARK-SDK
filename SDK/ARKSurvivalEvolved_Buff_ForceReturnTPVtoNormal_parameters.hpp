#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceReturnTPVtoNormal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BuffTickClient
struct ABuff_ForceReturnTPVtoNormal_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.BPCustomAllowAddBuff
struct ABuff_ForceReturnTPVtoNormal_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.UserConstructionScript
struct ABuff_ForceReturnTPVtoNormal_C_UserConstructionScript_Params
{
};

// Function Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C.ExecuteUbergraph_Buff_ForceReturnTPVtoNormal
struct ABuff_ForceReturnTPVtoNormal_C_ExecuteUbergraph_Buff_ForceReturnTPVtoNormal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
