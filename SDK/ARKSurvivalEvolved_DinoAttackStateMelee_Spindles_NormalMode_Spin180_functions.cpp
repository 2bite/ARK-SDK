// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Spindles_NormalMode_Spin180_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.OnBeginEvent");

	UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.BPCanAttack");

	UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180");

	UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
