// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasCollector_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasCollector.GasCollector_C.BPUnstasis
// ()

void AGasCollector_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.BPUnstasis");

	AGasCollector_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.Update Gas FX
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AGasCollector_C::Update_Gas_FX(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.Update Gas FX");

	AGasCollector_C_Update_Gas_FX_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.OnRep_CurrentGasFXHeight
// ()

void AGasCollector_C::OnRep_CurrentGasFXHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.OnRep_CurrentGasFXHeight");

	AGasCollector_C_OnRep_CurrentGasFXHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.RecalculateGasFXHeight
// ()

void AGasCollector_C::RecalculateGasFXHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.RecalculateGasFXHeight");

	AGasCollector_C_RecalculateGasFXHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.UserConstructionScript
// ()

void AGasCollector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.UserConstructionScript");

	AGasCollector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.ReceiveBeginPlay
// ()

void AGasCollector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.ReceiveBeginPlay");

	AGasCollector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.RefreshInv
// ()

void AGasCollector_C::RefreshInv()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.RefreshInv");

	AGasCollector_C_RefreshInv_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasCollector_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.BPNotifyInventoryItemChange");

	AGasCollector_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasCollector.GasCollector_C.ExecuteUbergraph_GasCollector
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasCollector_C::ExecuteUbergraph_GasCollector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasCollector.GasCollector_C.ExecuteUbergraph_GasCollector");

	AGasCollector_C_ExecuteUbergraph_GasCollector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
