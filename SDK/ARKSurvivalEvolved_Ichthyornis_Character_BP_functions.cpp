// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ichthyornis_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand
// (Exec, Event, Static, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIchthyornis_Character_BP_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand");

	AIchthyornis_Character_BP_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::IsOverweightThreshold_F(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F");

	AIchthyornis_Character_BP_C_IsOverweightThreshold_F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIchthyornis_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity");

	AIchthyornis_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           shouldntAttack                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CheckWeightCondition(class APrimalCharacter* Target, bool* shouldntAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition");

	AIchthyornis_Character_BP_C_CheckWeightCondition_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldntAttack != nullptr)
		*shouldntAttack = params.shouldntAttack;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter");

	AIchthyornis_Character_BP_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded
// ()

void AIchthyornis_Character_BP_C::RemoveDragWeightIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded");

	AIchthyornis_Character_BP_C_RemoveDragWeightIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack
// ()
// Parameters:
// bool                           goBackToOwner                  (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CancelAttack(bool goBackToOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack");

	AIchthyornis_Character_BP_C_CancelAttack_Params params;
	params.goBackToOwner = goBackToOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState
// ()
// Parameters:
// int                            aggressionState                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>   tamedOrder                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::GetTamedOrderFromAggressionState(int aggressionState, TEnumAsByte<EDinoTamedOrder>* tamedOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState");

	AIchthyornis_Character_BP_C_GetTamedOrderFromAggressionState_Params params;
	params.aggressionState = aggressionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tamedOrder != nullptr)
		*tamedOrder = params.tamedOrder;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino
// ()

void AIchthyornis_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino");

	AIchthyornis_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack
// ()

void AIchthyornis_Character_BP_C::OnCancelledAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack");

	AIchthyornis_Character_BP_C_OnCancelledAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder
// ()
// Parameters:
// class APawn*                   Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SetLastPlayerOrder(class APawn* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder");

	AIchthyornis_Character_BP_C_SetLastPlayerOrder_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner
// ()
// Parameters:
// bool                           isFailedLaunch                 (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::StartGoBackToOwner(bool isFailedLaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner");

	AIchthyornis_Character_BP_C_StartGoBackToOwner_Params params;
	params.isFailedLaunch = isFailedLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing
// ()

void AIchthyornis_Character_BP_C::Disable_Landing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing");

	AIchthyornis_Character_BP_C_Disable_Landing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage
// ()
// Parameters:
// int                            attackStage                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BackToOwnerRadius              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFailedLaunch                 (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SetAttackStage(int attackStage, float BackToOwnerRadius, bool isFailedLaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage");

	AIchthyornis_Character_BP_C_SetAttackStage_Params params;
	params.attackStage = attackStage;
	params.BackToOwnerRadius = BackToOwnerRadius;
	params.isFailedLaunch = isFailedLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding
// ()

void AIchthyornis_Character_BP_C::AllowLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding");

	AIchthyornis_Character_BP_C_AllowLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State
// ()
// Parameters:
// int                            aggressionState                (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Set_Aggression_State(int aggressionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State");

	AIchthyornis_Character_BP_C_Set_Aggression_State_Params params;
	params.aggressionState = aggressionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack
// ()
// Parameters:
// bool                           forceFinish                    (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Finish_Attack(bool forceFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack");

	AIchthyornis_Character_BP_C_Finish_Attack_Params params;
	params.forceFinish = forceFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions
// ()

void AIchthyornis_Character_BP_C::On_DeadPrey_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions");

	AIchthyornis_Character_BP_C_On_DeadPrey_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions
// ()

void AIchthyornis_Character_BP_C::Going_Back_to_Owner_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions");

	AIchthyornis_Character_BP_C_Going_Back_to_Owner_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions
// ()

void AIchthyornis_Character_BP_C::DivingActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions");

	AIchthyornis_Character_BP_C_DivingActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed");

	AIchthyornis_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        killedCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Improve_HarvestingComponent_for_Dragged_Character(class APrimalCharacter* killedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character");

	AIchthyornis_Character_BP_C_Improve_HarvestingComponent_for_Dragged_Character_Params params;
	params.killedCharacter = killedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent");

	AIchthyornis_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack
// ()
// Parameters:
// class APrimalCharacter*        NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SetTargetForLaunchedAttack(class APrimalCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack");

	AIchthyornis_Character_BP_C_SetTargetForLaunchedAttack_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack
// ()
// Parameters:
// class APrimalCharacter*        launchedTarget                 (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DoLaunchAttack(class APrimalCharacter* launchedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack");

	AIchthyornis_Character_BP_C_DoLaunchAttack_Params params;
	params.launchedTarget = launchedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder");

	AIchthyornis_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter
// ()
// Parameters:
// class APawn*                   Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::GetOwnerCharacter(class APawn** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter");

	AIchthyornis_Character_BP_C_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression
// ()
// Parameters:
// TEnumAsByte<EDinoTamedOrder>   overrideTamedMode              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useTameModeOverride            (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Clear_FocusAndAggression(TEnumAsByte<EDinoTamedOrder> overrideTamedMode, bool useTameModeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression");

	AIchthyornis_Character_BP_C_Clear_FocusAndAggression_Params params;
	params.overrideTamedMode = overrideTamedMode;
	params.useTameModeOverride = useTameModeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack
// ()

void AIchthyornis_Character_BP_C::Start_LaunchAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack");

	AIchthyornis_Character_BP_C_Start_LaunchAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw
// ()
// Parameters:
// bool                           disableLaunchVariable          (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Clear_Launched_Throw(bool disableLaunchVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw");

	AIchthyornis_Character_BP_C_Clear_Launched_Throw_Params params;
	params.disableLaunchVariable = disableLaunchVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag
// ()
// Parameters:
// class APrimalCharacter**       characterToDrag                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIchthyornis_Character_BP_C::BPCanAutodrag(class APrimalCharacter** characterToDrag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag");

	AIchthyornis_Character_BP_C_BPCanAutodrag_Params params;
	params.characterToDrag = characterToDrag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded
// ()

void AIchthyornis_Character_BP_C::SpawnWaterEffectsIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded");

	AIchthyornis_Character_BP_C_SpawnWaterEffectsIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag
// ()

void AIchthyornis_Character_BP_C::UpdateDamageFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag");

	AIchthyornis_Character_BP_C_UpdateDamageFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious
// ()
// Parameters:
// class APrimalCharacter*        Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isWaterOrAmph                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Is_Water_Dino_or_Swimming_Amphibious(class APrimalCharacter* Pawn, bool* isWaterOrAmph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious");

	AIchthyornis_Character_BP_C_Is_Water_Dino_or_Swimming_Amphibious_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isWaterOrAmph != nullptr)
		*isWaterOrAmph = params.isWaterOrAmph;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Can_StealFromCharacter(class APrimalCharacter* Character, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter");

	AIchthyornis_Character_BP_C_Can_StealFromCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached
// ()

void AIchthyornis_Character_BP_C::OnOwnerReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached");

	AIchthyornis_Character_BP_C_OnOwnerReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions
// ()

void AIchthyornis_Character_BP_C::PreDiveDownRotationActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions");

	AIchthyornis_Character_BP_C_PreDiveDownRotationActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp
// ()

void AIchthyornis_Character_BP_C::UseEmergencyDiveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp");

	AIchthyornis_Character_BP_C_UseEmergencyDiveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CanUseBiteAttack(class APrimalCharacter* Target, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack");

	AIchthyornis_Character_BP_C_CanUseBiteAttack_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector*                LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched");

	AIchthyornis_Character_BP_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped
// ()

void AIchthyornis_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped");

	AIchthyornis_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay
// ()
// Parameters:
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::GetDiveDownDelay(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay");

	AIchthyornis_Character_BP_C_GetDiveDownDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify");

	AIchthyornis_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter
// ()
// Parameters:
// bool                           stopTimerServer                (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::OnClearCarriedCharacter(bool stopTimerServer, class APrimalCharacter* PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter");

	AIchthyornis_Character_BP_C_OnClearCarriedCharacter_Params params;
	params.stopTimerServer = stopTimerServer;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canDoAttack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::STATIC_Can_Use_Wild_Dive(class APrimalCharacter* Target, bool* canDoAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive");

	AIchthyornis_Character_BP_C_Can_Use_Wild_Dive_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canDoAttack != nullptr)
		*canDoAttack = params.canDoAttack;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canUseAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CanUseDiveAttack(class APrimalCharacter* Target, bool* canUseAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack");

	AIchthyornis_Character_BP_C_CanUseDiveAttack_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canUseAttack != nullptr)
		*canUseAttack = params.canUseAttack;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage
// (NetRequest, Exec, NetResponse, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::ApplyChewDamage(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage");

	AIchthyornis_Character_BP_C_ApplyChewDamage_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState
// ()
// Parameters:
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceSetState                  (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SetDivingState(int NewState, bool forceSetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState");

	AIchthyornis_Character_BP_C_SetDivingState_Params params;
	params.NewState = NewState;
	params.forceSetState = forceSetState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus
// ()

void AIchthyornis_Character_BP_C::OnRep_divingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus");

	AIchthyornis_Character_BP_C_OnRep_divingStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino
// ()

void AIchthyornis_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino");

	AIchthyornis_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           couldSteal                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::UnequipOrSteal(class APrimalCharacter* Character, bool* couldSteal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal");

	AIchthyornis_Character_BP_C_UnequipOrSteal_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldSteal != nullptr)
		*couldSteal = params.couldSteal;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           changeToNextMode               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           onlyUpdateOffsets              (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::ChangeHuntingMode(int NewMode, bool changeToNextMode, bool onlyUpdateOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode");

	AIchthyornis_Character_BP_C_ChangeHuntingMode_Params params;
	params.NewMode = NewMode;
	params.changeToNextMode = changeToNextMode;
	params.onlyUpdateOffsets = onlyUpdateOffsets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack
// ()
// Parameters:
// class APrimalCharacter*        PrimalCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CanUseGrabAttack(class APrimalCharacter* PrimalCharacter, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack");

	AIchthyornis_Character_BP_C_CanUseGrabAttack_Params params;
	params.PrimalCharacter = PrimalCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon
// (NetReliable, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::STATIC_Remove_Weapon(class APrimalCharacter* Owner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon");

	AIchthyornis_Character_BP_C_Remove_Weapon_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet
// ()
// Parameters:
// class APrimalCharacter*        Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Remove_Helmet(class APrimalCharacter* Owner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet");

	AIchthyornis_Character_BP_C_Remove_Helmet_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFoodItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canSteal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CanStealItem(class UPrimalItem* Item, bool isFoodItem, bool* canSteal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem");

	AIchthyornis_Character_BP_C_CanStealItem_Params params;
	params.Item = Item;
	params.isFoodItem = isFoodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSteal != nullptr)
		*canSteal = params.canSteal;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        characterToStealFrom           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem*             itemToSteal                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DoStealItem(class APrimalCharacter* characterToStealFrom, class UPrimalItem* itemToSteal, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem");

	AIchthyornis_Character_BP_C_DoStealItem_Params params;
	params.characterToStealFrom = characterToStealFrom;
	params.itemToSteal = itemToSteal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumItems                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           stoleFood                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::TryToStealFoodItem(class APrimalCharacter* Character, int NumItems, bool* stoleFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem");

	AIchthyornis_Character_BP_C_TryToStealFoodItem_Params params;
	params.Character = Character;
	params.NumItems = NumItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (stoleFood != nullptr)
		*stoleFood = params.stoleFood;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage");

	AIchthyornis_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions
// ()

void AIchthyornis_Character_BP_C::CarryingLivePreyActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions");

	AIchthyornis_Character_BP_C_CarryingLivePreyActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point
// ()
// Parameters:
// struct FVector                 offsetFromCurrentLocation      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Rotate_Z_To_Point(const struct FVector& offsetFromCurrentLocation, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point");

	AIchthyornis_Character_BP_C_Rotate_Z_To_Point_Params params;
	params.offsetFromCurrentLocation = offsetFromCurrentLocation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter
// ()

void AIchthyornis_Character_BP_C::OnCarriedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter");

	AIchthyornis_Character_BP_C_OnCarriedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player
// ()

void AIchthyornis_Character_BP_C::Start_Follow_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player");

	AIchthyornis_Character_BP_C_Start_Follow_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  K2Node_Select_ReturnValue      (OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AIchthyornis_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale, struct FColor* K2Node_Select_ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD");

	AIchthyornis_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (K2Node_Select_ReturnValue != nullptr)
		*K2Node_Select_ReturnValue = params.K2Node_Select_ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AIchthyornis_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries");

	AIchthyornis_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIchthyornis_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse");

	AIchthyornis_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIchthyornis_Character_BP_C::BPCanDragCharacter(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter");

	AIchthyornis_Character_BP_C_BPCanDragCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, Exec, Native, Event, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIchthyornis_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage");

	AIchthyornis_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer
// ()

void AIchthyornis_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer");

	AIchthyornis_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter");

	AIchthyornis_Character_BP_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse
// ()
// Parameters:
// float                          immersionDepth                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Calculate_Dive_Up_Impulse(float immersionDepth, struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse");

	AIchthyornis_Character_BP_C_Calculate_Dive_Up_Impulse_Params params;
	params.immersionDepth = immersionDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impulse != nullptr)
		*Impulse = params.Impulse;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::CanGrabPawn(class APawn* Pawn, bool* CanGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn");

	AIchthyornis_Character_BP_C_CanGrabPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanGrab != nullptr)
		*CanGrab = params.CanGrab;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Rotate_Z_to_Target(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target");

	AIchthyornis_Character_BP_C_Rotate_Z_to_Target_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Calculate_DiveDown_Impulse(struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse");

	AIchthyornis_Character_BP_C_Calculate_DiveDown_Impulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impulse != nullptr)
		*Impulse = params.Impulse;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canDoAttack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Can_UseRegularDive(class APrimalCharacter* Target, bool* canDoAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive");

	AIchthyornis_Character_BP_C_Can_UseRegularDive_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canDoAttack != nullptr)
		*canDoAttack = params.canDoAttack;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack
// (NetReliable, Native, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack");

	AIchthyornis_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIchthyornis_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack");

	AIchthyornis_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UserConstructionScript
// ()

void AIchthyornis_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UserConstructionScript");

	AIchthyornis_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc
// ()

void AIchthyornis_Character_BP_C::RotationToTarget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc");

	AIchthyornis_Character_BP_C_RotationToTarget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc
// ()

void AIchthyornis_Character_BP_C::RotationToTarget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc");

	AIchthyornis_Character_BP_C_RotationToTarget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack
// ()

void AIchthyornis_Character_BP_C::DiveAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack");

	AIchthyornis_Character_BP_C_DiveAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions
// ()

void AIchthyornis_Character_BP_C::PreDiveDownActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions");

	AIchthyornis_Character_BP_C_PreDiveDownActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp
// ()

void AIchthyornis_Character_BP_C::StartDiveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp");

	AIchthyornis_Character_BP_C_StartDiveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown
// ()

void AIchthyornis_Character_BP_C::FinishDiveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown");

	AIchthyornis_Character_BP_C_FinishDiveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions
// ()

void AIchthyornis_Character_BP_C::PreDiveUpActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions");

	AIchthyornis_Character_BP_C_PreDiveUpActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions
// ()

void AIchthyornis_Character_BP_C::PostDiveUpActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions");

	AIchthyornis_Character_BP_C_PostDiveUpActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo
// ()
// Parameters:
// struct FRotator                TargetRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                initialRotation                (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, float Time, const struct FRotator& initialRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo");

	AIchthyornis_Character_BP_C_SlowlyRotateZTo_Params params;
	params.TargetRotation = TargetRotation;
	params.Time = Time;
	params.initialRotation = initialRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dropDragged                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropCarried                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           restoreFollowingVariables      (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DropCarriedAfterTime(float Time, bool dropDragged, bool DropCarried, bool restoreFollowingVariables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime");

	AIchthyornis_Character_BP_C_DropCarriedAfterTime_Params params;
	params.Time = Time;
	params.dropDragged = dropDragged;
	params.DropCarried = DropCarried;
	params.restoreFollowingVariables = restoreFollowingVariables;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarried
// ()
// Parameters:
// bool                           dropDragged                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DropCarried                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           restoreFollowingVariables      (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DropCarried(bool dropDragged, bool DropCarried, bool restoreFollowingVariables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarried");

	AIchthyornis_Character_BP_C_DropCarried_Params params;
	params.dropDragged = dropDragged;
	params.DropCarried = DropCarried;
	params.restoreFollowingVariables = restoreFollowingVariables;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles
// ()

void AIchthyornis_Character_BP_C::SpawnWaterParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles");

	AIchthyornis_Character_BP_C_SpawnWaterParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AIchthyornis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast
// ()
// Parameters:
// struct FVector                 beginning                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DebugTrajectory_Multicast(const struct FVector& beginning, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast");

	AIchthyornis_Character_BP_C_DebugTrajectory_Multicast_Params params;
	params.beginning = beginning;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory
// ()
// Parameters:
// struct FVector                 beginning                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DebugTrajectory(const struct FVector& beginning, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory");

	AIchthyornis_Character_BP_C_DebugTrajectory_Params params;
	params.beginning = beginning;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp
// ()

void AIchthyornis_Character_BP_C::FinishDiveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp");

	AIchthyornis_Character_BP_C_FinishDiveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects
// ()

void AIchthyornis_Character_BP_C::CheckForWaterEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects");

	AIchthyornis_Character_BP_C_CheckForWaterEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast
// ()

void AIchthyornis_Character_BP_C::ShowBag_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast");

	AIchthyornis_Character_BP_C_ShowBag_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast
// ()

void AIchthyornis_Character_BP_C::HideBag_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast");

	AIchthyornis_Character_BP_C_HideBag_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag
// ()
// Parameters:
// bool                           IsDiving                       (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::ShowBag(bool IsDiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag");

	AIchthyornis_Character_BP_C_ShowBag_Params params;
	params.IsDiving = IsDiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim
// ()

void AIchthyornis_Character_BP_C::EnablePendingEatAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim");

	AIchthyornis_Character_BP_C_EnablePendingEatAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::HarvestPreyAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay");

	AIchthyornis_Character_BP_C_HarvestPreyAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::SpawnVitaminEffects_Multicast(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast");

	AIchthyornis_Character_BP_C_SpawnVitaminEffects_Multicast_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast
// ()
// Parameters:
// struct FVector                 beginning                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DebugTrajectorySphere_Multicast(const struct FVector& beginning, const struct FVector& End, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast");

	AIchthyornis_Character_BP_C_DebugTrajectorySphere_Multicast_Params params;
	params.beginning = beginning;
	params.End = End;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere
// ()
// Parameters:
// struct FVector                 beginning                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::DebugTrajectorySphere(const struct FVector& beginning, const struct FVector& End, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere");

	AIchthyornis_Character_BP_C_DebugTrajectorySphere_Params params;
	params.beginning = beginning;
	params.End = End;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis
// ()

void AIchthyornis_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis");

	AIchthyornis_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay
// ()

void AIchthyornis_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay");

	AIchthyornis_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables
// ()

void AIchthyornis_Character_BP_C::InitializeLandingVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables");

	AIchthyornis_Character_BP_C_InitializeLandingVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::Debug_TorporAfterTime(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime");

	AIchthyornis_Character_BP_C_Debug_TorporAfterTime_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFailedLaunch                 (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::GoBackToOwnerAfterDelay(float Delay, bool isFailedLaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay");

	AIchthyornis_Character_BP_C_GoBackToOwnerAfterDelay_Params params;
	params.Delay = Delay;
	params.isFailedLaunch = isFailedLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIchthyornis_Character_BP_C::ExecuteUbergraph_Ichthyornis_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP");

	AIchthyornis_Character_BP_C_ExecuteUbergraph_Ichthyornis_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
