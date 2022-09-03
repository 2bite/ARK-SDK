// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_Mjolnir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeap_Mjolnir_C::BPCanEquip(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanEquip");

	AWeap_Mjolnir_C_BPCanEquip_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound
// ()

void AWeap_Mjolnir_C::PlayRandomIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleSound");

	AWeap_Mjolnir_C_PlayRandomIdleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio
// ()

void AWeap_Mjolnir_C::CheckPlayIdleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.CheckPlayIdleAudio");

	AWeap_Mjolnir_C_CheckPlayIdleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged
// ()

void AWeap_Mjolnir_C::OnRep_bIsCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.OnRep_bIsCharged");

	AWeap_Mjolnir_C_OnRep_bIsCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_Mjolnir_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.ReceiveTick");

	AWeap_Mjolnir_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects
// ()
// Parameters:
// struct FVector*                Impact                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_Mjolnir_C::BPSpawnMeleeEffects(struct FVector* Impact, struct FVector* ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPSpawnMeleeEffects");

	AWeap_Mjolnir_C_BPSpawnMeleeEffects_Params params;
	params.Impact = Impact;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeap_Mjolnir_C::BPCanMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.BPCanMeleeAttack");

	AWeap_Mjolnir_C_BPCanMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript
// ()

void AWeap_Mjolnir_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.UserConstructionScript");

	AWeap_Mjolnir_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio
// ()

void AWeap_Mjolnir_C::PlayRandomIdleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.PlayRandomIdleAudio");

	AWeap_Mjolnir_C_PlayRandomIdleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_Mjolnir_C::ExecuteUbergraph_Weap_Mjolnir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_Mjolnir.Weap_Mjolnir_C.ExecuteUbergraph_Weap_Mjolnir");

	AWeap_Mjolnir_C_ExecuteUbergraph_Weap_Mjolnir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
