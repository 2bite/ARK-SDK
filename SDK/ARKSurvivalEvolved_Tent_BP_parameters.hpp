#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tent_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tent_BP.Tent_BP_C.UseFullPickup
struct ATent_BP_C_UseFullPickup_Params
{
	class APrimalStructure*                            StructToPickUp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFull;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem
struct ATent_BP_C_BPAllowPickupGiveItem_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure
struct ATent_BP_C_BPPreventUsingAsFloorForStructure_Params
{
	struct FPlacementData                              theOutPlacementData;                                      // (Parm, OutParm, ReferenceParm)
	class APrimalStructure**                           StructureToPlaceOnMe;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory
struct ATent_BP_C_GiveChildStructuresToInventory_Params
{
	class UPrimalInventoryComponent*                   ToInv;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.GiveFloorStructures
struct ATent_BP_C_GiveFloorStructures_Params
{
};

// Function Tent_BP.Tent_BP_C.ReceiveEndPlay
struct ATent_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.UserConstructionScript
struct ATent_BP_C_UserConstructionScript_Params
{
};

// Function Tent_BP.Tent_BP_C.ReceiveBeginPlay
struct ATent_BP_C_ReceiveBeginPlay_Params
{
};

// Function Tent_BP.Tent_BP_C.PeriodicDamage
struct ATent_BP_C_PeriodicDamage_Params
{
};

// Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup
struct ATent_BP_C_BPApplyCustomDurabilityOnPickup_Params
{
	class UPrimalItem**                                PickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP
struct ATent_BP_C_ExecuteUbergraph_Tent_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
