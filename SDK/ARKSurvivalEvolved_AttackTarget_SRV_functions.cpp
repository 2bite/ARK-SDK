// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackTarget_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackTarget_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveActivation");

	UAttackTarget_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackTarget_SRV_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation");

	UAttackTarget_SRV_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackTarget_SRV_C::ExecuteUbergraph_AttackTarget_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV");

	UAttackTarget_SRV_C_ExecuteUbergraph_AttackTarget_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
