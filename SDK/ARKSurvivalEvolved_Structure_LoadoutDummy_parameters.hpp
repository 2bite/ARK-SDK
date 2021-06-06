#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetHotbarCurrentHealth
struct AStructure_LoadoutDummy_C_SetHotbarCurrentHealth_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveDestroyed
struct AStructure_LoadoutDummy_C_ReceiveDestroyed_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPPlacedStructure
struct AStructure_LoadoutDummy_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPClientDoMultiUse
struct AStructure_LoadoutDummy_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPOnDemolish
struct AStructure_LoadoutDummy_C_BPOnDemolish_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SetTextRendererColor
struct AStructure_LoadoutDummy_C_SetTextRendererColor_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.OnRep_HotbarID
struct AStructure_LoadoutDummy_C_OnRep_HotbarID_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.CreateHotbarStructure
struct AStructure_LoadoutDummy_C_CreateHotbarStructure_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Everything
struct AStructure_LoadoutDummy_C_Fill_Dummy_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Everything
struct AStructure_LoadoutDummy_C_Fill_Character_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Inventory
struct AStructure_LoadoutDummy_C_Fill_Dummy_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Inventory
struct AStructure_LoadoutDummy_C_Fill_Character_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap Everything
struct AStructure_LoadoutDummy_C_Swap_Everything_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Inventory
struct AStructure_LoadoutDummy_C_Swap_All_Inventory_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Swap All Hotbar
struct AStructure_LoadoutDummy_C_Swap_All_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Hotbar
struct AStructure_LoadoutDummy_C_Fill_Dummy_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Hotbar
struct AStructure_LoadoutDummy_C_Fill_Character_Hotbar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Dummy Equipment
struct AStructure_LoadoutDummy_C_Fill_Dummy_Equipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.Fill Character Equipment
struct AStructure_LoadoutDummy_C_Fill_Character_Equipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.SwapAllEquipment
struct AStructure_LoadoutDummy_C_SwapAllEquipment_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPTryMultiUse
struct AStructure_LoadoutDummy_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.BPGetMultiUseEntries
struct AStructure_LoadoutDummy_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.UserConstructionScript
struct AStructure_LoadoutDummy_C_UserConstructionScript_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveEndPlay
struct AStructure_LoadoutDummy_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ReceiveBeginPlay
struct AStructure_LoadoutDummy_C_ReceiveBeginPlay_Params
{
};

// Function Structure_LoadoutDummy.Structure_LoadoutDummy_C.ExecuteUbergraph_Structure_LoadoutDummy
struct AStructure_LoadoutDummy_C_ExecuteUbergraph_Structure_LoadoutDummy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
