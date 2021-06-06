// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed
// ()

void AStructure_TaxidermyBase_C::OnContainerRenamed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed");

	AStructure_TaxidermyBase_C_OnContainerRenamed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component
// ()

void AStructure_TaxidermyBase_C::Construct_Name_Renderer_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component");

	AStructure_TaxidermyBase_C_Construct_Name_Renderer_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes
// ()

void AStructure_TaxidermyBase_C::RemoveHairMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes");

	AStructure_TaxidermyBase_C_RemoveHairMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex
// ()

void AStructure_TaxidermyBase_C::OnRep_SnapshotPoseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex");

	AStructure_TaxidermyBase_C_OnRep_SnapshotPoseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::CreateDefaultSnapshot(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot");

	AStructure_TaxidermyBase_C_CreateDefaultSnapshot_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse");

	AStructure_TaxidermyBase_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor
// ()

void AStructure_TaxidermyBase_C::SetTextRendererColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor");

	AStructure_TaxidermyBase_C_SetTextRendererColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use_Default_Snapshot_Mat       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Capture_Character              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Non_Capture_Gender_Is_Male     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           KeepPreviousSnapshot           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::STATIC_CreateSnapshot(class APlayerController* PC, bool Use_Default_Snapshot_Mat, bool Capture_Character, bool Non_Capture_Gender_Is_Male, bool KeepPreviousSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot");

	AStructure_TaxidermyBase_C_CreateSnapshot_Params params;
	params.PC = PC;
	params.Use_Default_Snapshot_Mat = Use_Default_Snapshot_Mat;
	params.Capture_Character = Capture_Character;
	params.Non_Capture_Gender_Is_Male = Non_Capture_Gender_Is_Male;
	params.KeepPreviousSnapshot = KeepPreviousSnapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure");

	AStructure_TaxidermyBase_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot
// ()

void AStructure_TaxidermyBase_C::ApplyEquippedSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot");

	AStructure_TaxidermyBase_C_ApplyEquippedSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TaxidermyBase_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse");

	AStructure_TaxidermyBase_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries
// (NetReliable, Exec, Event, NetResponse, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_TaxidermyBase_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries");

	AStructure_TaxidermyBase_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot
// ()

void AStructure_TaxidermyBase_C::RemoveSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot");

	AStructure_TaxidermyBase_C_RemoveSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot
// (Native, Static, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalItem*             Snapshot                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::STATIC_ApplySnapshot(class UPrimalItem* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot");

	AStructure_TaxidermyBase_C_ApplySnapshot_Params params;
	params.Snapshot = Snapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange
// (NetRequest, NetResponse, Static, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::STATIC_BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange");

	AStructure_TaxidermyBase_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript
// ()

void AStructure_TaxidermyBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript");

	AStructure_TaxidermyBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay
// ()

void AStructure_TaxidermyBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay");

	AStructure_TaxidermyBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText
// ()

void AStructure_TaxidermyBase_C::SetRendererText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText");

	AStructure_TaxidermyBase_C_SetRendererText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseDefaultSnapshotMaterial     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CaptureCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NonCaptureGenderIsMale         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           KeepPreviousSnapshot           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::Multi_CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMaterial, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot");

	AStructure_TaxidermyBase_C_Multi_CreateSnapshot_Params params;
	params.PC = PC;
	params.UseDefaultSnapshotMaterial = UseDefaultSnapshotMaterial;
	params.CaptureCharacter = CaptureCharacter;
	params.NonCaptureGenderIsMale = NonCaptureGenderIsMale;
	params.KeepPreviousSnapshot = KeepPreviousSnapshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::ExecuteUbergraph_Structure_TaxidermyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase");

	AStructure_TaxidermyBase_C_ExecuteUbergraph_Structure_TaxidermyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
