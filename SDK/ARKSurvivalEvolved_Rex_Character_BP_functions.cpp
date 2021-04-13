// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rex_Character_BP.Rex_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ARex_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPNotifySetRider");

	ARex_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ARex_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");

	ARex_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ARex_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPGetMultiUseEntries");

	ARex_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPTryMultiUse
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, NetServer, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARex_Character_BP_C::STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPTryMultiUse");

	ARex_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ARex_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPDoAttack");

	ARex_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.AllowRoarStun
// ()
// Parameters:
// class APrimalCharacter*        primalChar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARex_Character_BP_C::AllowRoarStun(class APrimalCharacter* primalChar, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.AllowRoarStun");

	ARex_Character_BP_C_AllowRoarStun_Params params;
	params.primalChar = primalChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Rex_Character_BP.Rex_Character_BP_C.Roar
// (NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, BlueprintEvent, BlueprintPure, Const, NetValidate)

void ARex_Character_BP_C::STATIC_Roar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.Roar");

	ARex_Character_BP_C_Roar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ARex_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPNotifyClearRider");

	ARex_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARex_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPModifyFOV");

	ARex_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARex_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPHandleOnStopTargeting");

	ARex_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARex_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.BPHandleControllerInitiatedAttack");

	ARex_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_Character_BP.Rex_Character_BP_C.UserConstructionScript
// ()

void ARex_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.UserConstructionScript");

	ARex_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_174
// ()

void ARex_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_174()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_174");

	ARex_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_174_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173
// ()

void ARex_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173");

	ARex_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.RoarCameraShake
// ()

void ARex_Character_BP_C::RoarCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.RoarCameraShake");

	ARex_Character_BP_C_RoarCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.DoRoarOverlapsAfterDelay
// ()

void ARex_Character_BP_C::DoRoarOverlapsAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.DoRoarOverlapsAfterDelay");

	ARex_Character_BP_C_DoRoarOverlapsAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_Character_BP.Rex_Character_BP_C.ExecuteUbergraph_Rex_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARex_Character_BP_C::ExecuteUbergraph_Rex_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_Character_BP.Rex_Character_BP_C.ExecuteUbergraph_Rex_Character_BP");

	ARex_Character_BP_C_ExecuteUbergraph_Rex_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
