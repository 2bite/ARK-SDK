// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackCrate_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackCrate_TK.AttackCrate_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackCrate_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackCrate_TK.AttackCrate_TK_C.ReceiveExecute");

	UAttackCrate_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackCrate_TK.AttackCrate_TK_C.ExecuteUbergraph_AttackCrate_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackCrate_TK_C::ExecuteUbergraph_AttackCrate_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackCrate_TK.AttackCrate_TK_C.ExecuteUbergraph_AttackCrate_TK");

	UAttackCrate_TK_C_ExecuteUbergraph_AttackCrate_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
