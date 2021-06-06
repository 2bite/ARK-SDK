#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretRocket_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTurretRocket.StructureTurretRocket_C.GetHudData
struct AStructureTurretRocket_C_GetHudData_Params
{
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentAmmoItemTemplate;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AmmoItemTemplates;                                        // (Parm, OutParm, ZeroConstructor)
	int                                                LowAmmoWarningAmount;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretRocket.StructureTurretRocket_C.BPReleasedPlayer
struct AStructureTurretRocket_C_BPReleasedPlayer_Params
{
	class AShooterCharacter**                          ReleasedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AtSeatNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTurretRocket.StructureTurretRocket_C.UserConstructionScript
struct AStructureTurretRocket_C_UserConstructionScript_Params
{
};

// Function StructureTurretRocket.StructureTurretRocket_C.ExecuteUbergraph_StructureTurretRocket
struct AStructureTurretRocket_C_ExecuteUbergraph_StructureTurretRocket_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
