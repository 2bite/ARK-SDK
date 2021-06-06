#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStriderSaddle_Resource_Attract_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.create material on mining drill
struct ABuff_TekStriderSaddle_Resource_Attract_C_create_material_on_mining_drill_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ReceiveBeginPlay
struct ABuff_TekStriderSaddle_Resource_Attract_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Start Gather VFX
struct ABuff_TekStriderSaddle_Resource_Attract_C_Start_Gather_VFX_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.Has Stopped Gathering Resources
struct ABuff_TekStriderSaddle_Resource_Attract_C_Has_Stopped_Gathering_Resources_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickClient
struct ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.BuffTickServer
struct ABuff_TekStriderSaddle_Resource_Attract_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.UserConstructionScript
struct ABuff_TekStriderSaddle_Resource_Attract_C_UserConstructionScript_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.InventoryItemAdded__DelegateSignature_Event
struct ABuff_TekStriderSaddle_Resource_Attract_C_InventoryItemAdded__DelegateSignature_Event_Params
{
	class UPrimalInventoryComponent*                   inventory;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmountAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.bind item added
struct ABuff_TekStriderSaddle_Resource_Attract_C_bind_item_added_Params
{
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref
struct ABuff_TekStriderSaddle_Resource_Attract_C_set_strider_ref_Params
{
	class AActor*                                      strider_ref;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.set strider ref on clients
struct ABuff_TekStriderSaddle_Resource_Attract_C_set_strider_ref_on_clients_Params
{
	class AActor*                                      strider;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStriderSaddle_Resource_Attract.Buff_TekStriderSaddle_Resource_Attract_C.ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract
struct ABuff_TekStriderSaddle_Resource_Attract_C_ExecuteUbergraph_Buff_TekStriderSaddle_Resource_Attract_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
