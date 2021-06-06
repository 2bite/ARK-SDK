#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Indicate_Selected_Teleport_Target_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand
struct ABuff_Indicate_Selected_Teleport_Target_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript
struct ABuff_Indicate_Selected_Teleport_Target_C_UserConstructionScript_Params
{
};

// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client
struct ABuff_Indicate_Selected_Teleport_Target_C_toggle_active_on_targeting_client_Params
{
	class APlayerController*                           NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target
struct ABuff_Indicate_Selected_Teleport_Target_C_ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
