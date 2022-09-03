// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Iguanodon_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemAdded");

	UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemRemoved
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Iguanodon_C::BPNotifyItemRemoved(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.BPNotifyItemRemoved");

	UDinoTamedInventoryComponent_Iguanodon_C_BPNotifyItemRemoved_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Iguanodon_C::ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Iguanodon.DinoTamedInventoryComponent_Iguanodon_C.ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon");

	UDinoTamedInventoryComponent_Iguanodon_C_ExecuteUbergraph_DinoTamedInventoryComponent_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
