// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesZ_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Get Charge Variable Interface");

	AStructure_PlantSpeciesZ_Base_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.GetNumBatteries");

	AStructure_PlantSpeciesZ_Base_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPTriggerStasisEvent
// ()

void AStructure_PlantSpeciesZ_Base_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPTriggerStasisEvent");

	AStructure_PlantSpeciesZ_Base_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveDestroyed
// ()

void AStructure_PlantSpeciesZ_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveDestroyed");

	AStructure_PlantSpeciesZ_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState
// ()

void AStructure_PlantSpeciesZ_Base_C::InitializeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState");

	AStructure_PlantSpeciesZ_Base_C_InitializeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff
// ()

void AStructure_PlantSpeciesZ_Base_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff");

	AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager
// ()

void AStructure_PlantSpeciesZ_Base_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager");

	AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.UserConstructionScript
// ()

void AStructure_PlantSpeciesZ_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.UserConstructionScript");

	AStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Interface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Trigger Multicast Interface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Set Charge Variable Interface");

	AStructure_PlantSpeciesZ_Base_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CheckForBatteriesAndUpdate_Multicast
// ()

void AStructure_PlantSpeciesZ_Base_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CheckForBatteriesAndUpdate_Multicast");

	AStructure_PlantSpeciesZ_Base_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Interface Check for Batteries and Update Multicast
// ()

void AStructure_PlantSpeciesZ_Base_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Interface Check for Batteries and Update Multicast");

	AStructure_PlantSpeciesZ_Base_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Float_Multicast");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean Interface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventFloatInterface");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Boolean_Multicast");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Boolean MulticastInterface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Float Multicast Interface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Double_Multicast");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Double_Multicast_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventDoubleInterface");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.Charge Variable Event Double MulticastInterface");

	AStructure_PlantSpeciesZ_Base_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntInterface");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEventIntMulticastInterface");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Int(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ChargeVariableEvent_Int_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ChargeVariableEvent_Int_Multicast");

	AStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Int_Multicast_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveBeginPlay
// ()

void AStructure_PlantSpeciesZ_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ReceiveBeginPlay");

	AStructure_PlantSpeciesZ_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPUnstasis
// ()

void AStructure_PlantSpeciesZ_Base_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.BPUnstasis");

	AStructure_PlantSpeciesZ_Base_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager_Multicast
// ()

void AStructure_PlantSpeciesZ_Base_C::CreateChargeManager_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.CreateChargeManager_Multicast");

	AStructure_PlantSpeciesZ_Base_C_CreateChargeManager_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState_Multicast
// ()

void AStructure_PlantSpeciesZ_Base_C::InitializeState_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.InitializeState_Multicast");

	AStructure_PlantSpeciesZ_Base_C_InitializeState_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff_Multicast
// ()

void AStructure_PlantSpeciesZ_Base_C::DestroyChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.DestroyChargeBuff_Multicast");

	AStructure_PlantSpeciesZ_Base_C_DestroyChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Structure_PlantSpeciesZ_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesZ_Base_C::ExecuteUbergraph_Structure_PlantSpeciesZ_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesZ_Base.Structure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Structure_PlantSpeciesZ_Base");

	AStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Structure_PlantSpeciesZ_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
