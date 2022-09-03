// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Pipe_Flex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::ResetRefreshConnectionsCooldown(class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown");

	ABase_Pipe_Flex_C_ResetRefreshConnectionsCooldown_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections");

	ABase_Pipe_Flex_C_IsAllowedToRefreshConnections_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries
// (NetRequest, Native, Event, Static, NetMulticast, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABase_Pipe_Flex_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries");

	ABase_Pipe_Flex_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_Pipe_Flex_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse");

	ABase_Pipe_Flex_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus
// ()

void ABase_Pipe_Flex_C::UpdateWaterStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus");

	ABase_Pipe_Flex_C_UpdateWaterStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes
// ()
// Parameters:
// TArray<class APrimalStructure*> ConnectedPipes                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABase_Pipe_Flex_C::LinkPipes(TArray<class APrimalStructure*>* ConnectedPipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes");

	ABase_Pipe_Flex_C_LinkPipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectedPipes != nullptr)
		*ConnectedPipes = params.ConnectedPipes;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABase_Pipe_Flex_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString");

	ABase_Pipe_Flex_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents
// (NetReliable, NetRequest, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           UsePreviewMaterial             (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::AddSplineMeshComponents(bool UsePreviewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents");

	ABase_Pipe_Flex_C_AddSplineMeshComponents_Params params;
	params.UsePreviewMaterial = UsePreviewMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABase_Pipe_Flex_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild");

	ABase_Pipe_Flex_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript
// ()

void ABase_Pipe_Flex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript");

	ABase_Pipe_Flex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent
// ()

void ABase_Pipe_Flex_C::UpdateSplineMeshesEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent");

	ABase_Pipe_Flex_C_UpdateSplineMeshesEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay
// ()

void ABase_Pipe_Flex_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay");

	ABase_Pipe_Flex_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed
// ()
// Parameters:
// class APrimalStructure**       DestroyedStructure             (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::BPOnLinkedStructureDestroyed(class APrimalStructure** DestroyedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed");

	ABase_Pipe_Flex_C_BPOnLinkedStructureDestroyed_Params params;
	params.DestroyedStructure = DestroyedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections
// ()

void ABase_Pipe_Flex_C::RefreshConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections");

	ABase_Pipe_Flex_C_RefreshConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange
// ()
// Parameters:
// bool*                          bPipeHasWaterOrPower           (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::BPOnWaterStateChange(bool* bPipeHasWaterOrPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange");

	ABase_Pipe_Flex_C_BPOnWaterStateChange_Params params;
	params.bPipeHasWaterOrPower = bPipeHasWaterOrPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Pipe_Flex_C::ExecuteUbergraph_Base_Pipe_Flex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex");

	ABase_Pipe_Flex_C_ExecuteUbergraph_Base_Pipe_Flex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
