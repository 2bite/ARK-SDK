#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RootedAOE_ForestKaiju_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPActivated
struct ABuff_RootedAOE_ForestKaiju_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.RootEnemiesInside
struct ABuff_RootedAOE_ForestKaiju_C_RootEnemiesInside_Params
{
	class AActor*                                      ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.BPDeactivated
struct ABuff_RootedAOE_ForestKaiju_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.UserConstructionScript
struct ABuff_RootedAOE_ForestKaiju_C_UserConstructionScript_Params
{
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveTick
struct ABuff_RootedAOE_ForestKaiju_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ReceiveBeginPlay
struct ABuff_RootedAOE_ForestKaiju_C_ReceiveBeginPlay_Params
{
};

// Function Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C.ExecuteUbergraph_Buff_RootedAOE_ForestKaiju
struct ABuff_RootedAOE_ForestKaiju_C_ExecuteUbergraph_Buff_RootedAOE_ForestKaiju_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
