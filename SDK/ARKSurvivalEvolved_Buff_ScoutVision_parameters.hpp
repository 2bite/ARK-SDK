#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ScoutVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPGetDebugInfoString
struct ABuff_ScoutVision_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideTalkerCharacter
struct ABuff_ScoutVision_C_BPOverrideTalkerCharacter_Params
{
	class APrimalCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveBeginPlay
struct ABuff_ScoutVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.IsLocalScout
struct ABuff_ScoutVision_C_IsLocalScout_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPIsValidUnStasisCaster
struct ABuff_ScoutVision_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideIsNetRelevantFor
struct ABuff_ScoutVision_C_BPOverrideIsNetRelevantFor_Params
{
	class APlayerController**                          RealViewer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Viewer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcLocation;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.Scout PossessionChange Pending
struct ABuff_ScoutVision_C_Scout_PossessionChange_Pending_Params
{
	class AScout_Character_BP_C*                       Scout;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.BuffTickClient
struct ABuff_ScoutVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPDrawBuffStatusHUD
struct ABuff_ScoutVision_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.AllowPostProcessEffect
struct ABuff_ScoutVision_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.UserConstructionScript
struct ABuff_ScoutVision_C_UserConstructionScript_Params
{
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveTick
struct ABuff_ScoutVision_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ScoutVision.Buff_ScoutVision_C.ExecuteUbergraph_Buff_ScoutVision
struct ABuff_ScoutVision_C_ExecuteUbergraph_Buff_ScoutVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
