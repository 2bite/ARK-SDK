// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_CityTerminal_BP_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Get Charge Variable Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Get_Charge_Variable_Interface_Params params;
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


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.GetNumBatteries");

	APrimalStructure_CityTerminal_BP_Snow_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.BPNotifyInventoryItemChange");

	APrimalStructure_CityTerminal_BP_Snow_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Create Charge Manager
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::Create_Charge_Manager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Create Charge Manager");

	APrimalStructure_CityTerminal_BP_Snow_C_Create_Charge_Manager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.DestroyChargeBuff
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.DestroyChargeBuff");

	APrimalStructure_CityTerminal_BP_Snow_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.UserConstructionScript
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.UserConstructionScript");

	APrimalStructure_CityTerminal_BP_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Trigger Multicast Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Set Charge Variable Interface
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

void APrimalStructure_CityTerminal_BP_Snow_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Set Charge Variable Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Set_Charge_Variable_Interface_Params params;
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


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.CheckForBatteriesAndUpdate_Multicast
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::CheckForBatteriesAndUpdate_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.CheckForBatteriesAndUpdate_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_CheckForBatteriesAndUpdate_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Interface Check for Batteries and Update Multicast
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Interface Check for Batteries and Update Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Boolean");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Float");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Float_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Boolean Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventFloatInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Boolean_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Boolean MulticastInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Float Multicast Interface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Double
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Double");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Double_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Double_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Double_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Double_Multicast_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventDoubleInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.Charge Variable Event Double MulticastInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventIntInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEventIntMulticastInterface");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Int
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Int(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Int");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Int_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Int_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ChargeVariableEvent_Int_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ChargeVariableEvent_Int_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_ChargeVariableEvent_Int_Multicast_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ReceiveBeginPlay
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ReceiveBeginPlay");

	APrimalStructure_CityTerminal_BP_Snow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.DestroyChargeBuff_Multicast
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::DestroyChargeBuff_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.DestroyChargeBuff_Multicast");

	APrimalStructure_CityTerminal_BP_Snow_C_DestroyChargeBuff_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.CreateChargeManager_Multicasr
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::CreateChargeManager_Multicasr()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.CreateChargeManager_Multicasr");

	APrimalStructure_CityTerminal_BP_Snow_C_CreateChargeManager_Multicasr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.BPUnstasis
// ()

void APrimalStructure_CityTerminal_BP_Snow_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.BPUnstasis");

	APrimalStructure_CityTerminal_BP_Snow_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalStructure_CityTerminal_BP_Snow_C::ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalStructure_CityTerminal_BP_Snow.PrimalStructure_CityTerminal_BP_Snow_C.ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Snow");

	APrimalStructure_CityTerminal_BP_Snow_C_ExecuteUbergraph_PrimalStructure_CityTerminal_BP_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
