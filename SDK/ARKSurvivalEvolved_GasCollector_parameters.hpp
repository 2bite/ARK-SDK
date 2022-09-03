#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasCollector_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GasCollector.GasCollector_C.BPUnstasis
struct AGasCollector_C_BPUnstasis_Params
{
};

// Function GasCollector.GasCollector_C.Update Gas FX
struct AGasCollector_C_Update_Gas_FX_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasCollector.GasCollector_C.OnRep_CurrentGasFXHeight
struct AGasCollector_C_OnRep_CurrentGasFXHeight_Params
{
};

// Function GasCollector.GasCollector_C.RecalculateGasFXHeight
struct AGasCollector_C_RecalculateGasFXHeight_Params
{
};

// Function GasCollector.GasCollector_C.UserConstructionScript
struct AGasCollector_C_UserConstructionScript_Params
{
};

// Function GasCollector.GasCollector_C.ReceiveBeginPlay
struct AGasCollector_C_ReceiveBeginPlay_Params
{
};

// Function GasCollector.GasCollector_C.RefreshInv
struct AGasCollector_C_RefreshInv_Params
{
};

// Function GasCollector.GasCollector_C.BPNotifyInventoryItemChange
struct AGasCollector_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasCollector.GasCollector_C.ExecuteUbergraph_GasCollector
struct AGasCollector_C_ExecuteUbergraph_GasCollector_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
