// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateMelee_IceJumper_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C.BPCanAttack");

	UDinoAttackStateMelee_IceJumper_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C.ExecuteUbergraph_DinoAttackStateMelee_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_IceJumper_C::ExecuteUbergraph_DinoAttackStateMelee_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_IceJumper.DinoAttackStateMelee_IceJumper_C.ExecuteUbergraph_DinoAttackStateMelee_IceJumper");

	UDinoAttackStateMelee_IceJumper_C_ExecuteUbergraph_DinoAttackStateMelee_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
