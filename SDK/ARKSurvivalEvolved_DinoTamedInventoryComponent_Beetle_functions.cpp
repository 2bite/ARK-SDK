// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Beetle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem
// (NetReliable, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            ItemToCraftIndex               (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beetle_C::STATIC_CraftItem(int ItemToCraftIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CraftItem");

	UDinoTamedInventoryComponent_Beetle_C_CraftItem_Params params;
	params.ItemToCraftIndex = ItemToCraftIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh
// ()

void UDinoTamedInventoryComponent_Beetle_C::BPInventoryRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInventoryRefresh");

	UDinoTamedInventoryComponent_Beetle_C_BPInventoryRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory
// ()

void UDinoTamedInventoryComponent_Beetle_C::BPInitializeInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPInitializeInventory");

	UDinoTamedInventoryComponent_Beetle_C_BPInitializeInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted
// ()

void UDinoTamedInventoryComponent_Beetle_C::CheckIfAnythingNewCanBeCrafted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.CheckIfAnythingNewCanBeCrafted");

	UDinoTamedInventoryComponent_Beetle_C_CheckIfAnythingNewCanBeCrafted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times
// ()

void UDinoTamedInventoryComponent_Beetle_C::Initial_Set_Crafting_Times()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.Initial Set Crafting Times");

	UDinoTamedInventoryComponent_Beetle_C_Initial_Set_Crafting_Times_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft
// ()

void UDinoTamedInventoryComponent_Beetle_C::TryToCraft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.TryToCraft");

	UDinoTamedInventoryComponent_Beetle_C_TryToCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll
// ()

void UDinoTamedInventoryComponent_Beetle_C::UnsetAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.UnsetAll");

	UDinoTamedInventoryComponent_Beetle_C_UnsetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            IndexClassToCheck              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hasEnough                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfTimesCanCraft          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beetle_C::STATIC_HasEnoughResources(int IndexClassToCheck, bool* hasEnough, int* NumberOfTimesCanCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.HasEnoughResources");

	UDinoTamedInventoryComponent_Beetle_C_HasEnoughResources_Params params;
	params.IndexClassToCheck = IndexClassToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasEnough != nullptr)
		*hasEnough = params.hasEnough;
	if (NumberOfTimesCanCraft != nullptr)
		*NumberOfTimesCanCraft = params.NumberOfTimesCanCraft;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable
// ()

void UDinoTamedInventoryComponent_Beetle_C::RemoveUncraftable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.RemoveUncraftable");

	UDinoTamedInventoryComponent_Beetle_C_RemoveUncraftable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beetle_C::BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemAdded");

	UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemAdded_Params params;
	params.anItem = anItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beetle_C::BPNotifyItemRemoved(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.BPNotifyItemRemoved");

	UDinoTamedInventoryComponent_Beetle_C_BPNotifyItemRemoved_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Beetle_C::ExecuteUbergraph_DinoTamedInventoryComponent_Beetle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C.ExecuteUbergraph_DinoTamedInventoryComponent_Beetle");

	UDinoTamedInventoryComponent_Beetle_C_ExecuteUbergraph_DinoTamedInventoryComponent_Beetle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
