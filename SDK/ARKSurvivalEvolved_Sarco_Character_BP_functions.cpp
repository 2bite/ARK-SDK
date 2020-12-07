// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sarco_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASarco_Character_BP_C::BPCanBeBaseForCharacter(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter");

	ASarco_Character_BP_C_BPCanBeBaseForCharacter_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASarco_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale");

	ASarco_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse
// ()

void ASarco_Character_BP_C::TriggerLungeImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse");

	ASarco_Character_BP_C_TriggerLungeImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged");

	ASarco_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter** BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn");

	ASarco_Character_BP_C_BPNotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ASarco_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	ASarco_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASarco_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha");

	ASarco_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter
// ()
// Parameters:
// class APrimalCharacter**       checkCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASarco_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter** checkCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter");

	ASarco_Character_BP_C_BPAllowCarryCharacter_Params params;
	params.checkCharacter = checkCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::Compute_Allow_Carry(class APrimalCharacter* Target, bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry");

	ASarco_Character_BP_C_Compute_Allow_Carry_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASarco_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate");

	ASarco_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASarco_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex");

	ASarco_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex
// ()
// Parameters:
// int                            AttackIndexIn                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttackIndexOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::ComputeAttackIndex(int AttackIndexIn, int* AttackIndexOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex");

	ASarco_Character_BP_C_ComputeAttackIndex_Params params;
	params.AttackIndexIn = AttackIndexIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackIndexOut != nullptr)
		*AttackIndexOut = params.AttackIndexOut;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.UserConstructionScript
// ()

void ASarco_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.UserConstructionScript");

	ASarco_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_67
// ()

void ASarco_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_67()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_67");

	ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_67_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_66
// ()

void ASarco_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_66()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_66");

	ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_66_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack
// ()

void ASarco_Character_BP_C::AnimNotify_TurnForAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack");

	ASarco_Character_BP_C_AnimNotify_TurnForAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack
// ()

void ASarco_Character_BP_C::RotateAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack");

	ASarco_Character_BP_C_RotateAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished
// ()

void ASarco_Character_BP_C::AnimNotify_AttackTurnFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished");

	ASarco_Character_BP_C_AnimNotify_AttackTurnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge
// ()

void ASarco_Character_BP_C::AnimNotify_Lunge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge");

	ASarco_Character_BP_C_AnimNotify_Lunge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge
// ()
// Parameters:
// class AActor*                  LungeTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::RequestLunge(class AActor* LungeTarget, float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge");

	ASarco_Character_BP_C_RequestLunge_Params params;
	params.LungeTarget = LungeTarget;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair
// ()

void ASarco_Character_BP_C::UpdateCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair");

	ASarco_Character_BP_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll
// ()

void ASarco_Character_BP_C::AnimNotify_Roll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll");

	ASarco_Character_BP_C_AnimNotify_Roll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_C::ExecuteUbergraph_Sarco_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP");

	ASarco_Character_BP_C_ExecuteUbergraph_Sarco_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
