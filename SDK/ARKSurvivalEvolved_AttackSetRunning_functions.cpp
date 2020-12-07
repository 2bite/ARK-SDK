// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackSetRunning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackSetRunning.AttackSetRunning_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackSetRunning_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSetRunning.AttackSetRunning_C.ReceiveExecute");

	UAttackSetRunning_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackSetRunning.AttackSetRunning_C.ExecuteUbergraph_AttackSetRunning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackSetRunning_C::ExecuteUbergraph_AttackSetRunning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackSetRunning.AttackSetRunning_C.ExecuteUbergraph_AttackSetRunning");

	UAttackSetRunning_C_ExecuteUbergraph_AttackSetRunning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
