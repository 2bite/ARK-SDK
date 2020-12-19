#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

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
