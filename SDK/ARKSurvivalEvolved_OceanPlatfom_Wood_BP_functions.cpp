// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatfom_Wood_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Wood_BP_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnDemolish");

	AOceanPlatfom_Wood_BP_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ItemType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            NewlyPickedUpItem              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsQuickPickup                 (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Wood_BP_C::BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOnStructurePickup");

	AOceanPlatfom_Wood_BP_C_BPOnStructurePickup_Params params;
	params.PlayerController = PlayerController;
	params.ItemType = ItemType;
	params.NewlyPickedUpItem = NewlyPickedUpItem;
	params.bIsQuickPickup = bIsQuickPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Wood_BP_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPPlacedStructure");

	AOceanPlatfom_Wood_BP_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform
// ()
// Parameters:
// class APrimalStructure**       ParentStructure                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParentSnapFromIndex            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ParentSnapFromName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UnsnappedPlacementPos          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UnsnappedPlacementRot          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SnappedPlacementPos            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               SnappedPlacementRot            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SnapToIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SnapToName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            bForceInvalidateSnap           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOceanPlatfom_Wood_BP_C::BPOverrideSnappedFromTransform(class APrimalStructure** ParentStructure, int* ParentSnapFromIndex, struct FName* ParentSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedFromTransform");

	AOceanPlatfom_Wood_BP_C_BPOverrideSnappedFromTransform_Params params;
	params.ParentStructure = ParentStructure;
	params.ParentSnapFromIndex = ParentSnapFromIndex;
	params.ParentSnapFromName = ParentSnapFromName;
	params.UnsnappedPlacementPos = UnsnappedPlacementPos;
	params.UnsnappedPlacementRot = UnsnappedPlacementRot;
	params.SnappedPlacementPos = SnappedPlacementPos;
	params.SnappedPlacementRot = SnappedPlacementRot;
	params.SnapToIndex = SnapToIndex;
	params.SnapToName = SnapToName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (bForceInvalidateSnap != nullptr)
		*bForceInvalidateSnap = params.bForceInvalidateSnap;

	return params.ReturnValue;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform
// ()
// Parameters:
// class APrimalStructure**       childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ChildSnapFromIndex             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ChildSnapFromName              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UnsnappedPlacementPos          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UnsnappedPlacementRot          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SnappedPlacementPos            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               SnappedPlacementRot            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SnapToIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SnapToName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            bForceInvalidateSnap           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOceanPlatfom_Wood_BP_C::BPOverrideSnappedToTransform(class APrimalStructure** childStructure, int* ChildSnapFromIndex, struct FName* ChildSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.BPOverrideSnappedToTransform");

	AOceanPlatfom_Wood_BP_C_BPOverrideSnappedToTransform_Params params;
	params.childStructure = childStructure;
	params.ChildSnapFromIndex = ChildSnapFromIndex;
	params.ChildSnapFromName = ChildSnapFromName;
	params.UnsnappedPlacementPos = UnsnappedPlacementPos;
	params.UnsnappedPlacementRot = UnsnappedPlacementRot;
	params.SnappedPlacementPos = SnappedPlacementPos;
	params.SnappedPlacementRot = SnappedPlacementRot;
	params.SnapToIndex = SnapToIndex;
	params.SnapToName = SnapToName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (bForceInvalidateSnap != nullptr)
		*bForceInvalidateSnap = params.bForceInvalidateSnap;

	return params.ReturnValue;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript
// ()

void AOceanPlatfom_Wood_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.UserConstructionScript");

	AOceanPlatfom_Wood_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay
// ()

void AOceanPlatfom_Wood_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ReceiveBeginPlay");

	AOceanPlatfom_Wood_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Wood_BP_C::ExecuteUbergraph_OceanPlatfom_Wood_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C.ExecuteUbergraph_OceanPlatfom_Wood_BP");

	AOceanPlatfom_Wood_BP_C_ExecuteUbergraph_OceanPlatfom_Wood_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
