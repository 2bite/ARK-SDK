#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretCatapult_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretCatapult.StructureTurretCatapult_C.GetHudData
struct AStructureTurretCatapult_C_GetHudData_Params
{
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentAmmoItemTemplate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AmmoItemTemplates;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                LowAmmoWarningAmount;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretCatapult.StructureTurretCatapult_C.BPReleasedPlayer
struct AStructureTurretCatapult_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretCatapult.StructureTurretCatapult_C.UserConstructionScript
struct AStructureTurretCatapult_C_UserConstructionScript_Params
{
};

// Function StructureTurretCatapult.StructureTurretCatapult_C.ExecuteUbergraph_StructureTurretCatapult
struct AStructureTurretCatapult_C_ExecuteUbergraph_StructureTurretCatapult_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
