// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PhoenixDinoAttackStateRangedAI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhoenixDinoAttackStateRangedAI_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.BPCanAttack");

	UPhoenixDinoAttackStateRangedAI_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.ExecuteUbergraph_PhoenixDinoAttackStateRangedAI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPhoenixDinoAttackStateRangedAI_C::ExecuteUbergraph_PhoenixDinoAttackStateRangedAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.ExecuteUbergraph_PhoenixDinoAttackStateRangedAI");

	UPhoenixDinoAttackStateRangedAI_C_ExecuteUbergraph_PhoenixDinoAttackStateRangedAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
