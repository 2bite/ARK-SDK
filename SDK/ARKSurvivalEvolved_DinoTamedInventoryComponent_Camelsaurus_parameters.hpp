#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Camelsaurus_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.BPInitializeInventory
struct UDinoTamedInventoryComponent_Camelsaurus_C_BPInitializeInventory_Params
{
};

// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.TakeWaterFromContainers
struct UDinoTamedInventoryComponent_Camelsaurus_C_TakeWaterFromContainers_Params
{
	float                                              amountToTake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TakenAmount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.FillWaterContainers
struct UDinoTamedInventoryComponent_Camelsaurus_C_FillWaterContainers_Params
{
	float                                              WaterAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaterAmountLeft;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoTamedInventoryComponent_Camelsaurus.DinoTamedInventoryComponent_Camelsaurus_C.ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus
struct UDinoTamedInventoryComponent_Camelsaurus_C_ExecuteUbergraph_DinoTamedInventoryComponent_Camelsaurus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
