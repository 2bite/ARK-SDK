#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretMinigun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretMinigun.StructureTurretMinigun_C.GetHudData
struct AStructureTurretMinigun_C_GetHudData_Params
{
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentAmmoItemTemplate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AmmoItemTemplates;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                LowAmmoWarningAmount;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretMinigun.StructureTurretMinigun_C.BPReleasedPlayer
struct AStructureTurretMinigun_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretMinigun.StructureTurretMinigun_C.UserConstructionScript
struct AStructureTurretMinigun_C_UserConstructionScript_Params
{
};

// Function StructureTurretMinigun.StructureTurretMinigun_C.ExecuteUbergraph_StructureTurretMinigun
struct AStructureTurretMinigun_C_ExecuteUbergraph_StructureTurretMinigun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
