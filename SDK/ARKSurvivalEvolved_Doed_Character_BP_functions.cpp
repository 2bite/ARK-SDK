// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doed_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Doed_Character_BP.Doed_Character_BP_C.BPChargingModifyInputAcceleration
// ()
// Parameters:
// struct FVector*                inputAcceleration              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADoed_Character_BP_C::BPChargingModifyInputAcceleration(struct FVector* inputAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.BPChargingModifyInputAcceleration");

	ADoed_Character_BP_C_BPChargingModifyInputAcceleration_Params params;
	params.inputAcceleration = inputAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADoed_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanAttack");

	ADoed_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADoed_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.BlueprintCanRiderAttack");

	ADoed_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Doed_Character_BP.Doed_Character_BP_C.UserConstructionScript
// ()

void ADoed_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.UserConstructionScript");

	ADoed_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doed_Character_BP.Doed_Character_BP_C.AnimNotify_EndCharge
// ()

void ADoed_Character_BP_C::AnimNotify_EndCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.AnimNotify_EndCharge");

	ADoed_Character_BP_C_AnimNotify_EndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doed_Character_BP.Doed_Character_BP_C.ExecuteUbergraph_Doed_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoed_Character_BP_C::ExecuteUbergraph_Doed_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP.Doed_Character_BP_C.ExecuteUbergraph_Doed_Character_BP");

	ADoed_Character_BP_C_ExecuteUbergraph_Doed_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
