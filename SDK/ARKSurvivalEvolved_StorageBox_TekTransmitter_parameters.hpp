#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekTransmitter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.BPCanBeActivatedByPlayer
struct AStorageBox_TekTransmitter_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.UserConstructionScript
struct AStorageBox_TekTransmitter_C_UserConstructionScript_Params
{
};

// Function StorageBox_TekTransmitter.StorageBox_TekTransmitter_C.ExecuteUbergraph_StorageBox_TekTransmitter
struct AStorageBox_TekTransmitter_C_ExecuteUbergraph_StorageBox_TekTransmitter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
