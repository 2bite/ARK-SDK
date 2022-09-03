// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TaxidermyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItem
// (Exec, Native, NetResponse, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TaxidermyBase_C::BPPreventEquipItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItem");

	UPrimalInventoryBP_TaxidermyBase_C_BPPreventEquipItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType
// (NetRequest, Exec, Static, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalEquipmentType>* equipmentType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TaxidermyBase_C::STATIC_BPPreventEquipItemType(TEnumAsByte<EPrimalEquipmentType>* equipmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType");

	UPrimalInventoryBP_TaxidermyBase_C_BPPreventEquipItemType_Params params;
	params.equipmentType = equipmentType;

	auto flags = fn->FunctionFlags;

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
