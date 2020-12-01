// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeathworm_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPIsHidden");

	ADeathworm_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeathworm_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPAdjustDamage");

	ADeathworm_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated
// ()

void ADeathworm_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerNonDedicated");

	ADeathworm_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer
// ()

void ADeathworm_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BPTimerServer");

	ADeathworm_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_C::Set_Death_Worm_CollisionState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.Set Death Worm CollisionState");

	ADeathworm_Character_BP_C_Set_Death_Worm_CollisionState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail
// ()

void ADeathworm_Character_BP_C::UpdateDeathwormTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.UpdateDeathwormTrail");

	ADeathworm_Character_BP_C_UpdateDeathwormTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState
// ()

void ADeathworm_Character_BP_C::RefreshDeathwormState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.RefreshDeathwormState");

	ADeathworm_Character_BP_C_RefreshDeathwormState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground
// ()

void ADeathworm_Character_BP_C::OnRep_isUnderground()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.OnRep_isUnderground");

	ADeathworm_Character_BP_C_OnRep_isUnderground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime
// ()
// Parameters:
// double                         Last_Time                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Time_Has_Passed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_C::CheckTime(double Last_Time, float Duration, bool* Time_Has_Passed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.CheckTime");

	ADeathworm_Character_BP_C_CheckTime_Params params;
	params.Last_Time = Last_Time;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time_Has_Passed != nullptr)
		*Time_Has_Passed = params.Time_Has_Passed;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up
// ()

void ADeathworm_Character_BP_C::Pop_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.Pop Up");

	ADeathworm_Character_BP_C_Pop_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn
// ()

void ADeathworm_Character_BP_C::DiveIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.DiveIn");

	ADeathworm_Character_BP_C_DiveIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeathworm_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.BlueprintCanAttack");

	ADeathworm_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript
// ()

void ADeathworm_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.UserConstructionScript");

	ADeathworm_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay
// ()

void ADeathworm_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.ReceiveBeginPlay");

	ADeathworm_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX
// ()
// Parameters:
// bool                           orientToGround                 (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetFromRoot                 (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_C::PlayDeathwormVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.PlayDeathwormVFX");

	ADeathworm_Character_BP_C_PlayDeathwormVFX_Params params;
	params.orientToGround = orientToGround;
	params.ParticleSystem = ParticleSystem;
	params.OffsetFromRoot = OffsetFromRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement
// ()

void ADeathworm_Character_BP_C::EnableUndergroundMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.EnableUndergroundMovement");

	ADeathworm_Character_BP_C_EnableUndergroundMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_C::ExecuteUbergraph_Deathworm_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP.Deathworm_Character_BP_C.ExecuteUbergraph_Deathworm_Character_BP");

	ADeathworm_Character_BP_C_ExecuteUbergraph_Deathworm_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
