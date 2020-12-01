#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderBioGrappled_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated
struct ABuff_BogSpiderBioGrappled_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple
struct ABuff_BogSpiderBioGrappled_C_ReleaseBioGrapple_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer
struct ABuff_BogSpiderBioGrappled_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements
struct ABuff_BogSpiderBioGrappled_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand
struct ABuff_BogSpiderBioGrappled_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX
struct ABuff_BogSpiderBioGrappled_C_ToggleEnsnareVFX_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient
struct ABuff_BogSpiderBioGrappled_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput
struct ABuff_BogSpiderBioGrappled_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire
struct ABuff_BogSpiderBioGrappled_C_BPHandleOnStartAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire
struct ABuff_BogSpiderBioGrappled_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared
struct ABuff_BogSpiderBioGrappled_C_OnEnsnared_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled
struct ABuff_BogSpiderBioGrappled_C_OnBioGrappled_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider
struct ABuff_BogSpiderBioGrappled_C_SyncGrapplingBogSpider_Params
{
	class ABogSpider_Character_BP_C*                   SpiderRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle
struct ABuff_BogSpiderBioGrappled_C_TryStruggle_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript
struct ABuff_BogSpiderBioGrappled_C_UserConstructionScript_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc
struct ABuff_BogSpiderBioGrappled_C_StruggleShake__FinishedFunc_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc
struct ABuff_BogSpiderBioGrappled_C_StruggleShake__UpdateFunc_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle
struct ABuff_BogSpiderBioGrappled_C_Server_TryStruggle_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent
struct ABuff_BogSpiderBioGrappled_C_Multi_OnBioGrappleEvent_Params
{
	bool                                               bEnsnare;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay
struct ABuff_BogSpiderBioGrappled_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake
struct ABuff_BogSpiderBioGrappled_C_DoHudShake_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle
struct ABuff_BogSpiderBioGrappled_C_Client_DidStruggle_Params
{
};

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled
struct ABuff_BogSpiderBioGrappled_C_ExecuteUbergraph_Buff_BogSpiderBioGrappled_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
