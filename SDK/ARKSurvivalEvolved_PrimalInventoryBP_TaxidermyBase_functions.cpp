// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TaxidermyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPInitializeInventory
// ()

void UPrimalInventoryBP_TaxidermyBase_C::BPInitializeInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPInitializeInventory");

	UPrimalInventoryBP_TaxidermyBase_C_BPInitializeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPrimalEquipmentType>* equipmentType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TaxidermyBase_C::BPPreventEquipItemType(TEnumAsByte<EPrimalEquipmentType>* equipmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType");

	UPrimalInventoryBP_TaxidermyBase_C_BPPreventEquipItemType_Params params;
	params.equipmentType = equipmentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TaxidermyBase_C::ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase");

	UPrimalInventoryBP_TaxidermyBase_C_ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
