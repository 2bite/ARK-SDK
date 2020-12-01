// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuFindBestMeleeAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws
// ()
// Parameters:
// bool                           FoundPawAttack                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            QuadIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           UseIceBreath                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuFindBestMeleeAttack_C::CheckIfTargetIsCloseToPaws(bool* FoundPawAttack, int* QuadIndex, bool* UseIceBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws");

	UTask_IceKaijuFindBestMeleeAttack_C_CheckIfTargetIsCloseToPaws_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPawAttack != nullptr)
		*FoundPawAttack = params.FoundPawAttack;
	if (QuadIndex != nullptr)
		*QuadIndex = params.QuadIndex;
	if (UseIceBreath != nullptr)
		*UseIceBreath = params.UseIceBreath;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant
// ()

void UTask_IceKaijuFindBestMeleeAttack_C::SetTargetQuadrant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant");

	UTask_IceKaijuFindBestMeleeAttack_C_SetTargetQuadrant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack
// ()
// Parameters:
// class AIceKaiju_Character_BP_C* MyIceKaiju                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTask_IceKaijuFindBestMeleeAttack_C::CanAngryAttack(class AIceKaiju_Character_BP_C** MyIceKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack");

	UTask_IceKaijuFindBestMeleeAttack_C_CanAngryAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyIceKaiju != nullptr)
		*MyIceKaiju = params.MyIceKaiju;

	return params.ReturnValue;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath
// ()
// Parameters:
// class AIceKaiju_Character_BP_C* MyIceKaiju                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTask_IceKaijuFindBestMeleeAttack_C::CanIceBreath(class AIceKaiju_Character_BP_C** MyIceKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath");

	UTask_IceKaijuFindBestMeleeAttack_C_CanIceBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyIceKaiju != nullptr)
		*MyIceKaiju = params.MyIceKaiju;

	return params.ReturnValue;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash
// ()
// Parameters:
// class AIceKaiju_Character_BP_C* MyIceKaiju                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTask_IceKaijuFindBestMeleeAttack_C::CanGroundSmash(class AIceKaiju_Character_BP_C** MyIceKaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash");

	UTask_IceKaijuFindBestMeleeAttack_C_CanGroundSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyIceKaiju != nullptr)
		*MyIceKaiju = params.MyIceKaiju;

	return params.ReturnValue;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash
// (Native, NetResponse, Static, NetMulticast, Private, BlueprintCallable, Const, NetValidate)
// Parameters:
// bool                           IsOnCooldown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuFindBestMeleeAttack_C::STATIC_CanUseGroundSmash(bool* IsOnCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash");

	UTask_IceKaijuFindBestMeleeAttack_C_CanUseGroundSmash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnCooldown != nullptr)
		*IsOnCooldown = params.IsOnCooldown;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuFindBestMeleeAttack_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute");

	UTask_IceKaijuFindBestMeleeAttack_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuFindBestMeleeAttack_C::ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack");

	UTask_IceKaijuFindBestMeleeAttack_C_ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
