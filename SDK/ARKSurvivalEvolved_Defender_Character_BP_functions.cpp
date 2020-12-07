// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Defender_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Defender_Character_BP.Defender_Character_BP_C.UpdateNoTargetRollState
// ()

void ADefender_Character_BP_C::UpdateNoTargetRollState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.UpdateNoTargetRollState");

	ADefender_Character_BP_C_UpdateNoTargetRollState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BPTimerServer
// ()

void ADefender_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BPTimerServer");

	ADefender_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADefender_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BPAdjustDamage");

	ADefender_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Defender_Character_BP.Defender_Character_BP_C.UpdateDamageFX
// ()

void ADefender_Character_BP_C::UpdateDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.UpdateDamageFX");

	ADefender_Character_BP_C_UpdateDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BPNotifySetRider");

	ADefender_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.OnRep_IsRolled
// ()

void ADefender_Character_BP_C::OnRep_IsRolled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.OnRep_IsRolled");

	ADefender_Character_BP_C_OnRep_IsRolled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BPDoAttack");

	ADefender_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.CheckAgainstRoll
// ()
// Parameters:
// int                            Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADefender_Character_BP_C::CheckAgainstRoll(int Selection, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.CheckAgainstRoll");

	ADefender_Character_BP_C_CheckAgainstRoll_Params params;
	params.Selection = Selection;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADefender_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanAttack");

	ADefender_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADefender_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanRiderAttack");

	ADefender_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Defender_Character_BP.Defender_Character_BP_C.UserConstructionScript
// ()

void ADefender_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.UserConstructionScript");

	ADefender_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.ReceiveBeginPlay
// ()

void ADefender_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.ReceiveBeginPlay");

	ADefender_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.OnDied_Event");

	ADefender_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.AnimNotify_ActivateEnergy
// ()

void ADefender_Character_BP_C::AnimNotify_ActivateEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.AnimNotify_ActivateEnergy");

	ADefender_Character_BP_C_AnimNotify_ActivateEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.RollUp
// ()

void ADefender_Character_BP_C::RollUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.RollUp");

	ADefender_Character_BP_C_RollUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.Unroll
// ()

void ADefender_Character_BP_C::Unroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.Unroll");

	ADefender_Character_BP_C_Unroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.SetRolledSettings
// ()

void ADefender_Character_BP_C::SetRolledSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.SetRolledSettings");

	ADefender_Character_BP_C_SetRolledSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.SetUnrolledSettings
// ()

void ADefender_Character_BP_C::SetUnrolledSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.SetUnrolledSettings");

	ADefender_Character_BP_C_SetUnrolledSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.Multi_UpdateDamageEffects
// ()

void ADefender_Character_BP_C::Multi_UpdateDamageEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.Multi_UpdateDamageEffects");

	ADefender_Character_BP_C_Multi_UpdateDamageEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.ReceiveAnyDamage");

	ADefender_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.ResetAttackerPlayer
// ()

void ADefender_Character_BP_C::ResetAttackerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.ResetAttackerPlayer");

	ADefender_Character_BP_C_ResetAttackerPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Defender_Character_BP.Defender_Character_BP_C.ExecuteUbergraph_Defender_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefender_Character_BP_C::ExecuteUbergraph_Defender_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Defender_Character_BP.Defender_Character_BP_C.ExecuteUbergraph_Defender_Character_BP");

	ADefender_Character_BP_C_ExecuteUbergraph_Defender_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
