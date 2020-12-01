// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_EnforcerBlast_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C.BPOnAttackStart
// (NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EnforcerBlast_C::STATIC_BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C.BPOnAttackStart");

	UDinoAttackState_EnforcerBlast_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C.ExecuteUbergraph_DinoAttackState_EnforcerBlast
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EnforcerBlast_C::ExecuteUbergraph_DinoAttackState_EnforcerBlast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlast.DinoAttackState_EnforcerBlast_C.ExecuteUbergraph_DinoAttackState_EnforcerBlast");

	UDinoAttackState_EnforcerBlast_C_ExecuteUbergraph_DinoAttackState_EnforcerBlast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
