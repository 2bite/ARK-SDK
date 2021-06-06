#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Archa_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Archa_Character_BP.Archa_Character_BP_C.DoOverrideMountedAirControl
struct AArcha_Character_BP_C_DoOverrideMountedAirControl_Params
{
	float*                                             AirControlIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPServerHandleNetExecCommand
struct AArcha_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.OnRep_bPreventGlide
struct AArcha_Character_BP_C_OnRep_bPreventGlide_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.HandleMountedDinoAction
struct AArcha_Character_BP_C_HandleMountedDinoAction_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPCharacterSleeped
struct AArcha_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.GiveSap
struct AArcha_Character_BP_C_GiveSap_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPOnAttachmentReplication
struct AArcha_Character_BP_C_BPOnAttachmentReplication_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPOnSetMountedDino
struct AArcha_Character_BP_C_BPOnSetMountedDino_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPOnClearMountedDino
struct AArcha_Character_BP_C_BPOnClearMountedDino_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.ReceiveTick
struct AArcha_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.BPGetGravityZScale
struct AArcha_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.UserConstructionScript
struct AArcha_Character_BP_C_UserConstructionScript_Params
{
};

// Function Archa_Character_BP.Archa_Character_BP_C.MultiFinishAttachingToTree
struct AArcha_Character_BP_C_MultiFinishAttachingToTree_Params
{
	struct FVector                                     relLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    relRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archa_Character_BP.Archa_Character_BP_C.ExecuteUbergraph_Archa_Character_BP
struct AArcha_Character_BP_C_ExecuteUbergraph_Archa_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
