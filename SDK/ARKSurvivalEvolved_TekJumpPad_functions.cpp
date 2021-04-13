// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekJumpPad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator
// ()

void ATekJumpPad_C::OnRep_ShowIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_ShowIndicator");

	ATekJumpPad_C_OnRep_ShowIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility
// ()
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::SetLaunchPreviewVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.SetLaunchPreviewVisibility");

	ATekJumpPad_C_SetLaunchPreviewVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.TickLaunchPreview
// (Exec, NetResponse, Static, Public, NetServer, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)

void ATekJumpPad_C::STATIC_TickLaunchPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.TickLaunchPreview");

	ATekJumpPad_C_TickLaunchPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated
// ()

void ATekJumpPad_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPContainerDeactivated");

	ATekJumpPad_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPContainerActivated
// ()

void ATekJumpPad_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPContainerActivated");

	ATekJumpPad_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors
// ()

void ATekJumpPad_C::BPRefreshedStructureColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPRefreshedStructureColors");

	ATekJumpPad_C_BPRefreshedStructureColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BlueprintDrawHUD");

	ATekJumpPad_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.RandomSetRotation
// ()

void ATekJumpPad_C::RandomSetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.RandomSetRotation");

	ATekJumpPad_C_RandomSetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool
// ()

void ATekJumpPad_C::OnRep_LaunchBounceTriggerSwitchBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchBounceTriggerSwitchBool");

	ATekJumpPad_C_OnRep_LaunchBounceTriggerSwitchBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPPlacedStructure");

	ATekJumpPad_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig
// ()

void ATekJumpPad_C::OnRep_IsSizeBig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_IsSizeBig");

	ATekJumpPad_C_OnRep_IsSizeBig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.SetMaterialParameters
// ()

void ATekJumpPad_C::SetMaterialParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.SetMaterialParameters");

	ATekJumpPad_C_SetMaterialParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad
// ()

void ATekJumpPad_C::TurnOnJumpPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.TurnOnJumpPad");

	ATekJumpPad_C_TurnOnJumpPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated
// ()

void ATekJumpPad_C::OnRep_IsActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_IsActivated");

	ATekJumpPad_C_OnRep_IsActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection
// ()

void ATekJumpPad_C::OnRep_UseRandomDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_UseRandomDirection");

	ATekJumpPad_C_OnRep_UseRandomDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha
// ()
// Parameters:
// float                          LaunchForce                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::LaunchForceToAlpha(float LaunchForce, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.LaunchForceToAlpha");

	ATekJumpPad_C_LaunchForceToAlpha_Params params;
	params.LaunchForce = LaunchForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce
// ()

void ATekJumpPad_C::OnRep_CurrentLaunchForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_CurrentLaunchForce");

	ATekJumpPad_C_OnRep_CurrentLaunchForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight
// ()

void ATekJumpPad_C::OnRep_LaunchAreaCapsuleHalfHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchAreaCapsuleHalfHeight");

	ATekJumpPad_C_OnRep_LaunchAreaCapsuleHalfHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewCapsuleHalfHeight           (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewLaunchForce                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::UpdateLaunchTriggerTransform(const struct FRotator& NewRotation, float NewCapsuleHalfHeight, float NewLaunchForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.UpdateLaunchTriggerTransform");

	ATekJumpPad_C_UpdateLaunchTriggerTransform_Params params;
	params.NewRotation = NewRotation;
	params.NewCapsuleHalfHeight = NewCapsuleHalfHeight;
	params.NewLaunchForce = NewLaunchForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation
// ()

void ATekJumpPad_C::OnRep_LaunchRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.OnRep_LaunchRotation");

	ATekJumpPad_C_OnRep_LaunchRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekJumpPad_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPServerHandleNetExecCommand");

	ATekJumpPad_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse
// (NetReliable, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPClientDoMultiUse");

	ATekJumpPad_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries
// (MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekJumpPad_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPGetMultiUseEntries");

	ATekJumpPad_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekJumpPad.TekJumpPad_C.LaunchCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMultiplier             (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::LaunchCharacter(class APrimalCharacter* Character, float VelocityMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.LaunchCharacter");

	ATekJumpPad_C_LaunchCharacter_Params params;
	params.Character = Character;
	params.VelocityMultiplier = VelocityMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowedToLaunch                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          VelocityMultiplier             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::GetVelocityMultiplierForCharacter(class APrimalCharacter* Char, bool* AllowedToLaunch, float* VelocityMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.GetVelocityMultiplierForCharacter");

	ATekJumpPad_C_GetVelocityMultiplierForCharacter_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedToLaunch != nullptr)
		*AllowedToLaunch = params.AllowedToLaunch;
	if (VelocityMultiplier != nullptr)
		*VelocityMultiplier = params.VelocityMultiplier;
}


// Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATekJumpPad_C::BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BPIsAllowedToBuildEx");

	ATekJumpPad_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration
// ()
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeactivateAfterTime            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::GetBuffDefaultDuration(class UClass* BuffClass, float* DeactivateAfterTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.GetBuffDefaultDuration");

	ATekJumpPad_C_GetBuffDefaultDuration_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeactivateAfterTime != nullptr)
		*DeactivateAfterTime = params.DeactivateAfterTime;
}


// Function TekJumpPad.TekJumpPad_C.UserConstructionScript
// ()

void ATekJumpPad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.UserConstructionScript");

	ATekJumpPad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc
// ()

void ATekJumpPad_C::Launchactivate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Launchactivate__FinishedFunc");

	ATekJumpPad_C_Launchactivate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc
// ()

void ATekJumpPad_C::Launchactivate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Launchactivate__UpdateFunc");

	ATekJumpPad_C_Launchactivate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc
// ()

void ATekJumpPad_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_0__FinishedFunc");

	ATekJumpPad_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc
// ()

void ATekJumpPad_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_0__UpdateFunc");

	ATekJumpPad_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc
// ()

void ATekJumpPad_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_1__FinishedFunc");

	ATekJumpPad_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc
// ()

void ATekJumpPad_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Timeline_1__UpdateFunc");

	ATekJumpPad_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ATekJumpPad_C::BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature");

	ATekJumpPad_C_BndEvt__LaunchTrigger_K2Node_ComponentBoundEvent_126_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay
// ()

void ATekJumpPad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ReceiveBeginPlay");

	ATekJumpPad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::ServerRequest_RotateToOtherSide(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_RotateToOtherSide");

	ATekJumpPad_C_ServerRequest_RotateToOtherSide_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize
// ()

void ATekJumpPad_C::ServerRequest_ToggleSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleSize");

	ATekJumpPad_C_ServerRequest_ToggleSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate
// ()

void ATekJumpPad_C::ServerRequest_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_Rotate");

	ATekJumpPad_C_ServerRequest_Rotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp
// ()

void ATekJumpPad_C::ServerRequest_ForceUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceUp");

	ATekJumpPad_C_ServerRequest_ForceUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown
// ()

void ATekJumpPad_C::ServerRequest_ForceDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ForceDown");

	ATekJumpPad_C_ServerRequest_ForceDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom
// ()

void ATekJumpPad_C::ServerRequest_ToggleRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleRandom");

	ATekJumpPad_C_ServerRequest_ToggleRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::ServerRequest_SetPinCode(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_SetPinCode");

	ATekJumpPad_C_ServerRequest_SetPinCode_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation
// ()

void ATekJumpPad_C::ServerRequest_ToggleActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleActivation");

	ATekJumpPad_C_ServerRequest_ToggleActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Client_FloatingPad
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::Client_FloatingPad(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Client_FloatingPad");

	ATekJumpPad_C_Client_FloatingPad_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore
// ()

void ATekJumpPad_C::ServerRequest_PitchMore()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchMore");

	ATekJumpPad_C_ServerRequest_PitchMore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess
// ()

void ATekJumpPad_C::ServerRequest_PitchLess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_PitchLess");

	ATekJumpPad_C_ServerRequest_PitchLess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce
// ()

void ATekJumpPad_C::Client_LaunchBounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.Client_LaunchBounce");

	ATekJumpPad_C_Client_LaunchBounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator
// ()

void ATekJumpPad_C::ServerRequest_ToggleIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ServerRequest_ToggleIndicator");

	ATekJumpPad_C_ServerRequest_ToggleIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_C::ExecuteUbergraph_TekJumpPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad.TekJumpPad_C.ExecuteUbergraph_TekJumpPad");

	ATekJumpPad_C_ExecuteUbergraph_TekJumpPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
