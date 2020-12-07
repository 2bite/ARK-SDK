// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_BasicMelee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.OnEndEvent
// ()

void UDinoAttackState_KingKaiju_BasicMelee_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.OnEndEvent");

	UDinoAttackState_KingKaiju_BasicMelee_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_BasicMelee_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.OnBeginEvent");

	UDinoAttackState_KingKaiju_BasicMelee_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.ExecuteUbergraph_DinoAttackState_KingKaiju_BasicMelee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_BasicMelee_C::ExecuteUbergraph_DinoAttackState_KingKaiju_BasicMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C.ExecuteUbergraph_DinoAttackState_KingKaiju_BasicMelee");

	UDinoAttackState_KingKaiju_BasicMelee_C_ExecuteUbergraph_DinoAttackState_KingKaiju_BasicMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
