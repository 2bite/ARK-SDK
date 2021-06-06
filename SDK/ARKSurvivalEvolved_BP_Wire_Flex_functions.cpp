// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Wire_Flex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections");

	ABP_Wire_Flex_C_IsAllowedToRefreshConnections_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Wire_Flex_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse");

	ABP_Wire_Flex_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABP_Wire_Flex_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries");

	ABP_Wire_Flex_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires
// ()
// Parameters:
// TArray<class APrimalStructure*> Connections                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Wire_Flex_C::LinkWires(TArray<class APrimalStructure*>* Connections)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires");

	ABP_Wire_Flex_C_LinkWires_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Connections != nullptr)
		*Connections = params.Connections;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents
// (Native, Event, NetResponse, Static, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UsePreviewMaterial             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::STATIC_AddSplineMeshComponents(bool UsePreviewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents");

	ABP_Wire_Flex_C_AddSplineMeshComponents_Params params;
	params.UsePreviewMaterial = UsePreviewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABP_Wire_Flex_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString");

	ABP_Wire_Flex_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Wire_Flex_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild");

	ABP_Wire_Flex_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript
// ()

void ABP_Wire_Flex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript");

	ABP_Wire_Flex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent
// ()

void ABP_Wire_Flex_C::UpdateSplineMeshesEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent");

	ABP_Wire_Flex_C_UpdateSplineMeshesEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay
// ()

void ABP_Wire_Flex_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay");

	ABP_Wire_Flex_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed
// ()
// Parameters:
// class APrimalStructure**       DestroyedStructure             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::BPOnLinkedStructureDestroyed(class APrimalStructure** DestroyedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed");

	ABP_Wire_Flex_C_BPOnLinkedStructureDestroyed_Params params;
	params.DestroyedStructure = DestroyedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections
// ()

void ABP_Wire_Flex_C::RefreshConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections");

	ABP_Wire_Flex_C_RefreshConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials
// ()

void ABP_Wire_Flex_C::MultiUpdatePipeMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials");

	ABP_Wire_Flex_C_MultiUpdatePipeMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange
// ()
// Parameters:
// bool*                          bPipeHasWaterOrPower           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::BPOnWaterStateChange(bool* bPipeHasWaterOrPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange");

	ABP_Wire_Flex_C_BPOnWaterStateChange_Params params;
	params.bPipeHasWaterOrPower = bPipeHasWaterOrPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish");

	ABP_Wire_Flex_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wire_Flex_C::ExecuteUbergraph_BP_Wire_Flex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex");

	ABP_Wire_Flex_C_ExecuteUbergraph_BP_Wire_Flex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
