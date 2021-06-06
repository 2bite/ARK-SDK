// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Pliers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPUsedOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AdditionalData                 (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Pliers_C::BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPUsedOntoItem");

	UPrimalItem_Pliers_C_BPUsedOntoItem_Params params;
	params.DestinationItem = DestinationItem;
	params.AdditionalData = AdditionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPSupportUseOntoItem
// ()
// Parameters:
// class UPrimalItem**            DestinationItem                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_Pliers_C::BPSupportUseOntoItem(class UPrimalItem** DestinationItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPSupportUseOntoItem");

	UPrimalItem_Pliers_C_BPSupportUseOntoItem_Params params;
	params.DestinationItem = DestinationItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Pliers.PrimalItem_Pliers_C.ExecuteUbergraph_PrimalItem_Pliers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Pliers_C::ExecuteUbergraph_PrimalItem_Pliers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Pliers.PrimalItem_Pliers_C.ExecuteUbergraph_PrimalItem_Pliers");

	UPrimalItem_Pliers_C_ExecuteUbergraph_PrimalItem_Pliers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
