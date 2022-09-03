// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_AmargaSpike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_AmargaSpike_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent");

	UDinoAttackStateRanged_AmargaSpike_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack
// (NetReliable, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDinoAttackStateRanged_AmargaSpike_C::BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack");

	UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDinoAttackStateRanged_AmargaSpike_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin");

	UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttackOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_AmargaSpike_C::ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike");

	UDinoAttackStateRanged_AmargaSpike_C_ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
