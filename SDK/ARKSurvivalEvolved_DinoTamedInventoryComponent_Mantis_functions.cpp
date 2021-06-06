// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C.BPPreventEquipItem
// ()
// Parameters:
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoTamedInventoryComponent_Mantis_C::BPPreventEquipItem(class UPrimalItem** theItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C.BPPreventEquipItem");

	UDinoTamedInventoryComponent_Mantis_C_BPPreventEquipItem_Params params;
	params.theItem = theItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Mantis_C::ExecuteUbergraph_DinoTamedInventoryComponent_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C.ExecuteUbergraph_DinoTamedInventoryComponent_Mantis");

	UDinoTamedInventoryComponent_Mantis_C_ExecuteUbergraph_DinoTamedInventoryComponent_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
