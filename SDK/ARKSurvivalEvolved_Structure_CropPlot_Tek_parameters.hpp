#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_CropPlot_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ResetRefreshInterval
struct AStructure_CropPlot_Tek_C_ResetRefreshInterval_Params
{
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPInventoryItemUsed
struct AStructure_CropPlot_Tek_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.CheckInstantGrow
struct AStructure_CropPlot_Tek_C_CheckInstantGrow_Params
{
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPNotifyInventoryItemChange
struct AStructure_CropPlot_Tek_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.BPGetAdditionalGrowthMultiplier
struct AStructure_CropPlot_Tek_C_BPGetAdditionalGrowthMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.UserConstructionScript
struct AStructure_CropPlot_Tek_C_UserConstructionScript_Params
{
};

// Function Structure_CropPlot_Tek.Structure_CropPlot_Tek_C.ExecuteUbergraph_Structure_CropPlot_Tek
struct AStructure_CropPlot_Tek_C_ExecuteUbergraph_Structure_CropPlot_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
