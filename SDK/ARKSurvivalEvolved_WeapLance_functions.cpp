// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapLance.WeapLance_C.DoTrace
// (Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapLance_C::STATIC_DoTrace(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DoTrace");

	AWeapLance_C_DoTrace_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.DamageActor
// ()
// Parameters:
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)

void AWeapLance_C::DamageActor(class AActor* Victim, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DamageActor");

	AWeapLance_C_DamageActor_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function WeapLance.WeapLance_C.DoTraceAttacks
// ()

void AWeapLance_C::DoTraceAttacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DoTraceAttacks");

	AWeapLance_C_DoTraceAttacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapLance_C::BPForceTPVTargetingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation");

	AWeapLance_C_BPForceTPVTargetingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapLance.WeapLance_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapLance_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.ReceiveTick");

	AWeapLance_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.BPHandleMeleeAttack
// ()

void AWeapLance_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.BPHandleMeleeAttack");

	AWeapLance_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.BPStopMeleeAttack
// ()

void AWeapLance_C::BPStopMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.BPStopMeleeAttack");

	AWeapLance_C_BPStopMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.UserConstructionScript
// ()

void AWeapLance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.UserConstructionScript");

	AWeapLance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.DoPlayStartAttackingSound
// ()

void AWeapLance_C::DoPlayStartAttackingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DoPlayStartAttackingSound");

	AWeapLance_C_DoPlayStartAttackingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.DoPlayStopAttackingSound
// ()

void AWeapLance_C::DoPlayStopAttackingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DoPlayStopAttackingSound");

	AWeapLance_C_DoPlayStopAttackingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.DidDismountHit
// ()

void AWeapLance_C::DidDismountHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.DidDismountHit");

	AWeapLance_C_DidDismountHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapLance_C::ExecuteUbergraph_WeapLance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance");

	AWeapLance_C_ExecuteUbergraph_WeapLance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
