// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Attacking_dR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttacking_DR_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart");

	UAttacking_DR_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttacking_DR_C::ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish");

	UAttacking_DR_C_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttacking_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck");

	UAttacking_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttacking_DR_C::ExecuteUbergraph_Attacking_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR");

	UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
