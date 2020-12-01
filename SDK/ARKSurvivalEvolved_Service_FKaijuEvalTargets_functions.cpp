// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_FKaijuEvalTargets_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget
// ()
// Parameters:
// bool                           ShouldRunSecondaryAttackLogic  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::MaybeFindNewAggroTarget(bool* ShouldRunSecondaryAttackLogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget");

	UService_FKaijuEvalTargets_C_MaybeFindNewAggroTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldRunSecondaryAttackLogic != nullptr)
		*ShouldRunSecondaryAttackLogic = params.ShouldRunSecondaryAttackLogic;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive
// ()
// Parameters:
// bool                           IsPassive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::IsTamedAndPassive(bool* IsPassive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive");

	UService_FKaijuEvalTargets_C_IsTamedAndPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPassive != nullptr)
		*IsPassive = params.IsPassive;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets
// ()

void UService_FKaijuEvalTargets_C::ClearTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets");

	UService_FKaijuEvalTargets_C_ClearTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff
// ()

void UService_FKaijuEvalTargets_C::MaybeShakePlayersOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff");

	UService_FKaijuEvalTargets_C_MaybeShakePlayersOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack
// ()

void UService_FKaijuEvalTargets_C::MaybeFlyerAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack");

	UService_FKaijuEvalTargets_C_MaybeFlyerAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab
// ()

void UService_FKaijuEvalTargets_C::MaybeAttackGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab");

	UService_FKaijuEvalTargets_C_MaybeAttackGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot
// ()

void UService_FKaijuEvalTargets_C::MaybeAttackRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot");

	UService_FKaijuEvalTargets_C_MaybeAttackRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies
// ()

void UService_FKaijuEvalTargets_C::ChooseQuadWithMostEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies");

	UService_FKaijuEvalTargets_C_ChooseQuadWithMostEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays
// ()

void UService_FKaijuEvalTargets_C::ClearArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays");

	UService_FKaijuEvalTargets_C_ClearArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants
// ()
// Parameters:
// class AActor*                  Attacker                       (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::SetQuadrants(class AActor* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants");

	UService_FKaijuEvalTargets_C_SetQuadrants_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire
// ()
// Parameters:
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::TargetAcquire(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire");

	UService_FKaijuEvalTargets_C_TargetAcquire_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation");

	UService_FKaijuEvalTargets_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick");

	UService_FKaijuEvalTargets_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_FKaijuEvalTargets_C::ExecuteUbergraph_Service_FKaijuEvalTargets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets");

	UService_FKaijuEvalTargets_C_ExecuteUbergraph_Service_FKaijuEvalTargets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
