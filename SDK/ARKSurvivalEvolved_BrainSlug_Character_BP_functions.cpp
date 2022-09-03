// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            outColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Sync_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Sync Crosshair Color");

	ABrainSlug_Character_BP_C_Sync_Crosshair_Color_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outColor != nullptr)
		*outColor = params.outColor;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllowedToControlTarget       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  TargetValidationString         (Parm, OutParm, ZeroConstructor)
// class FString                  InvalidTargetString_PreventHUD (Parm, OutParm, ZeroConstructor)
// struct FHUDElement             HUDElementTemplate             (Parm, OutParm)
// float                          BrainJumpTargetCheckDistance   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetHudData");

	ABrainSlug_Character_BP_C_GetHudData_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowedToControlTarget != nullptr)
		*IsAllowedToControlTarget = params.IsAllowedToControlTarget;
	if (TargetValidationString != nullptr)
		*TargetValidationString = params.TargetValidationString;
	if (InvalidTargetString_PreventHUD != nullptr)
		*InvalidTargetString_PreventHUD = params.InvalidTargetString_PreventHUD;
	if (HUDElementTemplate != nullptr)
		*HUDElementTemplate = params.HUDElementTemplate;
	if (BrainJumpTargetCheckDistance != nullptr)
		*BrainJumpTargetCheckDistance = params.BrainJumpTargetCheckDistance;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABrainSlug_Character_BP_C::BP_OverrideTargetingLocation(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OverrideTargetingLocation");

	ABrainSlug_Character_BP_C_BP_OverrideTargetingLocation_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability
// ()
// Parameters:
// class AActor**                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABrainSlug_Character_BP_C::BPGetTargetingDesirability(class AActor** Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetTargetingDesirability");

	ABrainSlug_Character_BP_C_BPGetTargetingDesirability_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission
// ()
// Parameters:
// class APawn*                   OverrideCharacterToTest        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOnMission                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::IsPlayerOnMission(class APawn* OverrideCharacterToTest, bool* IsOnMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsPlayerOnMission");

	ABrainSlug_Character_BP_C_IsPlayerOnMission_Params params;
	params.OverrideCharacterToTest = OverrideCharacterToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnMission != nullptr)
		*IsOnMission = params.IsOnMission;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABrainSlug_Character_BP_C::STATIC_GetBrainSlugAimDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.GetBrainSlugAimDirection");

	ABrainSlug_Character_BP_C_GetBrainSlugAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina
// ()
// Parameters:
// float                          StaminaCost                    (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::DecreaseStamina(float StaminaCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DecreaseStamina");

	ABrainSlug_Character_BP_C_DecreaseStamina_Params params;
	params.StaminaCost = StaminaCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle
// ()
// Parameters:
// struct FName                   CameraStyle                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::UpdateComponentVisibilityWithCameraStyle(const struct FName& CameraStyle, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateComponentVisibilityWithCameraStyle");

	ABrainSlug_Character_BP_C_UpdateComponentVisibilityWithCameraStyle_Params params;
	params.CameraStyle = CameraStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify
// ()
// Parameters:
// struct FName                   NewCameraStyle                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   OldCameraStyle                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABrainSlug_Character_BP_C::BP_OnCameraStyleChangedNotify(struct FName* NewCameraStyle, struct FName* OldCameraStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnCameraStyleChangedNotify");

	ABrainSlug_Character_BP_C_BP_OnCameraStyleChangedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCameraStyle != nullptr)
		*NewCameraStyle = params.NewCameraStyle;
	if (OldCameraStyle != nullptr)
		*OldCameraStyle = params.OldCameraStyle;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump
// ()
// Parameters:
// bool                           IsAttackJump                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::IsAllowedToBrainJump(bool IsAttackJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToBrainJump");

	ABrainSlug_Character_BP_C_IsAllowedToBrainJump_Params params;
	params.IsAttackJump = IsAttackJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABrainSlug_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyHarvestingQuantity");

	ABrainSlug_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent
// ()

void ABrainSlug_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTriggerStasisEvent");

	ABrainSlug_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes
// ()
// Parameters:
// bool                           bHasHumanController            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::HasHumanControllerOrDinoDoes(bool* bHasHumanController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasHumanControllerOrDinoDoes");

	ABrainSlug_Character_BP_C_HasHumanControllerOrDinoDoes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasHumanController != nullptr)
		*bHasHumanController = params.bHasHumanController;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis
// ()

void ABrainSlug_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnstasis");

	ABrainSlug_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventStasis");

	ABrainSlug_Character_BP_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle
// ()
// Parameters:
// class APrimalStructureItemContainer* StructureRef                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActivationChanged              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::AttemptItemContainerActivationToggle(class APrimalStructureItemContainer* StructureRef, bool* ActivationChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptItemContainerActivationToggle");

	ABrainSlug_Character_BP_C_AttemptItemContainerActivationToggle_Params params;
	params.StructureRef = StructureRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActivationChanged != nullptr)
		*ActivationChanged = params.ActivationChanged;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPServerHandleNetExecCommand");

	ABrainSlug_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanRiderAttack");

	ABrainSlug_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag
// ()
// Parameters:
// struct FName                   TagToCheck                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::HasForbiddenDinoCustomTag(const struct FName& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.HasForbiddenDinoCustomTag");

	ABrainSlug_Character_BP_C_HasForbiddenDinoCustomTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPOverrideInventoryAccessInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOverrideInventoryAccessInput");

	ABrainSlug_Character_BP_C_BPOverrideInventoryAccessInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur
// ()

void ABrainSlug_Character_BP_C::UpdateBuffControlDur()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateBuffControlDur");

	ABrainSlug_Character_BP_C_UpdateBuffControlDur_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanCryo");

	ABrainSlug_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPSetupTamed");

	ABrainSlug_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintOverrideWantsToRun");

	ABrainSlug_Character_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets
// ()
// Parameters:
// int                            ID1                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ID2                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::IsDinoInPastTameAffinityTargets(int* ID1, int* ID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoInPastTameAffinityTargets");

	ABrainSlug_Character_BP_C_IsDinoInPastTameAffinityTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID1 != nullptr)
		*ID1 = params.ID1;
	if (ID2 != nullptr)
		*ID2 = params.ID2;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable
// ()

void ABrainSlug_Character_BP_C::BPUnsetupDinoTameable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPUnsetupDinoTameable");

	ABrainSlug_Character_BP_C_BPUnsetupDinoTameable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity
// ()
// Parameters:
// class APrimalCharacter*        DinoToGetAffinityFrom          (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BrainSlugIterateAffinity(class APrimalCharacter* DinoToGetAffinityFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainSlugIterateAffinity");

	ABrainSlug_Character_BP_C_BrainSlugIterateAffinity_Params params;
	params.DinoToGetAffinityFrom = DinoToGetAffinityFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABrainSlug_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPModifyAimOffsetNoTarget");

	ABrainSlug_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage
// (Exec, Event, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABrainSlug_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintAdjustOutputDamage");

	ABrainSlug_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintCanAttack");

	ABrainSlug_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPShouldForceFlee");

	ABrainSlug_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt
// ()

void ABrainSlug_Character_BP_C::EndBrainHunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.EndBrainHunt");

	ABrainSlug_Character_BP_C_EndBrainHunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPIsValidUnStasisCaster");

	ABrainSlug_Character_BP_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNotifyClearRider");

	ABrainSlug_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPDoAttack");

	ABrainSlug_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPPreventFirstPerson");

	ABrainSlug_Character_BP_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABrainSlug_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetHUDElements");

	ABrainSlug_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD
// (Native, NetMulticast, MulticastDelegate, Private, NetClient, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              DoorDescriptionLoc             (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BPNewDoorInteractionDrawHUD(class AShooterHUD** HUD, struct FVector2D* DoorDescriptionLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPNewDoorInteractionDrawHUD");

	ABrainSlug_Character_BP_C_BPNewDoorInteractionDrawHUD_Params params;
	params.HUD = HUD;
	params.DoorDescriptionLoc = DoorDescriptionLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer
// ()

void ABrainSlug_Character_BP_C::ReturnToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReturnToPlayer");

	ABrainSlug_Character_BP_C_ReturnToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BP_InterceptMoveRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveRight");

	ABrainSlug_Character_BP_C_BP_InterceptMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_InterceptMoveForward");

	ABrainSlug_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment
// ()
// Parameters:
// class APrimalCharacter*        AttachedToChar                 (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::StartBrainSlugAttachment(class APrimalCharacter* AttachedToChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainSlugAttachment");

	ABrainSlug_Character_BP_C_StartBrainSlugAttachment_Params params;
	params.AttachedToChar = AttachedToChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot
// (NetReliable, Native, Static, MulticastDelegate, Delegate, NetClient, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        ViableTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::STATIC_FindViableBrainJumpTargetFromControlRot(class AController* Controller, class APrimalCharacter** ViableTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FindViableBrainJumpTargetFromControlRot");

	ABrainSlug_Character_BP_C_FindViableBrainJumpTargetFromControlRot_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViableTarget != nullptr)
		*ViableTarget = params.ViableTarget;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino
// ()

void ABrainSlug_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnClearMountedDino");

	ABrainSlug_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino
// ()

void ABrainSlug_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPOnSetMountedDino");

	ABrainSlug_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABrainSlug_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustDamage");

	ABrainSlug_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintDrawFloatingHUD");

	ABrainSlug_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood
// ()
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABrainSlug_Character_BP_C::IsDinoBrainFood(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsDinoBrainFood");

	ABrainSlug_Character_BP_C_IsDinoBrainFood_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped
// ()

void ABrainSlug_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCharacterSleeped");

	ABrainSlug_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Delegate, NetClient, BlueprintEvent)
// Parameters:
// struct FRotator                AdjustedThrowingDir            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Get_Aim_Adjusted_Throwing_Dir(struct FRotator* AdjustedThrowingDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Get Aim Adjusted Throwing Dir");

	ABrainSlug_Character_BP_C_Get_Aim_Adjusted_Throwing_Dir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustedThrowingDir != nullptr)
		*AdjustedThrowingDir = params.AdjustedThrowingDir;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget
// ()
// Parameters:
// class APrimalDinoCharacter*    TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidTame                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::FullyTameTarget(class APrimalDinoCharacter* TargetChar, bool* DidTame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.FullyTameTarget");

	ABrainSlug_Character_BP_C_FullyTameTarget_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidTame != nullptr)
		*DidTame = params.DidTame;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame
// ()
// Parameters:
// class APrimalCharacter*        TestChar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::IsAllowedToFullyTame(class APrimalCharacter* TestChar, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToFullyTame");

	ABrainSlug_Character_BP_C_IsAllowedToFullyTame_Params params;
	params.TestChar = TestChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed
// ()

void ABrainSlug_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveDestroyed");

	ABrainSlug_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath
// ()

void ABrainSlug_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnSetDeath");

	ABrainSlug_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer
// ()

void ABrainSlug_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerServer");

	ABrainSlug_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABrainSlug_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPAdjustAttackIndex");

	ABrainSlug_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BlueprintPlayDying");

	ABrainSlug_Character_BP_C_BlueprintPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent
// ()
// Parameters:
// class FString*                 InputName                      (Parm, ZeroConstructor)

void ABrainSlug_Character_BP_C::InterceptInputEvent(class FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.InterceptInputEvent");

	ABrainSlug_Character_BP_C_InterceptInputEvent_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPCanMountOnCharacter(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPCanMountOnCharacter");

	ABrainSlug_Character_BP_C_BPCanMountOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPHandleControllerInitiatedAttack");

	ABrainSlug_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetClient, BlueprintEvent)
// Parameters:
// class APrimalCharacter*        TestChar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  TargetValidationString         (Parm, OutParm, ZeroConstructor)

void ABrainSlug_Character_BP_C::STATIC_IsAllowedToControl(class APrimalCharacter* TestChar, bool* Allowed, class FString* TargetValidationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.IsAllowedToControl");

	ABrainSlug_Character_BP_C_IsAllowedToControl_Params params;
	params.TestChar = TestChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
	if (TargetValidationString != nullptr)
		*TargetValidationString = params.TargetValidationString;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABrainSlug_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetCrosshairColor");

	ABrainSlug_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed
// ()
// Parameters:
// class AController**            OldController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveUnpossessed");

	ABrainSlug_Character_BP_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceivePossessed");

	ABrainSlug_Character_BP_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated
// ()

void ABrainSlug_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTimerNonDedicated");

	ABrainSlug_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABrainSlug_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPTryMultiUse");

	ABrainSlug_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, NetResponse, NetMulticast, Private, NetClient, BlueprintEvent)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABrainSlug_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BPGetMultiUseEntries");

	ABrainSlug_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch
// ()
// Parameters:
// struct FVector*                launchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      throwingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DinoShoulderMountedLaunch");

	ABrainSlug_Character_BP_C_DinoShoulderMountedLaunch_Params params;
	params.launchDir = launchDir;
	params.throwingCharacter = throwingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript
// ()

void ABrainSlug_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UserConstructionScript");

	ABrainSlug_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ServerAttemptBrainControl(class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerAttemptBrainControl");

	ABrainSlug_Character_BP_C_ServerAttemptBrainControl_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::MultiEnableNonDediTimer(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.MultiEnableNonDediTimer");

	ABrainSlug_Character_BP_C_MultiEnableNonDediTimer_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt
// ()

void ABrainSlug_Character_BP_C::ServerClearBrainHunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerClearBrainHunt");

	ABrainSlug_Character_BP_C_ServerClearBrainHunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt
// ()

void ABrainSlug_Character_BP_C::Multi_EndBrainHunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_EndBrainHunt");

	ABrainSlug_Character_BP_C_Multi_EndBrainHunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession
// ()

void ABrainSlug_Character_BP_C::ClearPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossession");

	ABrainSlug_Character_BP_C_ClearPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough
// ()

void ABrainSlug_Character_BP_C::TemporaryPlayerPassThrough()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TemporaryPlayerPassThrough");

	ABrainSlug_Character_BP_C_TemporaryPlayerPassThrough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment
// ()

void ABrainSlug_Character_BP_C::ClearBrainSlugAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainSlugAttachment");

	ABrainSlug_Character_BP_C_ClearBrainSlugAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_PlayFullyTamedVFX(class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_PlayFullyTamedVFX");

	ABrainSlug_Character_BP_C_Multi_PlayFullyTamedVFX_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair
// ()
// Parameters:
// bool                           bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_SetDrawCrosshair(bool bNewActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetDrawCrosshair");

	ABrainSlug_Character_BP_C_Multi_SetDrawCrosshair_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction
// ()
// Parameters:
// class APrimalStructure*        TargetedDoor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ServerTryDoorInteraction(class APrimalStructure* TargetedDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerTryDoorInteraction");

	ABrainSlug_Character_BP_C_ServerTryDoorInteraction_Params params;
	params.TargetedDoor = TargetedDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment
// ()

void ABrainSlug_Character_BP_C::Server_ClearBrainSlugAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_ClearBrainSlugAttachment");

	ABrainSlug_Character_BP_C_Server_ClearBrainSlugAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController
// ()
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_DestroyController(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DestroyController");

	ABrainSlug_Character_BP_C_Multi_DestroyController_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee
// ()

void ABrainSlug_Character_BP_C::ResetFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ResetFlee");

	ABrainSlug_Character_BP_C_ResetFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay
// ()

void ABrainSlug_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ReceiveBeginPlay");

	ABrainSlug_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect
// ()
// Parameters:
// class UParticleSystem*         particle                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  AttachToActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachToSocket                 (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_SpawnEffect(class UParticleSystem* particle, const struct FVector& Location, class AActor* AttachToActor, const struct FName& AttachToSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SpawnEffect");

	ABrainSlug_Character_BP_C_Multi_SpawnEffect_Params params;
	params.particle = particle;
	params.Location = Location;
	params.AttachToActor = AttachToActor;
	params.AttachToSocket = AttachToSocket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle
// ()
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromThrow                      (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_DoJumpParticle(bool Activate, bool FromThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoJumpParticle");

	ABrainSlug_Character_BP_C_Multi_DoJumpParticle_Params params;
	params.Activate = Activate;
	params.FromThrow = FromThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle
// ()
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_DoBrainHuntParticle(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_DoBrainHuntParticle");

	ABrainSlug_Character_BP_C_Multi_DoBrainHuntParticle_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess
// ()
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ServerRepossess(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerRepossess");

	ABrainSlug_Character_BP_C_ServerRepossess_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment
// ()

void ABrainSlug_Character_BP_C::TimerClearBrainSlugAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TimerClearBrainSlugAttachment");

	ABrainSlug_Character_BP_C_TimerClearBrainSlugAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors
// ()
// Parameters:
// bool                           bDontActuallyPossess           (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::StartPossessionBehaviors(bool bDontActuallyPossess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartPossessionBehaviors");

	ABrainSlug_Character_BP_C_StartPossessionBehaviors_Params params;
	params.bDontActuallyPossess = bDontActuallyPossess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers
// ()

void ABrainSlug_Character_BP_C::ChangeControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ChangeControllers");

	ABrainSlug_Character_BP_C_ChangeControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController
// ()
// Parameters:
// class AController*             Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_SetControlRotForController(class AController* Target, const struct FRotator& newRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRotForController");

	ABrainSlug_Character_BP_C_Multi_SetControlRotForController_Params params;
	params.Target = Target;
	params.newRot = newRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage
// ()
// Parameters:
// class FString                  OutMessage                     (Parm, ZeroConstructor)

void ABrainSlug_Character_BP_C::TestingMessage(const class FString& OutMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TestingMessage");

	ABrainSlug_Character_BP_C_TestingMessage_Params params;
	params.OutMessage = OutMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag
// ()
// Parameters:
// class APrimalStructureItemContainer* HarvestBag                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::SetupHarvestingBag(class APrimalStructureItemContainer* HarvestBag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.SetupHarvestingBag");

	ABrainSlug_Character_BP_C_SetupHarvestingBag_Params params;
	params.HarvestBag = HarvestBag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility
// ()

void ABrainSlug_Character_BP_C::Timer_TryUpdateComponentVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Timer_TryUpdateComponentVisibility");

	ABrainSlug_Character_BP_C_Timer_TryUpdateComponentVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl
// ()
// Parameters:
// class APrimalCharacter*        TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::AttemptBrainControl(class APrimalCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.AttemptBrainControl");

	ABrainSlug_Character_BP_C_AttemptBrainControl_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased
// ()

void ABrainSlug_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpReleased");

	ABrainSlug_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire
// ()

void ABrainSlug_Character_BP_C::TryFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.TryFire");

	ABrainSlug_Character_BP_C_TryFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon
// ()

void ABrainSlug_Character_BP_C::ForceFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ForceFireWeapon");

	ABrainSlug_Character_BP_C_ForceFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon
// ()

void ABrainSlug_Character_BP_C::ServerFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ServerFireWeapon");

	ABrainSlug_Character_BP_C_ServerFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump
// ()
// Parameters:
// bool                           bStartJump                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Server_TryJump(bool bStartJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_TryJump");

	ABrainSlug_Character_BP_C_Server_TryJump_Params params;
	params.bStartJump = bStartJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed
// ()

void ABrainSlug_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BP_OnJumpPressed");

	ABrainSlug_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot
// ()

void ABrainSlug_Character_BP_C::DelayedUpdateRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedUpdateRot");

	ABrainSlug_Character_BP_C_DelayedUpdateRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot
// ()
// Parameters:
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* InstigatingController          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewAimDir                      (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Server_SetControlRot(const struct FRotator& newRot, class AShooterPlayerController* InstigatingController, const struct FVector& NewLoc, const struct FVector& NewAimDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_SetControlRot");

	ABrainSlug_Character_BP_C_Server_SetControlRot_Params params;
	params.newRot = newRot;
	params.InstigatingController = InstigatingController;
	params.NewLoc = NewLoc;
	params.NewAimDir = NewAimDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot
// ()
// Parameters:
// struct FRotator                newRot                         (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_SetControlRot(const struct FRotator& newRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_SetControlRot");

	ABrainSlug_Character_BP_C_Multi_SetControlRot_Params params;
	params.newRot = newRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput
// ()
// Parameters:
// struct FVector                 moveDir                        (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_MoveInput(const struct FVector& moveDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_MoveInput");

	ABrainSlug_Character_BP_C_Multi_MoveInput_Params params;
	params.moveDir = moveDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget
// ()
// Parameters:
// struct FVector                 moveDir                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* InstigatingController          (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Server_MoveBrainControlTarget(const struct FVector& moveDir, class AShooterPlayerController* InstigatingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Server_MoveBrainControlTarget");

	ABrainSlug_Character_BP_C_Server_MoveBrainControlTarget_Params params;
	params.moveDir = moveDir;
	params.InstigatingController = InstigatingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds
// ()

void ABrainSlug_Character_BP_C::ClearPossessionBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearPossessionBinds");

	ABrainSlug_Character_BP_C_ClearPossessionBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerSleep");

	ABrainSlug_Character_BP_C_RespondToPlayerSleep_Params params;
	params.forCharacter = forCharacter;
	params.bIsSleeping = bIsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.RespondToPlayerDeath");

	ABrainSlug_Character_BP_C_RespondToPlayerDeath_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse
// ()
// Parameters:
// class AShooterPlayerController* NewPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::OnPossessionResponse(class AShooterPlayerController* NewPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.OnPossessionResponse");

	ABrainSlug_Character_BP_C_OnPossessionResponse_Params params;
	params.NewPC = NewPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile
// ()
// Parameters:
// bool                           bShouldCollide                 (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::Multi_UpdateCollisionProfile(bool bShouldCollide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.Multi_UpdateCollisionProfile");

	ABrainSlug_Character_BP_C_Multi_UpdateCollisionProfile_Params params;
	params.bShouldCollide = bShouldCollide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput
// ()

void ABrainSlug_Character_BP_C::JumpLeapInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.JumpLeapInput");

	ABrainSlug_Character_BP_C_JumpLeapInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck
// ()

void ABrainSlug_Character_BP_C::UpdateJumpCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.UpdateJumpCheck");

	ABrainSlug_Character_BP_C_UpdateJumpCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity
// ()

void ABrainSlug_Character_BP_C::DelayedLaunchVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.DelayedLaunchVelocity");

	ABrainSlug_Character_BP_C_DelayedLaunchVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.K2_OnMovementModeChanged");

	ABrainSlug_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump
// ()

void ABrainSlug_Character_BP_C::StartBrainJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.StartBrainJump");

	ABrainSlug_Character_BP_C_StartBrainJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump
// ()

void ABrainSlug_Character_BP_C::ClearBrainJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ClearBrainJump");

	ABrainSlug_Character_BP_C_ClearBrainJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent
// ()
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABrainSlug_Character_BP_C::ActorHitDelegateEvent(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ActorHitDelegateEvent");

	ABrainSlug_Character_BP_C_ActorHitDelegateEvent_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::BrainControlInput(class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.BrainControlInput");

	ABrainSlug_Character_BP_C_BrainControlInput_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_Character_BP_C::ExecuteUbergraph_BrainSlug_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_Character_BP.BrainSlug_Character_BP_C.ExecuteUbergraph_BrainSlug_Character_BP");

	ABrainSlug_Character_BP_C_ExecuteUbergraph_BrainSlug_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
