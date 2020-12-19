#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesZ_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Get Charge Variable Interface
struct AStructure_PlantSpeciesZ_Base_C_Get_Charge_Variable_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.GetNumBatteries
struct AStructure_PlantSpeciesZ_Base_C_GetNumBatteries_Params
{
	int                                                numBatteries;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPTriggerStasisEvent
struct AStructure_PlantSpeciesZ_Base_C_BPTriggerStasisEvent_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveDestroyed
struct AStructure_PlantSpeciesZ_Base_C_ReceiveDestroyed_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState
struct AStructure_PlantSpeciesZ_Base_C_InitializeState_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff
struct AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager
struct AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.UserConstructionScript
struct AStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Interface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Trigger Multicast Interface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iVariable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Set Charge Variable Interface
struct AStructure_PlantSpeciesZ_Base_C_Set_Charge_Variable_Interface_Params
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

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CheckForBatteriesAndUpdate_Multicast
struct AStructure_PlantSpeciesZ_Base_C_CheckForBatteriesAndUpdate_Multicast_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Interface Check for Batteries and Update Multicast
struct AStructure_PlantSpeciesZ_Base_C_Interface_Check_for_Batteries_and_Update_Multicast_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float_Multicast
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean Interface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Boolean_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventFloatInterface
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventFloatInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean_Multicast
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean MulticastInterface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Boolean_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Float Multicast Interface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Float_Multicast_Interface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double_Multicast
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventDoubleInterface
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventDoubleInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Double MulticastInterface
struct AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Double_MulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntInterface
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntMulticastInterface
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntMulticastInterface_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int_Multicast
struct AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Multicast_Params
{
	TEnumAsByte<E_ChargeVariableNames>                 variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ivalue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveBeginPlay
struct AStructure_PlantSpeciesZ_Base_C_ReceiveBeginPlay_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPUnstasis
struct AStructure_PlantSpeciesZ_Base_C_BPUnstasis_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager_Multicast
struct AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Multicast_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState_Multicast
struct AStructure_PlantSpeciesZ_Base_C_InitializeState_Multicast_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff_Multicast
struct AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Multicast_Params
{
};

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Structure_PlantSpeciesZ_Base
struct AStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Structure_PlantSpeciesZ_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
