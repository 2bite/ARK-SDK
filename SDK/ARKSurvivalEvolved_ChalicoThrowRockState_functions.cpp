// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowRockState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChalicoThrowRockState.ChalicoThrowRockState_C.BPRangedAttack
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UChalicoThrowRockState_C::STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoThrowRockState.ChalicoThrowRockState_C.BPRangedAttack");

	UChalicoThrowRockState_C_BPRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function ChalicoThrowRockState.ChalicoThrowRockState_C.ExecuteUbergraph_ChalicoThrowRockState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChalicoThrowRockState_C::ExecuteUbergraph_ChalicoThrowRockState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoThrowRockState.ChalicoThrowRockState_C.ExecuteUbergraph_ChalicoThrowRockState");

	UChalicoThrowRockState_C_ExecuteUbergraph_ChalicoThrowRockState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
