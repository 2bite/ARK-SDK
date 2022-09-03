#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GeyserLaunch_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPDeactivated
struct ABuff_GeyserLaunch_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPSetupForInstigator
struct ABuff_GeyserLaunch_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BuffTickServer
struct ABuff_GeyserLaunch_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.BPActivated
struct ABuff_GeyserLaunch_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.UserConstructionScript
struct ABuff_GeyserLaunch_C_UserConstructionScript_Params
{
};

// Function Buff_GeyserLaunch.Buff_GeyserLaunch_C.ExecuteUbergraph_Buff_GeyserLaunch
struct ABuff_GeyserLaunch_C_ExecuteUbergraph_Buff_GeyserLaunch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
