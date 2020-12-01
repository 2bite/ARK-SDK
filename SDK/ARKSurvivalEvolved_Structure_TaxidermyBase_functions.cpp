// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_PoseIdx
// ()

void AStructure_TaxidermyBase_C::OnRep_PoseIdx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_PoseIdx");

	AStructure_TaxidermyBase_C_OnRep_PoseIdx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RefreshSnapshot
// ()

void AStructure_TaxidermyBase_C::RefreshSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RefreshSnapshot");

	AStructure_TaxidermyBase_C_RefreshSnapshot_Params params;

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
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_TaxidermyBase_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries");

	AStructure_TaxidermyBase_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

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
// (NetRequest, Exec, MulticastDelegate, Public, Private, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimalItem*             Snapshot                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::ApplySnapshot(class UPrimalItem* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot");

	AStructure_TaxidermyBase_C_ApplySnapshot_Params params;
	params.Snapshot = Snapshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TaxidermyBase_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
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


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientApplySnapshot
// ()

void AStructure_TaxidermyBase_C::ClientApplySnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientApplySnapshot");

	AStructure_TaxidermyBase_C_ClientApplySnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientRemoveSnapshot
// ()

void AStructure_TaxidermyBase_C::ClientRemoveSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ClientRemoveSnapshot");

	AStructure_TaxidermyBase_C_ClientRemoveSnapshot_Params params;

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
