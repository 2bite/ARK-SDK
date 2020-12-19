#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Large_CrystalWyvern_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.CheckCorpseDissolve
struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_CheckCorpseDissolve_Params
{
};

// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.BPCustomHarvestResource
struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_BPCustomHarvestResource_Params
{
	class UPrimalInventoryComponent**                  invComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumToGive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ToActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoDeathHarvestingComponent_Large_CrystalWyvern.DinoDeathHarvestingComponent_Large_CrystalWyvern_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern
struct UDinoDeathHarvestingComponent_Large_CrystalWyvern_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Large_CrystalWyvern_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
