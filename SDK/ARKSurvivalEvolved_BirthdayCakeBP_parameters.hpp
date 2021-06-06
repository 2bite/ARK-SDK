#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BirthdayCakeBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPPreventReleaseSeatingStructure
struct ABirthdayCakeBP_C_BPPreventReleaseSeatingStructure_Params
{
	class AShooterCharacter**                          ForSitter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPDefaultProcessEditText
struct ABirthdayCakeBP_C_BPDefaultProcessEditText_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     TextToUse;                                                // (Parm, ZeroConstructor)
	bool*                                              checkedBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPClientDoMultiUse
struct ABirthdayCakeBP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPGetMultiUseEntries
struct ABirthdayCakeBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BlueprintDrawHUD
struct ABirthdayCakeBP_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPServerHandleNetExecCommand
struct ABirthdayCakeBP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.OnRep_bIsOpen
struct ABirthdayCakeBP_C_OnRep_bIsOpen_Params
{
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPReleasedPlayer
struct ABirthdayCakeBP_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPSeatedPlayer
struct ABirthdayCakeBP_C_BPSeatedPlayer_Params
{
	class AShooterCharacter**                          SeatedChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.UserConstructionScript
struct ABirthdayCakeBP_C_UserConstructionScript_Params
{
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.SeatedTicker
struct ABirthdayCakeBP_C_SeatedTicker_Params
{
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.ForceDestroyMe
struct ABirthdayCakeBP_C_ForceDestroyMe_Params
{
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.DisplayTextTicker
struct ABirthdayCakeBP_C_DisplayTextTicker_Params
{
};

// Function BirthdayCakeBP.BirthdayCakeBP_C.ExecuteUbergraph_BirthdayCakeBP
struct ABirthdayCakeBP_C_ExecuteUbergraph_BirthdayCakeBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
