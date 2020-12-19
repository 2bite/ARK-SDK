// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_TekDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_TekDoor.Base_TekDoor_C.ReceiveBeginPlay
// ()

void ABase_TekDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.ReceiveBeginPlay");

	ABase_TekDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.GetCloseTraceLocation
// ()
// Parameters:
// struct FVector                 TraceLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::GetCloseTraceLocation(struct FVector* TraceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.GetCloseTraceLocation");

	ABase_TekDoor_C_GetCloseTraceLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceLocation != nullptr)
		*TraceLocation = params.TraceLocation;
}


// Function Base_TekDoor.Base_TekDoor_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.BPClientDoMultiUse");

	ABase_TekDoor_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_TekDoor_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.BPTryMultiUse");

	ABase_TekDoor_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Base_TekDoor.Base_TekDoor_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, NetMulticast, Private, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABase_TekDoor_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.BPGetMultiUseEntries");

	ABase_TekDoor_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Base_TekDoor.Base_TekDoor_C.IsValidDoorOpener
// ()
// Parameters:
// class APrimalCharacter*        DoorOpener                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::IsValidDoorOpener(class APrimalCharacter* DoorOpener, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.IsValidDoorOpener");

	ABase_TekDoor_C_IsValidDoorOpener_Params params;
	params.DoorOpener = DoorOpener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Base_TekDoor.Base_TekDoor_C.DoAutoCloseCheck
// ()

void ABase_TekDoor_C::DoAutoCloseCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.DoAutoCloseCheck");

	ABase_TekDoor_C_DoAutoCloseCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.BPPostSetStructureCollisionChannels
// ()

void ABase_TekDoor_C::BPPostSetStructureCollisionChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.BPPostSetStructureCollisionChannels");

	ABase_TekDoor_C_BPPostSetStructureCollisionChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.BPGotoDoorState
// ()
// Parameters:
// int*                           NewDoorState                   (Parm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::BPGotoDoorState(int* NewDoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.BPGotoDoorState");

	ABase_TekDoor_C_BPGotoDoorState_Params params;
	params.NewDoorState = NewDoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.UserConstructionScript
// ()

void ABase_TekDoor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.UserConstructionScript");

	ABase_TekDoor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.StartDoorInterp
// ()
// Parameters:
// float                          InterpDest                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::StartDoorInterp(float InterpDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.StartDoorInterp");

	ABase_TekDoor_C_StartDoorInterp_Params params;
	params.InterpDest = InterpDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.UpdateDoorInterp
// ()

void ABase_TekDoor_C::UpdateDoorInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.UpdateDoorInterp");

	ABase_TekDoor_C_UpdateDoorInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.CheckForDoorOpeners
// ()

void ABase_TekDoor_C::CheckForDoorOpeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.CheckForDoorOpeners");

	ABase_TekDoor_C_CheckForDoorOpeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.OnComponentBeginOverlap_Event
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ABase_TekDoor_C::OnComponentBeginOverlap_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.OnComponentBeginOverlap_Event");

	ABase_TekDoor_C_OnComponentBeginOverlap_Event_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function Base_TekDoor.Base_TekDoor_C.SetCollisionEvent
// ()

void ABase_TekDoor_C::SetCollisionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.SetCollisionEvent");

	ABase_TekDoor_C_SetCollisionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_TekDoor.Base_TekDoor_C.ExecuteUbergraph_Base_TekDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_TekDoor_C::ExecuteUbergraph_Base_TekDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_TekDoor.Base_TekDoor_C.ExecuteUbergraph_Base_TekDoor");

	ABase_TekDoor_C_ExecuteUbergraph_Base_TekDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
