// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gasoline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
// (NetReliable, Native, NetMulticast, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SupportsDragOn                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gasoline_C::CheckForGasolineData(class UPrimalItem* DestinationItem, bool* SupportsDragOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData");

	UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SupportsDragOn != nullptr)
		*SupportsDragOn = params.SupportsDragOn;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
// (NetReliable, Event, NetMulticast, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gasoline_C::RefillGasoline(class UPrimalItem* DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline");

	UPrimalItemResource_Gasoline_C_RefillGasoline_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gasoline_C::BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem");

	UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemResource_Gasoline_C::BPSupportUseOntoItem(class UPrimalItem** DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem");

	UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.ExecuteUbergraph_PrimalItemResource_Gasoline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gasoline_C::ExecuteUbergraph_PrimalItemResource_Gasoline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.ExecuteUbergraph_PrimalItemResource_Gasoline");

	UPrimalItemResource_Gasoline_C_ExecuteUbergraph_PrimalItemResource_Gasoline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
