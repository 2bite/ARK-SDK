// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tent_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tent_BP.Tent_BP_C.UseFullPickup
// ()
// Parameters:
// class APrimalStructure*        StructToPickUp                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseFull                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATent_BP_C::UseFullPickup(class APrimalStructure* StructToPickUp, bool* UseFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.UseFullPickup");

	ATent_BP_C_UseFullPickup_Params params;
	params.StructToPickUp = StructToPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseFull != nullptr)
		*UseFull = params.UseFull;
}


// Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATent_BP_C::BPAllowPickupGiveItem(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPAllowPickupGiveItem");

	ATent_BP_C_BPAllowPickupGiveItem_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure
// ()
// Parameters:
// struct FPlacementData          theOutPlacementData            (Parm, OutParm, ReferenceParm)
// class APrimalStructure**       StructureToPlaceOnMe           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATent_BP_C::BPPreventUsingAsFloorForStructure(class APrimalStructure** StructureToPlaceOnMe, struct FPlacementData* theOutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPPreventUsingAsFloorForStructure");

	ATent_BP_C_BPPreventUsingAsFloorForStructure_Params params;
	params.StructureToPlaceOnMe = StructureToPlaceOnMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theOutPlacementData != nullptr)
		*theOutPlacementData = params.theOutPlacementData;

	return params.ReturnValue;
}


// Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory
// ()
// Parameters:
// class UPrimalInventoryComponent* ToInv                          (Parm, ZeroConstructor, IsPlainOldData)

void ATent_BP_C::GiveChildStructuresToInventory(class UPrimalInventoryComponent* ToInv)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.GiveChildStructuresToInventory");

	ATent_BP_C_GiveChildStructuresToInventory_Params params;
	params.ToInv = ToInv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.GiveFloorStructures
// ()

void ATent_BP_C::GiveFloorStructures()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.GiveFloorStructures");

	ATent_BP_C_GiveFloorStructures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ReceiveEndPlay");

	ATent_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.UserConstructionScript
// ()

void ATent_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.UserConstructionScript");

	ATent_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.ReceiveBeginPlay
// ()

void ATent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ReceiveBeginPlay");

	ATent_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.PeriodicDamage
// ()

void ATent_BP_C::PeriodicDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.PeriodicDamage");

	ATent_BP_C_PeriodicDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup
// ()
// Parameters:
// class UPrimalItem**            pickedup                       (Parm, ZeroConstructor, IsPlainOldData)

void ATent_BP_C::BPApplyCustomDurabilityOnPickup(class UPrimalItem** pickedup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.BPApplyCustomDurabilityOnPickup");

	ATent_BP_C_BPApplyCustomDurabilityOnPickup_Params params;
	params.pickedup = pickedup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATent_BP_C::ExecuteUbergraph_Tent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tent_BP.Tent_BP_C.ExecuteUbergraph_Tent_BP");

	ATent_BP_C_ExecuteUbergraph_Tent_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
