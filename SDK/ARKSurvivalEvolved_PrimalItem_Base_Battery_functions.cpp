// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Base_Battery_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory
// ()
// Parameters:
// class UPrimalInventoryComponent** toInventory                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_Base_Battery_C::BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent** toInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory");

	UPrimalItem_Base_Battery_C_BPForceAllowRemoteAddToInventory_Params params;
	params.toInventory = toInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.ExecuteUbergraph_PrimalItem_Base_Battery
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Base_Battery_C::ExecuteUbergraph_PrimalItem_Base_Battery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.ExecuteUbergraph_PrimalItem_Base_Battery");

	UPrimalItem_Base_Battery_C_ExecuteUbergraph_PrimalItem_Base_Battery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
