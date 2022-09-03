// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VH_Buggy.VH_Buggy_C.BPPlayDying
// (NetReliable, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.BPPlayDying");

	AVH_Buggy_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function VH_Buggy.VH_Buggy_C.UserConstructionScript
// ()

void AVH_Buggy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.UserConstructionScript");

	AVH_Buggy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_75
// ()

void AVH_Buggy_C::InpActEvt_Jump_K2Node_InputActionEvent_75()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_75");

	AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74
// ()

void AVH_Buggy_C::InpActEvt_Jump_K2Node_InputActionEvent_74()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74");

	AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_74_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32
// ()

void AVH_Buggy_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32");

	AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31
// ()

void AVH_Buggy_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31");

	AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30
// ()

void AVH_Buggy_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30");

	AVH_Buggy_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29
// ()

void AVH_Buggy_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29");

	AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28
// ()

void AVH_Buggy_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28()
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28");

	AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135");

	AVH_Buggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ReceivePossessed");

	AVH_Buggy_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ReceiveTick");

	AVH_Buggy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46");

	AVH_Buggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVH_Buggy_C::ExecuteUbergraph_VH_Buggy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy");

	AVH_Buggy_C_ExecuteUbergraph_VH_Buggy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
