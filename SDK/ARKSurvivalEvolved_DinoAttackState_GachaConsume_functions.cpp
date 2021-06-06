// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GachaConsume_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C.OnEndEvent
// ()

void UDinoAttackState_GachaConsume_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C.OnEndEvent");

	UDinoAttackState_GachaConsume_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C.ExecuteUbergraph_DinoAttackState_GachaConsume
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GachaConsume_C::ExecuteUbergraph_DinoAttackState_GachaConsume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C.ExecuteUbergraph_DinoAttackState_GachaConsume");

	UDinoAttackState_GachaConsume_C_ExecuteUbergraph_DinoAttackState_GachaConsume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
