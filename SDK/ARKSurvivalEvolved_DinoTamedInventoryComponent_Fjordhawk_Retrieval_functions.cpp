// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Fjordhawk_Retrieval_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem
// ()
// Parameters:
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequestedQuantity              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOnlyAddAll                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C::BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem");

	UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_BPAllowAddInventoryItem_Params params;
	params.Item = Item;
	params.RequestedQuantity = RequestedQuantity;
	params.bOnlyAddAll = bOnlyAddAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C::ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval");

	UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
