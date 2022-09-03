// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChargeBattery_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimalItem_ChargeBattery_C::BPGetItemDurabilityPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage");

	UPrimalItem_ChargeBattery_C_BPGetItemDurabilityPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPrimalItem_ChargeBattery_C::BPGetItemIcon(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon");

	UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItem_ChargeBattery_C::BPGetCustomInventoryWidgetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText");

	UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
// ()
// Parameters:
// float                          amountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChargeBattery_C::AddDurabilitySafe(float amountToAdd, float* AmountAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe");

	UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params params;
	params.amountToAdd = amountToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmountAdded != nullptr)
		*AmountAdded = params.AmountAdded;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChargeBattery_C::BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem");

	UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.ExecuteUbergraph_PrimalItem_ChargeBattery
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_ChargeBattery_C::ExecuteUbergraph_PrimalItem_ChargeBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.ExecuteUbergraph_PrimalItem_ChargeBattery");

	UPrimalItem_ChargeBattery_C_ExecuteUbergraph_PrimalItem_ChargeBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
