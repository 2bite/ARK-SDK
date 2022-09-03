#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MissionData_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MissionData.Buff_MissionData_C.UserConstructionScript
struct ABuff_MissionData_C_UserConstructionScript_Params
{
};

// Function Buff_MissionData.Buff_MissionData_C.ReceiveBeginPlay
struct ABuff_MissionData_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MissionData.Buff_MissionData_C.OnPlayerRemovedFromMissionEvent
struct ABuff_MissionData_C_OnPlayerRemovedFromMissionEvent_Params
{
	class APrimalBuff_MissionData*                     MissionDataBuff;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionType*                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionData.Buff_MissionData_C.OnPlayerAddedToMissionEvent
struct ABuff_MissionData_C_OnPlayerAddedToMissionEvent_Params
{
	class APrimalBuff_MissionData*                     MissionDataBuff;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionType*                                Mission;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MissionData.Buff_MissionData_C.ExecuteUbergraph_Buff_MissionData
struct ABuff_MissionData_C_ExecuteUbergraph_Buff_MissionData_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
