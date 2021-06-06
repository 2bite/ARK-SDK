// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementShard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
// (NetReliable, Event, NetMulticast, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementShard_C::RefillElementShard(class UPrimalItem* DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard");

	UPrimalItemResource_ElementShard_C_RefillElementShard_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SupportsDragOnto               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementShard_C::CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData");

	UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SupportsDragOnto != nullptr)
		*SupportsDragOnto = params.SupportsDragOnto;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(class UPrimalItem** DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem");

	UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementShard_C::BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem");

	UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.ExecuteUbergraph_PrimalItemResource_ElementShard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementShard_C::ExecuteUbergraph_PrimalItemResource_ElementShard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.ExecuteUbergraph_PrimalItemResource_ElementShard");

	UPrimalItemResource_ElementShard_C_ExecuteUbergraph_PrimalItemResource_ElementShard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
