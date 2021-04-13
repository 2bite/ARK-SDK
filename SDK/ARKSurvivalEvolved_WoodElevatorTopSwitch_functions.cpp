// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorTopSwitch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::AllowedToChangePublicUse(class APlayerController* PC, bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.AllowedToChangePublicUse");

	AWoodElevatorTopSwitch_C_AllowedToChangePublicUse_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry
// (NetReliable, Native, NetResponse, Static, NetMulticast, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalStructureElevatorState> Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMultiUseEntry          Entry                          (Parm, OutParm)

void AWoodElevatorTopSwitch_C::STATIC_Make_Multi_Use_Entry(TEnumAsByte<EPrimalStructureElevatorState> Direction, int Priority, struct FMultiUseEntry* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Make Multi Use Entry");

	AWoodElevatorTopSwitch_C_Make_Multi_Use_Entry_Params params;
	params.Direction = Direction;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Entry != nullptr)
		*Entry = params.Entry;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform
// ()
// Parameters:
// class AWoodElevatorPlatform_Base_C* Elevator                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::Get_Elevator_Platform(class AWoodElevatorPlatform_Base_C** Elevator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Get Elevator Platform");

	AWoodElevatorTopSwitch_C_Get_Elevator_Platform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Elevator != nullptr)
		*Elevator = params.Elevator;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator
// ()
// Parameters:
// class APrimalStructureElevatorPlatform* Elevator                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalStructureElevatorState> Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::Move_Elevator(class APrimalStructureElevatorPlatform* Elevator, class APlayerController* PC, TEnumAsByte<EPrimalStructureElevatorState> Direction, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.Move Elevator");

	AWoodElevatorTopSwitch_C_Move_Elevator_Params params;
	params.Elevator = Elevator;
	params.PC = PC;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWoodElevatorTopSwitch_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPTryMultiUse");

	AWoodElevatorTopSwitch_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Event, Private, NetServer, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AWoodElevatorTopSwitch_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.BPGetMultiUseEntries");

	AWoodElevatorTopSwitch_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript
// ()

void AWoodElevatorTopSwitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.UserConstructionScript");

	AWoodElevatorTopSwitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay
// ()

void AWoodElevatorTopSwitch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ReceiveBeginPlay");

	AWoodElevatorTopSwitch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove
// ()
// Parameters:
// TEnumAsByte<EPrimalStructureElevatorState> Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::OnElevatorStartMove(TEnumAsByte<EPrimalStructureElevatorState> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStartMove");

	AWoodElevatorTopSwitch_C_OnElevatorStartMove_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop
// ()
// Parameters:
// bool                           SwitchedDirection              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalStructureElevatorState> NewDirection                   (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::OnElevatorStop(bool SwitchedDirection, TEnumAsByte<EPrimalStructureElevatorState> NewDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.OnElevatorStop");

	AWoodElevatorTopSwitch_C_OnElevatorStop_Params params;
	params.SwitchedDirection = SwitchedDirection;
	params.NewDirection = NewDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTopSwitch_C::ExecuteUbergraph_WoodElevatorTopSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTopSwitch.WoodElevatorTopSwitch_C.ExecuteUbergraph_WoodElevatorTopSwitch");

	AWoodElevatorTopSwitch_C_ExecuteUbergraph_WoodElevatorTopSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
