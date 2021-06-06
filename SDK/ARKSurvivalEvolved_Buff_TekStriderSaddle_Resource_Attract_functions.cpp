// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderSaddle_Resource_Attract_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, NetServer, NetClient, NetValidate)

void ABuff_TekStriderSaddle_Resource_Attract_C::create_material_on_mining_drill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill");

	ABuff_TekStriderSaddle_Resource_Attract_C_create_material_on_mining_drill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay
// ()

void ABuff_TekStriderSaddle_Resource_Attract_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay");

	ABuff_TekStriderSaddle_Resource_Attract_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX
// ()

void ABuff_TekStriderSaddle_Resource_Attract_C::Start_Gather_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX");

	ABuff_TekStriderSaddle_Resource_Attract_C_Start_Gather_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources
// ()

void ABuff_TekStriderSaddle_Resource_Attract_C::Has_Stopped_Gathering_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources");

	ABuff_TekStriderSaddle_Resource_Attract_C_Has_Stopped_Gathering_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient");

	ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer");

	ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript
// ()

void ABuff_TekStriderSaddle_Resource_Attract_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript");

	ABuff_TekStriderSaddle_Resource_Attract_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event
// ()
// Parameters:
// class UPrimalInventoryComponent* inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmountAdded                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEquippedItem                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::InventoryItemAdded__DelegateSignature_Event(class UPrimalInventoryComponent* inventory, class UPrimalItem* Item, int AmountAdded, bool bEquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event");

	ABuff_TekStriderSaddle_Resource_Attract_C_InventoryItemAdded__DelegateSignature_Event_Params params;
	params.inventory = inventory;
	params.Item = Item;
	params.AmountAdded = AmountAdded;
	params.bEquippedItem = bEquippedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added
// ()

void ABuff_TekStriderSaddle_Resource_Attract_C::bind_item_added()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added");

	ABuff_TekStriderSaddle_Resource_Attract_C_bind_item_added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref
// ()
// Parameters:
// class AActor*                  strider_ref                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::set_strider_ref(class AActor* strider_ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref");

	ABuff_TekStriderSaddle_Resource_Attract_C_set_strider_ref_Params params;
	params.strider_ref = strider_ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients
// ()
// Parameters:
// class AActor*                  strider                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::set_strider_ref_on_clients(class AActor* strider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients");

	ABuff_TekStriderSaddle_Resource_Attract_C_set_strider_ref_on_clients_Params params;
	params.strider = strider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStriderSaddle_Resource_Attract_C::ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract");

	ABuff_TekStriderSaddle_Resource_Attract_C_ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
