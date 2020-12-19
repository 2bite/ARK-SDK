#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurse_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BloodCurse.Buff_BloodCurse_C.BuffTickClient
struct ABuff_BloodCurse_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurse.Buff_BloodCurse_C.BPActivated
struct ABuff_BloodCurse_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurse.Buff_BloodCurse_C.BPDeactivated
struct ABuff_BloodCurse_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurse.Buff_BloodCurse_C.ReceiveTick
struct ABuff_BloodCurse_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BloodCurse.Buff_BloodCurse_C.UserConstructionScript
struct ABuff_BloodCurse_C_UserConstructionScript_Params
{
};

// Function Buff_BloodCurse.Buff_BloodCurse_C.ExecuteUbergraph_Buff_BloodCurse
struct ABuff_BloodCurse_C_ExecuteUbergraph_Buff_BloodCurse_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
