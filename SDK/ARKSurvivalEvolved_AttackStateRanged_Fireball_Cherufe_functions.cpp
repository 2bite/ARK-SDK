// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackStateRanged_Fireball_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttackStateRanged_Fireball_Cherufe_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack");

	UAttackStateRanged_Fireball_Cherufe_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent");

	UAttackStateRanged_Fireball_Cherufe_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack
// (Exec, NetResponse, Static, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_C::STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack");

	UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin");

	UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttackOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_C::ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe");

	UAttackStateRanged_Fireball_Cherufe_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
