// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AttackStateMelee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.OnEndEvent
// ()

void UForestKaiju_AttackStateMelee_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.OnEndEvent");

	UForestKaiju_AttackStateMelee_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.ExecuteUbergraph_ForestKaiju_AttackStateMelee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackStateMelee_C::ExecuteUbergraph_ForestKaiju_AttackStateMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.ExecuteUbergraph_ForestKaiju_AttackStateMelee");

	UForestKaiju_AttackStateMelee_C_ExecuteUbergraph_ForestKaiju_AttackStateMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
