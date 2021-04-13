// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekPistolShoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackTick
// (Native, Event, NetResponse, NetMulticast, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekPistolShoot_C::BPOnAttackTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackTick");

	UDinoAttackState_MekPistolShoot_C_BPOnAttackTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekPistolShoot_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.BPOnAttackStart");

	UDinoAttackState_MekPistolShoot_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.GetMuzzleInfo
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekPistolShoot_C::GetMuzzleInfo(struct FVector* Location, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.GetMuzzleInfo");

	UDinoAttackState_MekPistolShoot_C_GetMuzzleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.ExecuteUbergraph_DinoAttackState_MekPistolShoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekPistolShoot_C::ExecuteUbergraph_DinoAttackState_MekPistolShoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekPistolShoot.DinoAttackState_MekPistolShoot_C.ExecuteUbergraph_DinoAttackState_MekPistolShoot");

	UDinoAttackState_MekPistolShoot_C_ExecuteUbergraph_DinoAttackState_MekPistolShoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
