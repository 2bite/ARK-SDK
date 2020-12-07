#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekCruiseMissileVision_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPGetDebugInfoString
struct ABuff_TekCruiseMissileVision_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideTalkerCharacter
struct ABuff_TekCruiseMissileVision_C_BPOverrideTalkerCharacter_Params
{
	class APrimalCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveBeginPlay
struct ABuff_TekCruiseMissileVision_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.IsLocalScout
struct ABuff_TekCruiseMissileVision_C_IsLocalScout_Params
{
	bool                                               Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPIsValidUnStasisCaster
struct ABuff_TekCruiseMissileVision_C_BPIsValidUnStasisCaster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideIsNetRelevantFor
struct ABuff_TekCruiseMissileVision_C_BPOverrideIsNetRelevantFor_Params
{
	class APlayerController**                          RealViewer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Viewer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcLocation;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.Missile Possession Change Pending
struct ABuff_TekCruiseMissileVision_C_Missile_Possession_Change_Pending_Params
{
	class ATekCruiseMissile_Character_BP_C*            missile;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BuffTickClient
struct ABuff_TekCruiseMissileVision_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPDrawBuffStatusHUD
struct ABuff_TekCruiseMissileVision_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.AllowPostProcessEffect
struct ABuff_TekCruiseMissileVision_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.UserConstructionScript
struct ABuff_TekCruiseMissileVision_C_UserConstructionScript_Params
{
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveTick
struct ABuff_TekCruiseMissileVision_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.tick vision
struct ABuff_TekCruiseMissileVision_C_tick_vision_Params
{
};

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ExecuteUbergraph_Buff_TekCruiseMissileVision
struct ABuff_TekCruiseMissileVision_C_ExecuteUbergraph_Buff_TekCruiseMissileVision_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
