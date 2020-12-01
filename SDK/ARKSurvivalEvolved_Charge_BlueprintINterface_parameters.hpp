#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Charge_BlueprintINterface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventIntMulticastInterface
struct UCharge_BlueprintInterface_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventIntInterface
struct UCharge_BlueprintInterface_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.GetNumBatteries
struct UCharge_BlueprintInterface_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventDoubleInterface
struct UCharge_BlueprintInterface_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.ChargeVariableEventFloatInterface
struct UCharge_BlueprintInterface_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Boolean Interface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Double MulticastInterface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Float Multicast Interface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Boolean MulticastInterface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Interface Check for Batteries and Update Multicast
struct UCharge_BlueprintInterface_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Trigger Multicast Interface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Charge Variable Event Interface
struct UCharge_BlueprintInterface_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Get Charge Variable Interface
struct UCharge_BlueprintInterface_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Charge_BlueprintINterface.Charge_BlueprintInterface_C.Set Charge Variable Interface
struct UCharge_BlueprintInterface_C_Set_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
