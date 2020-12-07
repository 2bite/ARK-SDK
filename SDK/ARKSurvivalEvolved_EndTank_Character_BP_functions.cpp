// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateNoTargetRollState
// ()

void AEndTank_Character_BP_C::UpdateNoTargetRollState()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateNoTargetRollState");

	AEndTank_Character_BP_C_UpdateNoTargetRollState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BPTimerServer
// ()

void AEndTank_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BPTimerServer");

	AEndTank_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndTank_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BPAdjustDamage");

	AEndTank_Character_BP_C_BPAdjustDamage_Params params;
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


// Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateDamageFX
// ()

void AEndTank_Character_BP_C::UpdateDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateDamageFX");

	AEndTank_Character_BP_C_UpdateDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndTank_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BPNotifySetRider");

	AEndTank_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.OnRep_IsRolled
// ()

void AEndTank_Character_BP_C::OnRep_IsRolled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.OnRep_IsRolled");

	AEndTank_Character_BP_C_OnRep_IsRolled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AEndTank_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BPDoAttack");

	AEndTank_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.CheckAgainstRoll
// ()
// Parameters:
// int                            Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndTank_Character_BP_C::CheckAgainstRoll(int Selection, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.CheckAgainstRoll");

	AEndTank_Character_BP_C_CheckAgainstRoll_Params params;
	params.Selection = Selection;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndTank_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanAttack");

	AEndTank_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndTank_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanRiderAttack");

	AEndTank_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.UserConstructionScript
// ()

void AEndTank_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.UserConstructionScript");

	AEndTank_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.ReceiveBeginPlay
// ()

void AEndTank_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.ReceiveBeginPlay");

	AEndTank_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndTank_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.OnDied_Event");

	AEndTank_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.AnimNotify_ActivateEnergy
// ()

void AEndTank_Character_BP_C::AnimNotify_ActivateEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.AnimNotify_ActivateEnergy");

	AEndTank_Character_BP_C_AnimNotify_ActivateEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.RollUp
// ()

void AEndTank_Character_BP_C::RollUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.RollUp");

	AEndTank_Character_BP_C_RollUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.Unroll
// ()

void AEndTank_Character_BP_C::Unroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.Unroll");

	AEndTank_Character_BP_C_Unroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.SetRolledSettings
// ()

void AEndTank_Character_BP_C::SetRolledSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.SetRolledSettings");

	AEndTank_Character_BP_C_SetRolledSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.SetUnrolledSettings
// ()

void AEndTank_Character_BP_C::SetUnrolledSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.SetUnrolledSettings");

	AEndTank_Character_BP_C_SetUnrolledSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.Multi_UpdateDamageEffects
// ()

void AEndTank_Character_BP_C::Multi_UpdateDamageEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.Multi_UpdateDamageEffects");

	AEndTank_Character_BP_C_Multi_UpdateDamageEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_Character_BP.EndTank_Character_BP_C.ExecuteUbergraph_EndTank_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndTank_Character_BP_C::ExecuteUbergraph_EndTank_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_Character_BP.EndTank_Character_BP_C.ExecuteUbergraph_EndTank_Character_BP");

	AEndTank_Character_BP_C_ExecuteUbergraph_EndTank_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
