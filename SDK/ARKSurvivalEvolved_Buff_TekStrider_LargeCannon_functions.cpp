// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_LargeCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting
// ()

void ABuff_TekStrider_LargeCannon_C::prevent_ai_doubleshooting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.prevent ai doubleshooting");

	ABuff_TekStrider_LargeCannon_C_prevent_ai_doubleshooting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked
// (Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           from_animbp                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_LargeCannon_C::is_cannon_blocked(bool from_animbp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.is cannon blocked");

	ABuff_TekStrider_LargeCannon_C_is_cannon_blocked_Params params;
	params.from_animbp = from_animbp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ABuff_TekStrider_LargeCannon_C::STATIC_Delay_Check_for_Valid_Shot_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Check for Valid Shot Loc");

	ABuff_TekStrider_LargeCannon_C_Delay_Check_for_Valid_Shot_Loc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           use_passed_in_loc              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::STATIC_get_start_and_end_location(bool use_passed_in_loc, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.get start and end location");

	ABuff_TekStrider_LargeCannon_C_get_start_and_end_location_Params params;
	params.use_passed_in_loc = use_passed_in_loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_LargeCannon_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPServerHandleNetExecCommand");

	ABuff_TekStrider_LargeCannon_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements
// (NetRequest, Event, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_LargeCannon_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPGetHUDElements");

	ABuff_TekStrider_LargeCannon_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle
// ()
// Parameters:
// class APrimalDinoCharacter*    NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::target_is_within_angle(class APrimalDinoCharacter* NewParam, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.target is within angle");

	ABuff_TekStrider_LargeCannon_C_target_is_within_angle_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Is Ai Controlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::Is_Ai_Controlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Is Ai Controlled");

	ABuff_TekStrider_LargeCannon_C_Is_Ai_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire
// ()

void ABuff_TekStrider_LargeCannon_C::Delay_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Fire");

	ABuff_TekStrider_LargeCannon_C_Delay_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location
// ()
// Parameters:
// bool                           use_validated_loc              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start_Loc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 end_loc                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::Get_Fire_Start_And_End_Location(bool use_validated_loc, struct FVector* Start_Loc, struct FVector* end_loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Get Fire Start And End Location");

	ABuff_TekStrider_LargeCannon_C_Get_Fire_Start_And_End_Location_Params params;
	params.use_validated_loc = use_validated_loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start_Loc != nullptr)
		*Start_Loc = params.Start_Loc;
	if (end_loc != nullptr)
		*end_loc = params.end_loc;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.can fire
// ()
// Parameters:
// bool                           from_animbp                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::can_fire(bool from_animbp, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.can fire");

	ABuff_TekStrider_LargeCannon_C_can_fire_Params params;
	params.from_animbp = from_animbp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge
// ()

void ABuff_TekStrider_LargeCannon_C::Delay_Deactivate_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Delay Deactivate Charge");

	ABuff_TekStrider_LargeCannon_C_Delay_Deactivate_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger
// ()

void ABuff_TekStrider_LargeCannon_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Trigger");

	ABuff_TekStrider_LargeCannon_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic
// ()
// Parameters:
// bool                           from_animbp                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::Can_Fire__logic(bool from_animbp, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Can Fire? logic");

	ABuff_TekStrider_LargeCannon_C_Can_Fire__logic_Params params;
	params.from_animbp = from_animbp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile
// ()

void ABuff_TekStrider_LargeCannon_C::FireCannonProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.FireCannonProjectile");

	ABuff_TekStrider_LargeCannon_C_FireCannonProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.BPSetupForInstigator");

	ABuff_TekStrider_LargeCannon_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript
// ()

void ABuff_TekStrider_LargeCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.UserConstructionScript");

	ABuff_TekStrider_LargeCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events
// ()

void ABuff_TekStrider_LargeCannon_C::multicast_fire_events()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast fire events");

	ABuff_TekStrider_LargeCannon_C_multicast_fire_events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire
// ()

void ABuff_TekStrider_LargeCannon_C::multicast_prepare_to_fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.multicast prepare to fire");

	ABuff_TekStrider_LargeCannon_C_multicast_prepare_to_fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::trace_line(const struct FVector& NewParam, const struct FVector& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.trace line");

	ABuff_TekStrider_LargeCannon_C_trace_line_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc
// ()

void ABuff_TekStrider_LargeCannon_C::Request_Player_Shot_Loc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.Request Player Shot Loc");

	ABuff_TekStrider_LargeCannon_C_Request_Player_Shot_Loc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_LargeCannon_C::ExecuteUbergraph_Buff_TekStrider_LargeCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_LargeCannon.Buff_TekStrider_LargeCannon_C.ExecuteUbergraph_Buff_TekStrider_LargeCannon");

	ABuff_TekStrider_LargeCannon_C_ExecuteUbergraph_Buff_TekStrider_LargeCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
