#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCopyCustomSettingsFromTurret
struct AStructureTurretBaseBP_C_BPCopyCustomSettingsFromTurret_Params
{
	class APrimalStructureTurret**                     FromTurret;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTurretPreventsTargeting
struct AStructureTurretBaseBP_C_BPTurretPreventsTargeting_Params
{
	class APrimalCharacter**                           PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPServerHandleNetExecCommand
struct AStructureTurretBaseBP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPClientDoMultiUse
struct AStructureTurretBaseBP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPGetMultiUseEntries
struct AStructureTurretBaseBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTryMultiUse
struct AStructureTurretBaseBP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPPostLoadedFromSaveGame
struct AStructureTurretBaseBP_C_BPPostLoadedFromSaveGame_Params
{
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.TurretCheckHardLimit
struct AStructureTurretBaseBP_C_TurretCheckHardLimit_Params
{
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPUseCountStructureInRange
struct AStructureTurretBaseBP_C_BPUseCountStructureInRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCanBeActivated
struct AStructureTurretBaseBP_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPIsAllowedToBuildEx
struct AStructureTurretBaseBP_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BlueprintDrawHUD
struct AStructureTurretBaseBP_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.UserConstructionScript
struct AStructureTurretBaseBP_C_UserConstructionScript_Params
{
};

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.ExecuteUbergraph_StructureTurretBaseBP
struct AStructureTurretBaseBP_C_ExecuteUbergraph_StructureTurretBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
