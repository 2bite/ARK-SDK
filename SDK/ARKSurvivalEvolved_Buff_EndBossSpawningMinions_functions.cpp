// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossSpawningMinions_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateNumToSpawn
// ()
// Parameters:
// class AEndBoss_Character_C*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::UpdateNumToSpawn(class AEndBoss_Character_C* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateNumToSpawn");

	ABuff_EndBossSpawningMinions_C_UpdateNumToSpawn_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_EndBossSpawningMinions_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BuffAdjustDamage");

	ABuff_EndBossSpawningMinions_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveDestroyed
// ()

void ABuff_EndBossSpawningMinions_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveDestroyed");

	ABuff_EndBossSpawningMinions_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.GetOwningBoss
// ()
// Parameters:
// class AEndBoss_Character_C*    EndBoss                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::GetOwningBoss(class AEndBoss_Character_C** EndBoss)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.GetOwningBoss");

	ABuff_EndBossSpawningMinions_C_GetOwningBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndBoss != nullptr)
		*EndBoss = params.EndBoss;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UserConstructionScript
// ()

void ABuff_EndBossSpawningMinions_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UserConstructionScript");

	ABuff_EndBossSpawningMinions_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPActivated");

	ABuff_EndBossSpawningMinions_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.BPDeactivated");

	ABuff_EndBossSpawningMinions_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveBeginPlay
// ()

void ABuff_EndBossSpawningMinions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveBeginPlay");

	ABuff_EndBossSpawningMinions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateRemainingTime
// ()

void ABuff_EndBossSpawningMinions_C::UpdateRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.UpdateRemainingTime");

	ABuff_EndBossSpawningMinions_C_UpdateRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.SpawnMinions
// ()

void ABuff_EndBossSpawningMinions_C::SpawnMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.SpawnMinions");

	ABuff_EndBossSpawningMinions_C_SpawnMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ReceiveTick");

	ABuff_EndBossSpawningMinions_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.IncrementNumMinionsSpawned
// ()
// Parameters:
// bool                           IsDrone                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::IncrementNumMinionsSpawned(bool IsDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.IncrementNumMinionsSpawned");

	ABuff_EndBossSpawningMinions_C_IncrementNumMinionsSpawned_Params params;
	params.IsDrone = IsDrone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ExecuteUbergraph_Buff_EndBossSpawningMinions
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossSpawningMinions_C::ExecuteUbergraph_Buff_EndBossSpawningMinions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossSpawningMinions.Buff_EndBossSpawningMinions_C.ExecuteUbergraph_Buff_EndBossSpawningMinions");

	ABuff_EndBossSpawningMinions_C_ExecuteUbergraph_Buff_EndBossSpawningMinions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
