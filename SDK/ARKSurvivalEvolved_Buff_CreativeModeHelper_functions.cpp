// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CreativeModeHelper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CreativeModeHelper_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput");

	ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD");

	ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
// (NetRequest, Native, Static, NetMulticast, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer");

	ABuff_CreativeModeHelper_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
// ()
// Parameters:
// bool                           NotRidingDino                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::IsNotRidingDino(bool* NotRidingDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino");

	ABuff_CreativeModeHelper_C_IsNotRidingDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotRidingDino != nullptr)
		*NotRidingDino = params.NotRidingDino;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
// ()
// Parameters:
// class FString                  Command                        (Parm, ZeroConstructor)

void ABuff_CreativeModeHelper_C::ExecConsoleCommand(const class FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand");

	ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated");

	ABuff_CreativeModeHelper_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated");

	ABuff_CreativeModeHelper_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator");

	ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript
// ()

void ABuff_CreativeModeHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.UserConstructionScript");

	ABuff_CreativeModeHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_226
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Jump_K2Node_InputActionEvent_226()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_226");

	ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_226_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_225
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_225()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_225");

	ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_225_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_224
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_224()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_224");

	ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_224_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_223_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_222_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221");

	ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_221_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70");

	ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_70_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69");

	ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68");

	ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_68_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_67
// ()

void ABuff_CreativeModeHelper_C::InpActEvt_G_K2Node_InputKeyEvent_67()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_67");

	ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_67_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
// ()
// Parameters:
// bool                           IsFlying                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerSetFlight(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight");

	ABuff_CreativeModeHelper_C_ServerSetFlight_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
// ()
// Parameters:
// float                          newSpeed                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerSetFlySpeed(float newSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed");

	ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params params;
	params.newSpeed = newSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
// ()
// Parameters:
// float                          New_Speed                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::SetFlySpeed(float New_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed");

	ABuff_CreativeModeHelper_C_SetFlySpeed_Params params;
	params.New_Speed = New_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
// ()
// Parameters:
// class APrimalStructure*        StructureToDestroy             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::NetServerDestroyStructure(class APrimalStructure* StructureToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure");

	ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params params;
	params.StructureToDestroy = StructureToDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
// ()
// Parameters:
// bool                           IsFlying                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ClientUpdateFlightStatus(bool IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus");

	ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params params;
	params.IsFlying = IsFlying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
// ()
// Parameters:
// TArray<struct FHitResult>      Hits                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         HitStarts                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         HitEnds                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct UObject_FTransform> Chars                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::MultiReplicationDebugData(const struct FVector& Player, TArray<struct FHitResult>* Hits, TArray<struct FVector>* HitStarts, TArray<struct FVector>* HitEnds, TArray<struct UObject_FTransform>* Chars)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData");

	ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (HitStarts != nullptr)
		*HitStarts = params.HitStarts;
	if (HitEnds != nullptr)
		*HitEnds = params.HitEnds;
	if (Chars != nullptr)
		*Chars = params.Chars;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient");

	ABuff_CreativeModeHelper_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
// ()
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ServerRequestReplicationDebugging(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging");

	ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CreativeModeHelper_C::ExecuteUbergraph_Buff_CreativeModeHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper");

	ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
