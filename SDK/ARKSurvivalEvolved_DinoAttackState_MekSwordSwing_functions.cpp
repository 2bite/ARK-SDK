// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekSwordSwing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::ShouldDoDamageTo(class AActor* Actor, bool* AllowDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ShouldDoDamageTo");

	UDinoAttackState_MekSwordSwing_C_ShouldDoDamageTo_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowDamage != nullptr)
		*AllowDamage = params.AllowDamage;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackEnd");

	UDinoAttackState_MekSwordSwing_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::BPOnAnimNotifyCustomEvent(struct FName* CustomEventName, class UAnimSequenceBase** Animation, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAnimNotifyCustomEvent");

	UDinoAttackState_MekSwordSwing_C_BPOnAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Animation = Animation;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UDinoAttackState_MekSwordSwing_C::STATIC_DoSwordDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.DoSwordDamage");

	UDinoAttackState_MekSwordSwing_C_DoSwordDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct UObject_FTransform      WorldTransform                 (Parm, OutParm, IsPlainOldData)
// float                          CapsuleRadius                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleHalfHeight              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::GetSwordCapsule(struct UObject_FTransform* WorldTransform, float* CapsuleRadius, float* CapsuleHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordCapsule");

	UDinoAttackState_MekSwordSwing_C_GetSwordCapsule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldTransform != nullptr)
		*WorldTransform = params.WorldTransform;
	if (CapsuleRadius != nullptr)
		*CapsuleRadius = params.CapsuleRadius;
	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::GetSwordDamagePoint(struct FVector* Loc, struct FRotator* Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.GetSwordDamagePoint");

	UDinoAttackState_MekSwordSwing_C_GetSwordDamagePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
	if (Rot != nullptr)
		*Rot = params.Rot;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.BPOnAttackStart");

	UDinoAttackState_MekSwordSwing_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_MekSwordSwing_C::ExecuteUbergraph_DinoAttackState_MekSwordSwing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C.ExecuteUbergraph_DinoAttackState_MekSwordSwing");

	UDinoAttackState_MekSwordSwing_C_ExecuteUbergraph_DinoAttackState_MekSwordSwing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
