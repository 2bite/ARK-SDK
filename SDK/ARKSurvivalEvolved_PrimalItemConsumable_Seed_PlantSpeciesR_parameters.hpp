#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesR_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon
struct UPrimalItemConsumable_Seed_PlantSpeciesR_C_BPDrawItemIcon_Params
{
	class UCanvas**                                    ItemCanvas;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ItemCanvasSize;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ItemCanvasScale;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bItemEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TheTintColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR
struct UPrimalItemConsumable_Seed_PlantSpeciesR_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
