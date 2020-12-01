#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ESP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ESP.Buff_ESP_C.ReceiveBeginPlay
struct ABuff_ESP_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ESP.Buff_ESP_C.BPDeactivated
struct ABuff_ESP_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ESP.Buff_ESP_C.UserConstructionScript
struct ABuff_ESP_C_UserConstructionScript_Params
{
};

// Function Buff_ESP.Buff_ESP_C.ExecuteUbergraph_Buff_ESP
struct ABuff_ESP_C_ExecuteUbergraph_Buff_ESP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
