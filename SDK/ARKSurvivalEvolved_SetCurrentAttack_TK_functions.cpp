// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetCurrentAttack_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetCurrentAttack_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ReceiveExecute");

	USetCurrentAttack_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ExecuteUbergraph_SetCurrentAttack_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetCurrentAttack_TK_C::ExecuteUbergraph_SetCurrentAttack_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetCurrentAttack_TK.SetCurrentAttack_TK_C.ExecuteUbergraph_SetCurrentAttack_TK");

	USetCurrentAttack_TK_C_ExecuteUbergraph_SetCurrentAttack_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
