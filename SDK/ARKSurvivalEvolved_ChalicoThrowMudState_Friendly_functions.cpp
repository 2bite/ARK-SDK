// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowMudState_Friendly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.BPRangedAttack
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UChalicoThrowMudState_Friendly_C::STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.BPRangedAttack");

	UChalicoThrowMudState_Friendly_C_BPRangedAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.ExecuteUbergraph_ChalicoThrowMudState_Friendly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChalicoThrowMudState_Friendly_C::ExecuteUbergraph_ChalicoThrowMudState_Friendly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState_Friendly.ChalicoThrowMudState_Friendly_C.ExecuteUbergraph_ChalicoThrowMudState_Friendly");

	UChalicoThrowMudState_Friendly_C_ExecuteUbergraph_ChalicoThrowMudState_Friendly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
