#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_MissionPrepArea_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveEndPlay
struct AEmitter_MissionPrepArea_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ReceiveBeginPlay
struct AEmitter_MissionPrepArea_C_ReceiveBeginPlay_Params
{
};

// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.UserConstructionScript
struct AEmitter_MissionPrepArea_C_UserConstructionScript_Params
{
};

// Function Emitter_MissionPrepArea.Emitter_MissionPrepArea_C.ExecuteUbergraph_Emitter_MissionPrepArea
struct AEmitter_MissionPrepArea_C_ExecuteUbergraph_Emitter_MissionPrepArea_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
