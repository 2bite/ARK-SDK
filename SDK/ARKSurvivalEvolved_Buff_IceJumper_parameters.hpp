#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IceJumper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_IceJumper.Buff_IceJumper_C.GetBuffPostprocessIntensity
struct ABuff_IceJumper_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IceJumper.Buff_IceJumper_C.AllowPostProcessEffect
struct ABuff_IceJumper_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IceJumper.Buff_IceJumper_C.UserConstructionScript
struct ABuff_IceJumper_C_UserConstructionScript_Params
{
};

// Function Buff_IceJumper.Buff_IceJumper_C.ExecuteUbergraph_Buff_IceJumper
struct ABuff_IceJumper_C_ExecuteUbergraph_Buff_IceJumper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
