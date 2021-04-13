// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuChooseBasicAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot
// ()
// Parameters:
// bool                           FoundFootAttack                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RightFoot                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::CheckIfTargetIsCloseToFoot(bool* FoundFootAttack, bool* RightFoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot");

	UTask_FKaijuChooseBasicAttack_C_CheckIfTargetIsCloseToFoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundFootAttack != nullptr)
		*FoundFootAttack = params.FoundFootAttack;
	if (RightFoot != nullptr)
		*RightFoot = params.RightFoot;
}


// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::MaybeFootstomp(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp");

	UTask_FKaijuChooseBasicAttack_C_MaybeFootstomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying
// ()
// Parameters:
// bool                           IsFlying                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::TargetIsFlying(bool* IsFlying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying");

	UTask_FKaijuChooseBasicAttack_C_TargetIsFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFlying != nullptr)
		*IsFlying = params.IsFlying;
}


// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth
// ()
// Parameters:
// bool                           CanAttack                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::CanUseFootstompBoth(bool* CanAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth");

	UTask_FKaijuChooseBasicAttack_C_CanUseFootstompBoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAttack != nullptr)
		*CanAttack = params.CanAttack;
}


// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute");

	UTask_FKaijuChooseBasicAttack_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChooseBasicAttack_C::ExecuteUbergraph_Task_FKaijuChooseBasicAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack");

	UTask_FKaijuChooseBasicAttack_C_ExecuteUbergraph_Task_FKaijuChooseBasicAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
