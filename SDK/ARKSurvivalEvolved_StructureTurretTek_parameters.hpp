#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretTek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretTek.StructureTurretTek_C.BPCanBeActivated
struct AStructureTurretTek_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.TurretCheckHardLimit
struct AStructureTurretTek_C_TurretCheckHardLimit_Params
{
};

// Function StructureTurretTek.StructureTurretTek_C.BPPostLoadedFromSaveGame
struct AStructureTurretTek_C_BPPostLoadedFromSaveGame_Params
{
};

// Function StructureTurretTek.StructureTurretTek_C.BPIsAllowedToBuildEx
struct AStructureTurretTek_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BlueprintDrawHUD
struct AStructureTurretTek_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPCanBeActivatedByPlayer
struct AStructureTurretTek_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPOverrideAllowStructureAccess
struct AStructureTurretTek_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPTurretPreventsTargeting
struct AStructureTurretTek_C_BPTurretPreventsTargeting_Params
{
	class APrimalCharacter**                           PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPServerHandleNetExecCommand
struct AStructureTurretTek_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPClientDoMultiUse
struct AStructureTurretTek_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPTryMultiUse
struct AStructureTurretTek_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretTek.StructureTurretTek_C.BPGetMultiUseEntries
struct AStructureTurretTek_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureTurretTek.StructureTurretTek_C.UserConstructionScript
struct AStructureTurretTek_C_UserConstructionScript_Params
{
};

// Function StructureTurretTek.StructureTurretTek_C.ExecuteUbergraph_StructureTurretTek
struct AStructureTurretTek_C_ExecuteUbergraph_StructureTurretTek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
