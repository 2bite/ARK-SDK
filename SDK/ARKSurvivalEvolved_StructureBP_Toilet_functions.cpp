// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Toilet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_Toilet.StructureBP_Toilet_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureBP_Toilet_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPTryMultiUse");

	AStructureBP_Toilet_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Static, Protected, Delegate, HasDefaults, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructureBP_Toilet_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPGetMultiUseEntries");

	AStructureBP_Toilet_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPHandleSitterPoop
// ()
// Parameters:
// class AShooterCharacter**      ForSitter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureBP_Toilet_C::BPHandleSitterPoop(class AShooterCharacter** ForSitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPHandleSitterPoop");

	AStructureBP_Toilet_C_BPHandleSitterPoop_Params params;
	params.ForSitter = ForSitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPUnstasis
// ()

void AStructureBP_Toilet_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPUnstasis");

	AStructureBP_Toilet_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.ReceiveBeginPlay
// ()

void AStructureBP_Toilet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.ReceiveBeginPlay");

	AStructureBP_Toilet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.OnRep_bHasPoop
// ()

void AStructureBP_Toilet_C::OnRep_bHasPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.OnRep_bHasPoop");

	AStructureBP_Toilet_C_OnRep_bHasPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_Toilet_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPNotifyInventoryItemChange");

	AStructureBP_Toilet_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerActivated
// ()

void AStructureBP_Toilet_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerActivated");

	AStructureBP_Toilet_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerDeactivated
// ()

void AStructureBP_Toilet_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.BPContainerDeactivated");

	AStructureBP_Toilet_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.UserConstructionScript
// ()

void AStructureBP_Toilet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.UserConstructionScript");

	AStructureBP_Toilet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.NetFlushedToilet
// ()

void AStructureBP_Toilet_C::NetFlushedToilet()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.NetFlushedToilet");

	AStructureBP_Toilet_C_NetFlushedToilet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Toilet.StructureBP_Toilet_C.ExecuteUbergraph_StructureBP_Toilet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_Toilet_C::ExecuteUbergraph_StructureBP_Toilet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Toilet.StructureBP_Toilet_C.ExecuteUbergraph_StructureBP_Toilet");

	AStructureBP_Toilet_C_ExecuteUbergraph_StructureBP_Toilet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
