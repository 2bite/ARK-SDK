// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpino_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanAttack");

	ASpino_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spino_Character_BP.Spino_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.BPDoAttack");

	ASpino_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.CanSwitchStances
// ()
// Parameters:
// bool                           isBiped                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSwitch                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::CanSwitchStances(bool isBiped, bool* CanSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.CanSwitchStances");

	ASpino_Character_BP_C_CanSwitchStances_Params params;
	params.isBiped = isBiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSwitch != nullptr)
		*CanSwitch = params.CanSwitch;
}


// Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpino_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanRiderAttack");

	ASpino_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spino_Character_BP.Spino_Character_BP_C.GetStanceSwitchAnim
// ()
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::GetStanceSwitchAnim(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.GetStanceSwitchAnim");

	ASpino_Character_BP_C_GetStanceSwitchAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;
}


// Function Spino_Character_BP.Spino_Character_BP_C.SS_SetCurrentStance
// ()
// Parameters:
// bool                           isBiped                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCooldown                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::SS_SetCurrentStance(bool isBiped, bool bUseCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.SS_SetCurrentStance");

	ASpino_Character_BP_C_SS_SetCurrentStance_Params params;
	params.isBiped = isBiped;
	params.bUseCooldown = bUseCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.ToggleStance
// ()

void ASpino_Character_BP_C::ToggleStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.ToggleStance");

	ASpino_Character_BP_C_ToggleStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.BPTimerServer
// ()

void ASpino_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.BPTimerServer");

	ASpino_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.PreInit_SwitchStance
// ()

void ASpino_Character_BP_C::PreInit_SwitchStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.PreInit_SwitchStance");

	ASpino_Character_BP_C_PreInit_SwitchStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* PrevCustomMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.K2_OnMovementModeChanged");

	ASpino_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.newMovementMode = newMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.GetDefaultDino
// ()
// Parameters:
// class ASpino_Character_BP_C*   Dino                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::GetDefaultDino(class ASpino_Character_BP_C** Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.GetDefaultDino");

	ASpino_Character_BP_C_GetDefaultDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dino != nullptr)
		*Dino = params.Dino;
}


// Function Spino_Character_BP.Spino_Character_BP_C.UpdateMoveSpeed
// ()

void ASpino_Character_BP_C::UpdateMoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.UpdateMoveSpeed");

	ASpino_Character_BP_C_UpdateMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.UpdateStance
// ()

void ASpino_Character_BP_C::UpdateStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.UpdateStance");

	ASpino_Character_BP_C_UpdateStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.OnRep_bIsBiped
// ()

void ASpino_Character_BP_C::OnRep_bIsBiped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.OnRep_bIsBiped");

	ASpino_Character_BP_C_OnRep_bIsBiped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.CS_Set Biped State
// ()
// Parameters:
// bool                           isBiped                        (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::CS_Set_Biped_State(bool isBiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.CS_Set Biped State");

	ASpino_Character_BP_C_CS_Set_Biped_State_Params params;
	params.isBiped = isBiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.UserConstructionScript
// ()

void ASpino_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.UserConstructionScript");

	ASpino_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.SS_RequestStanceSwitch
// ()

void ASpino_Character_BP_C::SS_RequestStanceSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.SS_RequestStanceSwitch");

	ASpino_Character_BP_C_SS_RequestStanceSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.StanceSwitch_Delay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::StanceSwitch_Delay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.StanceSwitch_Delay");

	ASpino_Character_BP_C_StanceSwitch_Delay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorBeginOverlap");

	ASpino_Character_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorEndOverlap");

	ASpino_Character_BP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.Multi_UpdateBuffTime
// ()
// Parameters:
// bool                           bIsActive                      (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::Multi_UpdateBuffTime(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.Multi_UpdateBuffTime");

	ASpino_Character_BP_C_Multi_UpdateBuffTime_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.AdditiveRoar
// ()

void ASpino_Character_BP_C::AdditiveRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.AdditiveRoar");

	ASpino_Character_BP_C_AdditiveRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_Character_BP.Spino_Character_BP_C.ExecuteUbergraph_Spino_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_Character_BP_C::ExecuteUbergraph_Spino_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_Character_BP.Spino_Character_BP_C.ExecuteUbergraph_Spino_Character_BP");

	ASpino_Character_BP_C_ExecuteUbergraph_Spino_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
