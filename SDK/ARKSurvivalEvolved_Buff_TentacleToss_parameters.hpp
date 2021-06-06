#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TentacleToss_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TentacleToss.Buff_TentacleToss_C.AllowPostProcessEffect
struct ABuff_TentacleToss_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TentacleToss.Buff_TentacleToss_C.BPDeactivated
struct ABuff_TentacleToss_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TentacleToss.Buff_TentacleToss_C.UserConstructionScript
struct ABuff_TentacleToss_C_UserConstructionScript_Params
{
};

// Function Buff_TentacleToss.Buff_TentacleToss_C.ExecuteUbergraph_Buff_TentacleToss
struct ABuff_TentacleToss_C_ExecuteUbergraph_Buff_TentacleToss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
