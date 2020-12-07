// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Tek_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Tek_Base.Door_Tek_Base_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_Base_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.BPClientDoMultiUse");

	ADoor_Tek_Base_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADoor_Tek_Base_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.BPTryMultiUse");

	ADoor_Tek_Base_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Door_Tek_Base.Door_Tek_Base_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADoor_Tek_Base_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.BPGetMultiUseEntries");

	ADoor_Tek_Base_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Door_Tek_Base.Door_Tek_Base_C.IsValidSnapPointFrom
// ()
// Parameters:
// class APrimalStructure**       ParentStructure                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MySnapPointFromIndex           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADoor_Tek_Base_C::IsValidSnapPointFrom(class APrimalStructure** ParentStructure, int* MySnapPointFromIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.IsValidSnapPointFrom");

	ADoor_Tek_Base_C_IsValidSnapPointFrom_Params params;
	params.ParentStructure = ParentStructure;
	params.MySnapPointFromIndex = MySnapPointFromIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Door_Tek_Base.Door_Tek_Base_C.IsValidDoorOpener
// ()
// Parameters:
// class APrimalCharacter*        DoorOpener                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_Base_C::IsValidDoorOpener(class APrimalCharacter* DoorOpener, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.IsValidDoorOpener");

	ADoor_Tek_Base_C_IsValidDoorOpener_Params params;
	params.DoorOpener = DoorOpener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Door_Tek_Base.Door_Tek_Base_C.DoAutoCloseCheck
// ()

void ADoor_Tek_Base_C::DoAutoCloseCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.DoAutoCloseCheck");

	ADoor_Tek_Base_C_DoAutoCloseCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.BPPostSetStructureCollisionChannels
// ()

void ADoor_Tek_Base_C::BPPostSetStructureCollisionChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.BPPostSetStructureCollisionChannels");

	ADoor_Tek_Base_C_BPPostSetStructureCollisionChannels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.BPGotoDoorState
// ()
// Parameters:
// int*                           NewDoorState                   (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_Base_C::BPGotoDoorState(int* NewDoorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.BPGotoDoorState");

	ADoor_Tek_Base_C_BPGotoDoorState_Params params;
	params.NewDoorState = NewDoorState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.UserConstructionScript
// ()

void ADoor_Tek_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.UserConstructionScript");

	ADoor_Tek_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.StartDoorInterp
// ()
// Parameters:
// float                          InterpDest                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_Base_C::StartDoorInterp(float InterpDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.StartDoorInterp");

	ADoor_Tek_Base_C_StartDoorInterp_Params params;
	params.InterpDest = InterpDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.UpdateDoorInterp
// ()

void ADoor_Tek_Base_C::UpdateDoorInterp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.UpdateDoorInterp");

	ADoor_Tek_Base_C_UpdateDoorInterp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.CheckForDoorOpeners
// ()

void ADoor_Tek_Base_C::CheckForDoorOpeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.CheckForDoorOpeners");

	ADoor_Tek_Base_C_CheckForDoorOpeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.OnComponentBeginOverlap_Event
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ADoor_Tek_Base_C::OnComponentBeginOverlap_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.OnComponentBeginOverlap_Event");

	ADoor_Tek_Base_C_OnComponentBeginOverlap_Event_Params params;
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


// Function Door_Tek_Base.Door_Tek_Base_C.ReceiveBeginPlay
// ()

void ADoor_Tek_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.ReceiveBeginPlay");

	ADoor_Tek_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Tek_Base.Door_Tek_Base_C.ExecuteUbergraph_Door_Tek_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Tek_Base_C::ExecuteUbergraph_Door_Tek_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Tek_Base.Door_Tek_Base_C.ExecuteUbergraph_Door_Tek_Base");

	ADoor_Tek_Base_C_ExecuteUbergraph_Door_Tek_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
