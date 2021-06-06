// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_OwlEncapsulate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_OwlEncapsulate_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.BPOnAttackEnd");

	UDinoAttackState_OwlEncapsulate_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_OwlEncapsulate_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.BPOnAttackStart");

	UDinoAttackState_OwlEncapsulate_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.ExecuteUbergraph_DinoAttackState_OwlEncapsulate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_OwlEncapsulate_C::ExecuteUbergraph_DinoAttackState_OwlEncapsulate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C.ExecuteUbergraph_DinoAttackState_OwlEncapsulate");

	UDinoAttackState_OwlEncapsulate_C_ExecuteUbergraph_DinoAttackState_OwlEncapsulate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
