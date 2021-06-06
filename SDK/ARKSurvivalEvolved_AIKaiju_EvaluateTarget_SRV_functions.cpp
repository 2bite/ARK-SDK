// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AIKaiju_EvaluateTarget_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK
// ()

void UAIKaiju_EvaluateTarget_SRV_C::MaybeLiqBombTowardsDK()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK");

	UAIKaiju_EvaluateTarget_SRV_C_MaybeLiqBombTowardsDK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive
// ()
// Parameters:
// bool                           IsPassive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::IsTamedAndPassive(bool* IsPassive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive");

	UAIKaiju_EvaluateTarget_SRV_C_IsTamedAndPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPassive != nullptr)
		*IsPassive = params.IsPassive;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget
// ()

void UAIKaiju_EvaluateTarget_SRV_C::ChooseLeapTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget");

	UAIKaiju_EvaluateTarget_SRV_C_ChooseLeapTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor
// ()
// Parameters:
// TArray<class AActor*>          EnemyList                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  HighestPriTarget               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::GetHighestPriorityActor(TArray<class AActor*>* EnemyList, class AActor** HighestPriTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor");

	UAIKaiju_EvaluateTarget_SRV_C_GetHighestPriorityActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyList != nullptr)
		*EnemyList = params.EnemyList;
	if (HighestPriTarget != nullptr)
		*HighestPriTarget = params.HighestPriTarget;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget
// ()
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::AllowedToTarget(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget");

	UAIKaiju_EvaluateTarget_SRV_C_AllowedToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies
// ()

void UAIKaiju_EvaluateTarget_SRV_C::ChooseQuadWithMostEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies");

	UAIKaiju_EvaluateTarget_SRV_C_ChooseQuadWithMostEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget
// ()

void UAIKaiju_EvaluateTarget_SRV_C::MaybeAcquireClusterTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget");

	UAIKaiju_EvaluateTarget_SRV_C_MaybeAcquireClusterTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff
// ()

void UAIKaiju_EvaluateTarget_SRV_C::MaybeShakePlayersOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff");

	UAIKaiju_EvaluateTarget_SRV_C_MaybeShakePlayersOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy
// ()

void UAIKaiju_EvaluateTarget_SRV_C::ChooseCloseQuadrantWithMostEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy");

	UAIKaiju_EvaluateTarget_SRV_C_ChooseCloseQuadrantWithMostEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray
// ()
// Parameters:
// class AActor*                  Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::AddToCloseQuadrantArray(class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray");

	UAIKaiju_EvaluateTarget_SRV_C_AddToCloseQuadrantArray_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon
// ()
// Parameters:
// class UObject*                 Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsingRanged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::IsAttackerUsingRangedWeapon(class UObject* Attacker, bool* UsingRanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon");

	UAIKaiju_EvaluateTarget_SRV_C_IsAttackerUsingRangedWeapon_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsingRanged != nullptr)
		*UsingRanged = params.UsingRanged;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting
// ()

void UAIKaiju_EvaluateTarget_SRV_C::ClearTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting");

	UAIKaiju_EvaluateTarget_SRV_C_ClearTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::TargetAcquire(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire");

	UAIKaiju_EvaluateTarget_SRV_C_TargetAcquire_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation");

	UAIKaiju_EvaluateTarget_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick");

	UAIKaiju_EvaluateTarget_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIKaiju_EvaluateTarget_SRV_C::ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV");

	UAIKaiju_EvaluateTarget_SRV_C_ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
