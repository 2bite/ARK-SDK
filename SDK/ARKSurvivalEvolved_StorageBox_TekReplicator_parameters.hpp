#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekReplicator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.BPClientHandleNetExecCommand
struct AStorageBox_TekReplicator_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.NotifyCraftingFinished
struct AStorageBox_TekReplicator_C_NotifyCraftingFinished_Params
{
};

// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.UserConstructionScript
struct AStorageBox_TekReplicator_C_UserConstructionScript_Params
{
};

// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.ExecuteUbergraph_StorageBox_TekReplicator
struct AStorageBox_TekReplicator_C_ExecuteUbergraph_StorageBox_TekReplicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
