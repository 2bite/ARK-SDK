#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_BaseHeavy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated
struct AStructureTurretBaseBP_BaseHeavy_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame
struct AStructureTurretBaseBP_BaseHeavy_C_BPPostLoadedFromSaveGame_Params
{
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit
struct AStructureTurretBaseBP_BaseHeavy_C_TurretCheckHardLimit_Params
{
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD
struct AStructureTurretBaseBP_BaseHeavy_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild
struct AStructureTurretBaseBP_BaseHeavy_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript
struct AStructureTurretBaseBP_BaseHeavy_C_UserConstructionScript_Params
{
};

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy
struct AStructureTurretBaseBP_BaseHeavy_C_ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
