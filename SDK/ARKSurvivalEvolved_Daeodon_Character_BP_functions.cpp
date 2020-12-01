// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADaeodon_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestDamage");

	ADaeodon_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.IsAlly
// ()
// Parameters:
// int                            otherTargetingTeam             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSameTeamOrAlly               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::IsAlly(int otherTargetingTeam, bool* isSameTeamOrAlly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.IsAlly");

	ADaeodon_Character_BP_C_IsAlly_Params params;
	params.otherTargetingTeam = otherTargetingTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSameTeamOrAlly != nullptr)
		*isSameTeamOrAlly = params.isSameTeamOrAlly;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.TryTrigger Attack
// (NetRequest, Native, NetResponse, Static, HasOutParms, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::STATIC_TryTrigger_Attack(int AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.TryTrigger Attack");

	ADaeodon_Character_BP_C_TryTrigger_Attack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.ReceiveAnyDamage");

	ADaeodon_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.SendNetExecCommandToCharacter
// (NetReliable, Exec, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CommandName                    (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::STATIC_SendNetExecCommandToCharacter(class AShooterCharacter* Character, const struct FName& CommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.SendNetExecCommandToCharacter");

	ADaeodon_Character_BP_C_SendNetExecCommandToCharacter_Params params;
	params.Character = Character;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ShowHUDNotification
// ()
// Parameters:
// struct FStatusValueModifierDescription notificationDescription        (Parm)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::ShowHUDNotification(const struct FStatusValueModifierDescription& notificationDescription, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.ShowHUDNotification");

	ADaeodon_Character_BP_C_ShowHUDNotification_Params params;
	params.notificationDescription = notificationDescription;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADaeodon_Character_BP_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPClientHandleNetExecCommand");

	ADaeodon_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifySetRider");

	ADaeodon_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.EnablePassiveHealing
// ()

void ADaeodon_Character_BP_C::EnablePassiveHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.EnablePassiveHealing");

	ADaeodon_Character_BP_C_EnablePassiveHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisablePassiveHealing
// ()

void ADaeodon_Character_BP_C::DisablePassiveHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisablePassiveHealing");

	ADaeodon_Character_BP_C_DisablePassiveHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPNotifyClearRider");

	ADaeodon_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.Trigger Healing
// ()
// Parameters:
// int                            BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShortHealing                 (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::Trigger_Healing(int BuffClass, bool isShortHealing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.Trigger Healing");

	ADaeodon_Character_BP_C_Trigger_Healing_Params params;
	params.BuffClass = BuffClass;
	params.isShortHealing = isShortHealing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisableActiveHealing
// ()

void ADaeodon_Character_BP_C::DisableActiveHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.DisableActiveHealing");

	ADaeodon_Character_BP_C_DisableActiveHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ToggleActiveHealing
// ()

void ADaeodon_Character_BP_C::ToggleActiveHealing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.ToggleActiveHealing");

	ADaeodon_Character_BP_C_ToggleActiveHealing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADaeodon_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanAttack");

	ADaeodon_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTimerServer
// ()

void ADaeodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTimerServer");

	ADaeodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintDrawFloatingHUD");

	ADaeodon_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.Toggle Passive Healing
// ()

void ADaeodon_Character_BP_C::Toggle_Passive_Healing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.Toggle Passive Healing");

	ADaeodon_Character_BP_C_Toggle_Passive_Healing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, HasOutParms, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ADaeodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPGetMultiUseEntries");

	ADaeodon_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADaeodon_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPTryMultiUse");

	ADaeodon_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.OnJumped
// ()

void ADaeodon_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.OnJumped");

	ADaeodon_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPOnMovementModeChangedNotify");

	ADaeodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADaeodon_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintCanRiderAttack");

	ADaeodon_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPDoAttack");

	ADaeodon_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADaeodon_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingQuantity");

	ADaeodon_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingWeightsArray
// ()
// Parameters:
// TArray<float>                  resourceWeightsIn              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimalItem*>     resourceItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  resourceWeightsOut             (Parm, OutParm, ZeroConstructor)

void ADaeodon_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BPModifyHarvestingWeightsArray");

	ADaeodon_Character_BP_C_BPModifyHarvestingWeightsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resourceWeightsIn != nullptr)
		*resourceWeightsIn = params.resourceWeightsIn;
	if (resourceItems != nullptr)
		*resourceItems = params.resourceItems;
	if (resourceWeightsOut != nullptr)
		*resourceWeightsOut = params.resourceWeightsOut;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.UserConstructionScript
// ()

void ADaeodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.UserConstructionScript");

	ADaeodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.MovementChangedEvent
// ()

void ADaeodon_Character_BP_C::MovementChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.MovementChangedEvent");

	ADaeodon_Character_BP_C_MovementChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ADaeodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP.Daeodon_Character_BP_C.ExecuteUbergraph_Daeodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_C::ExecuteUbergraph_Daeodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP.Daeodon_Character_BP_C.ExecuteUbergraph_Daeodon_Character_BP");

	ADaeodon_Character_BP_C_ExecuteUbergraph_Daeodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
