// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TaxidermyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, DLLImport, BlueprintPure)
// Parameters:
// TEnumAsByte<EPrimalEquipmentType>* equipmentType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TaxidermyBase_C::BPPreventEquipItemType(TEnumAsByte<EPrimalEquipmentType>* equipmentType)
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
