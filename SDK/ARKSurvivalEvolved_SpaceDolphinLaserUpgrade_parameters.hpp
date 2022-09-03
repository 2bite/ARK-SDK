#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinLaserUpgrade_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient
struct ASpaceDolphinLaserUpgrade_C_BPCustomIsRelevantForClient_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick
struct ASpaceDolphinLaserUpgrade_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript
struct ASpaceDolphinLaserUpgrade_C_UserConstructionScript_Params
{
};

// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade
struct ASpaceDolphinLaserUpgrade_C_ExecuteUbergraph_SpaceDolphinLaserUpgrade_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
