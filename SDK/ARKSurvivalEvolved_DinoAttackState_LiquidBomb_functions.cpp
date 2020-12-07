// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_LiquidBomb_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_LiquidBomb_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.BPOnAttackEnd");

	UDinoAttackState_LiquidBomb_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_LiquidBomb_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.BPOnAttackStart");

	UDinoAttackState_LiquidBomb_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.ExecuteUbergraph_DinoAttackState_LiquidBomb
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_LiquidBomb_C::ExecuteUbergraph_DinoAttackState_LiquidBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_LiquidBomb.DinoAttackState_LiquidBomb_C.ExecuteUbergraph_DinoAttackState_LiquidBomb");

	UDinoAttackState_LiquidBomb_C_ExecuteUbergraph_DinoAttackState_LiquidBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
