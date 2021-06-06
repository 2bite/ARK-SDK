#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugPostProccess_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim
struct ABuff_BrainSlugPostProccess_C_InterceptInstigatorPlayerEmoteAnim_Params
{
	class UAnimMontage**                               EmoteAnim;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand
struct ABuff_BrainSlugPostProccess_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput
struct ABuff_BrainSlugPostProccess_C_BuffOverrideInventoryAccessInput_Params
{
	class AController**                                InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInputPressed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect
struct ABuff_BrainSlugPostProccess_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript
struct ABuff_BrainSlugPostProccess_C_UserConstructionScript_Params
{
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient
struct ABuff_BrainSlugPostProccess_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer
struct ABuff_BrainSlugPostProccess_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay
struct ABuff_BrainSlugPostProccess_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess
struct ABuff_BrainSlugPostProccess_C_ExecuteUbergraph_Buff_BrainSlugPostProccess_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
