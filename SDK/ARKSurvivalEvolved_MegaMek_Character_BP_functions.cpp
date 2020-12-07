// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnRefreshColorization
// ()
// Parameters:
// TArray<struct FLinearColor>    Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMegaMek_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnRefreshColorization");

	AMegaMek_Character_BP_C_BPOnRefreshColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegaMek_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPCanCryo");

	AMegaMek_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveTick");

	AMegaMek_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnDinoCheat");

	AMegaMek_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegaMek_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");

	AMegaMek_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegaMek_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPHandleControllerInitiatedAttack");

	AMegaMek_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetMegaMekBlinkProgress
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::SetMegaMekBlinkProgress(float Value, bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetMegaMekBlinkProgress");

	AMegaMek_Character_BP_C_SetMegaMekBlinkProgress_Params params;
	params.Value = Value;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.GetTurnInPlaceSpeed
// ()
// Parameters:
// float*                         DefaultSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          newSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::GetTurnInPlaceSpeed(float* DefaultSpeed, float* newSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.GetTurnInPlaceSpeed");

	AMegaMek_Character_BP_C_GetTurnInPlaceSpeed_Params params;
	params.DefaultSpeed = DefaultSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newSpeed != nullptr)
		*newSpeed = params.newSpeed;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.AllowedToAutoRepair
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CooldownTimeRemaining          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::AllowedToAutoRepair(bool* Allowed, float* CooldownTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.AllowedToAutoRepair");

	AMegaMek_Character_BP_C_AllowedToAutoRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
	if (CooldownTimeRemaining != nullptr)
		*CooldownTimeRemaining = params.CooldownTimeRemaining;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AMegaMek_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideHurtAnim");

	AMegaMek_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMegaMek_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AMegaMek_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegaMek_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPAdjustDamage");

	AMegaMek_Character_BP_C_BPAdjustDamage_Params params;
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


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.UserConstructionScript
// ()

void AMegaMek_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.UserConstructionScript");

	AMegaMek_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__FinishedFunc
// ()

void AMegaMek_Character_BP_C::MegaMekBlinkIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__FinishedFunc");

	AMegaMek_Character_BP_C_MegaMekBlinkIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__UpdateFunc
// ()

void AMegaMek_Character_BP_C::MegaMekBlinkIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__UpdateFunc");

	AMegaMek_Character_BP_C_MegaMekBlinkIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetStunned
// ()
// Parameters:
// float                          StunDuration                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::SetStunned(float StunDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetStunned");

	AMegaMek_Character_BP_C_SetStunned_Params params;
	params.StunDuration = StunDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetForceKill
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::SetForceKill(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetForceKill");

	AMegaMek_Character_BP_C_SetForceKill_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveBeginPlay
// ()

void AMegaMek_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveBeginPlay");

	AMegaMek_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiReplayIntro
// ()

void AMegaMek_Character_BP_C::MultiReplayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiReplayIntro");

	AMegaMek_Character_BP_C_MultiReplayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiSetBlinkProgress
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::MultiSetBlinkProgress(float Value, bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiSetBlinkProgress");

	AMegaMek_Character_BP_C_MultiSetBlinkProgress_Params params;
	params.Value = Value;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ClientNotifySelfDestruct
// ()

void AMegaMek_Character_BP_C::ClientNotifySelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.ClientNotifySelfDestruct");

	AMegaMek_Character_BP_C_ClientNotifySelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestructNow
// ()

void AMegaMek_Character_BP_C::StartSelfDestructNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestructNow");

	AMegaMek_Character_BP_C_StartSelfDestructNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestruct
// ()

void AMegaMek_Character_BP_C::StartSelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestruct");

	AMegaMek_Character_BP_C_StartSelfDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ExecuteUbergraph_MegaMek_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegaMek_Character_BP_C::ExecuteUbergraph_MegaMek_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegaMek_Character_BP.MegaMek_Character_BP_C.ExecuteUbergraph_MegaMek_Character_BP");

	AMegaMek_Character_BP_C_ExecuteUbergraph_MegaMek_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
