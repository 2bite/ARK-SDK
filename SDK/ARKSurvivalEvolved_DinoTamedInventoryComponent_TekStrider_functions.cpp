// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_TekStrider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.BPPreventEquipItem
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_TekStrider_C::BPPreventEquipItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.BPPreventEquipItem");

	UDinoTamedInventoryComponent_TekStrider_C_BPPreventEquipItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_TekStrider_C::ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C.ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider");

	UDinoTamedInventoryComponent_TekStrider_C_ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
