#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBallistaBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.GetHudData
struct AStructureTurretBallistaBaseBP_C_GetHudData_Params
{
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentAmmoItemTemplate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AmmoItemTemplates;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                LowAmmoWarningAmount;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.BPReleasedPlayer
struct AStructureTurretBallistaBaseBP_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript
struct AStructureTurretBallistaBaseBP_C_UserConstructionScript_Params
{
};

// Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP
struct AStructureTurretBallistaBaseBP_C_ExecuteUbergraph_StructureTurretBallistaBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
