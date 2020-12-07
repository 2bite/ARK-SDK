#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_CityTerminal_BP_Wasteland_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Get Charge Variable Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.GetNumBatteries
struct APrimalStructure_CityTerminal_BP_Wasteland_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.BPNotifyInventoryItemChange
struct APrimalStructure_CityTerminal_BP_Wasteland_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Create Charge Manager
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Create_Charge_Manager_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.DestroyChargeBuff
struct APrimalStructure_CityTerminal_BP_Wasteland_C_DestroyChargeBuff_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.UserConstructionScript
struct APrimalStructure_CityTerminal_BP_Wasteland_C_UserConstructionScript_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Trigger Multicast Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Set Charge Variable Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.CheckForBatteriesAndUpdate_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Interface Check for Batteries and Update Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Boolean
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Float
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Float_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Boolean Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEventFloatInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Boolean_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Boolean MulticastInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Float Multicast Interface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Double
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Double_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEventDoubleInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.Charge Variable Event Double MulticastInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEventIntInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEventIntMulticastInterface
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Int
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Int_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ChargeVariableEvent_Int_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ChargeVariableEvent_Int_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ReceiveBeginPlay
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ReceiveBeginPlay_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.DestroyChargeBuff_Multicast
struct APrimalStructure_CityTerminal_BP_Wasteland_C_DestroyChargeBuff_Multicast_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.CreateChargeManager_Multicasr
struct APrimalStructure_CityTerminal_BP_Wasteland_C_CreateChargeManager_Multicasr_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.BPUnstasis
struct APrimalStructure_CityTerminal_BP_Wasteland_C_BPUnstasis_Params
{
};

// Function PrimalStructure_CityTerminal_BP_Wasteland.PrimalStructure_CityTerminal_BP_Wasteland_C.ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Wasteland
struct APrimalStructure_CityTerminal_BP_Wasteland_C_ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Wasteland_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
