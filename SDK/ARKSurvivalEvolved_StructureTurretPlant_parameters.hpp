#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretPlant_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretPlant.StructureTurretPlant_C.BPPostLoadedFromSaveGame
struct AStructureTurretPlant_C_BPPostLoadedFromSaveGame_Params
{
};

// Function StructureTurretPlant.StructureTurretPlant_C.BPCanBeActivated
struct AStructureTurretPlant_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTurretPlant.StructureTurretPlant_C.Turret Check Hard Limit
struct AStructureTurretPlant_C_Turret_Check_Hard_Limit_Params
{
};

// Function StructureTurretPlant.StructureTurretPlant_C.BlueprintDrawHUD
struct AStructureTurretPlant_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretPlant.StructureTurretPlant_C.UserConstructionScript
struct AStructureTurretPlant_C_UserConstructionScript_Params
{
};

// Function StructureTurretPlant.StructureTurretPlant_C.ExecuteUbergraph_StructureTurretPlant
struct AStructureTurretPlant_C_ExecuteUbergraph_StructureTurretPlant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
