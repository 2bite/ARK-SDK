#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RemoteCameraVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPCheckPreventInput
struct ABuff_RemoteCameraVision_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ResetInterference
struct ABuff_RemoteCameraVision_C_ResetInterference_Params
{
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.StartFade
struct ABuff_RemoteCameraVision_C_StartFade_Params
{
	bool                                               FadeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPDeactivated
struct ABuff_RemoteCameraVision_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPForceCameraStyle
struct ABuff_RemoteCameraVision_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideTalkerCharacter
struct ABuff_RemoteCameraVision_C_BPOverrideTalkerCharacter_Params
{
	class APrimalCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.IsLocalCamera
struct ABuff_RemoteCameraVision_C_IsLocalCamera_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.PossessionChangePending
struct ABuff_RemoteCameraVision_C_PossessionChangePending_Params
{
	class ARemoteCamera_Character_BP_C*                NewCamera;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideIsNetRelevantFor
struct ABuff_RemoteCameraVision_C_BPOverrideIsNetRelevantFor_Params
{
	class APlayerController**                          RealViewer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Viewer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcLocation;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BuffTickClient
struct ABuff_RemoteCameraVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.UserConstructionScript
struct ABuff_RemoteCameraVision_C_UserConstructionScript_Params
{
};

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ExecuteUbergraph_Buff_RemoteCameraVision
struct ABuff_RemoteCameraVision_C_ExecuteUbergraph_Buff_RemoteCameraVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
