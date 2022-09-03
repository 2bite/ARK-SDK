// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Saddlebags_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Saddlebags_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickServer");

	ABuff_TekStrider_Saddlebags_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetHUDElements
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_Saddlebags_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetHUDElements");

	ABuff_TekStrider_Saddlebags_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ReceiveBeginPlay
// ()

void ABuff_TekStrider_Saddlebags_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ReceiveBeginPlay");

	ABuff_TekStrider_Saddlebags_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Saddlebags_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BuffTickClient");

	ABuff_TekStrider_Saddlebags_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_Saddlebags_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPTryMultiUse");

	ABuff_TekStrider_Saddlebags_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetMultiUseEntries
// (Native, Event, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_TekStrider_Saddlebags_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPGetMultiUseEntries");

	ABuff_TekStrider_Saddlebags_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Saddlebags_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPDeactivated");

	ABuff_TekStrider_Saddlebags_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Update Nearby Players To Absorb Collected Resources
// ()

void ABuff_TekStrider_Saddlebags_C::Update_Nearby_Players_To_Absorb_Collected_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Update Nearby Players To Absorb Collected Resources");

	ABuff_TekStrider_Saddlebags_C_Update_Nearby_Players_To_Absorb_Collected_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Deactivate Attachment
// ()

void ABuff_TekStrider_Saddlebags_C::Deactivate_Attachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Deactivate Attachment");

	ABuff_TekStrider_Saddlebags_C_Deactivate_Attachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Buff Tick Server Logic
// ()

void ABuff_TekStrider_Saddlebags_C::Buff_Tick_Server_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Buff Tick Server Logic");

	ABuff_TekStrider_Saddlebags_C_Buff_Tick_Server_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPSetupForInstigator
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, NetServer, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Saddlebags_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.BPSetupForInstigator");

	ABuff_TekStrider_Saddlebags_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.UserConstructionScript
// ()

void ABuff_TekStrider_Saddlebags_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.UserConstructionScript");

	ABuff_TekStrider_Saddlebags_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Activate
// ()

void ABuff_TekStrider_Saddlebags_C::Multicast_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Activate");

	ABuff_TekStrider_Saddlebags_C_Multicast_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Deactivate
// ()

void ABuff_TekStrider_Saddlebags_C::Multicast_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.Multicast_Deactivate");

	ABuff_TekStrider_Saddlebags_C_Multicast_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ExecuteUbergraph_Buff_TekStrider_Saddlebags
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_Saddlebags_C::ExecuteUbergraph_Buff_TekStrider_Saddlebags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_Saddlebags.Buff_TekStrider_Saddlebags_C.ExecuteUbergraph_Buff_TekStrider_Saddlebags");

	ABuff_TekStrider_Saddlebags_C_ExecuteUbergraph_Buff_TekStrider_Saddlebags_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
