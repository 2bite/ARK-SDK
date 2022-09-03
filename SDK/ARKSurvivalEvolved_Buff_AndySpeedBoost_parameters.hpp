#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndySpeedBoost_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BP_ModifyCharacterFOV
struct ABuff_AndySpeedBoost_C_BP_ModifyCharacterFOV_Params
{
	float*                                             inFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.UserConstructionScript
struct ABuff_AndySpeedBoost_C_UserConstructionScript_Params
{
};

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BuffTickServer
struct ABuff_AndySpeedBoost_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPSetupForInstigator
struct ABuff_AndySpeedBoost_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.BPDeactivated
struct ABuff_AndySpeedBoost_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AndySpeedBoost.Buff_AndySpeedBoost_C.ExecuteUbergraph_Buff_AndySpeedBoost
struct ABuff_AndySpeedBoost_C_ExecuteUbergraph_Buff_AndySpeedBoost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
