// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuGetBestAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.CheckIfEnemy
// ()
// Parameters:
// class AActor*                  Enemy                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnemy                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuGetBestAttack_C::CheckIfEnemy(class AActor* Enemy, bool* IsEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.CheckIfEnemy");

	UTask_KingKaijuGetBestAttack_C_CheckIfEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnemy != nullptr)
		*IsEnemy = params.IsEnemy;
}


// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.GetBestAttackVsKaijus
// ()
// Parameters:
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuGetBestAttack_C::GetBestAttackVsKaijus(bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.GetBestAttackVsKaijus");

	UTask_KingKaijuGetBestAttack_C_GetBestAttackVsKaijus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuGetBestAttack_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ReceiveExecute");

	UTask_KingKaijuGetBestAttack_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ExecuteUbergraph_Task_KingKaijuGetBestAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuGetBestAttack_C::ExecuteUbergraph_Task_KingKaijuGetBestAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ExecuteUbergraph_Task_KingKaijuGetBestAttack");

	UTask_KingKaijuGetBestAttack_C_ExecuteUbergraph_Task_KingKaijuGetBestAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
