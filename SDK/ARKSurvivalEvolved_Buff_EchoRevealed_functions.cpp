// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EchoRevealed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EchoRevealed.Buff_EchoRevealed_C.DeactiveParticle
// ()

void ABuff_EchoRevealed_C::DeactiveParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.DeactiveParticle");

	ABuff_EchoRevealed_C_DeactiveParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EchoRevealed_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPSetupForInstigator");

	ABuff_EchoRevealed_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_EchoRevealed_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BuffAdjustDamage");

	ABuff_EchoRevealed_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPCustomIsRelevantForClient
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_EchoRevealed_C::BPCustomIsRelevantForClient(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.BPCustomIsRelevantForClient");

	ABuff_EchoRevealed_C_BPCustomIsRelevantForClient_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_EchoRevealed.Buff_EchoRevealed_C.UserConstructionScript
// ()

void ABuff_EchoRevealed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.UserConstructionScript");

	ABuff_EchoRevealed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EchoRevealed.Buff_EchoRevealed_C.ExecuteUbergraph_Buff_EchoRevealed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EchoRevealed_C::ExecuteUbergraph_Buff_EchoRevealed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EchoRevealed.Buff_EchoRevealed_C.ExecuteUbergraph_Buff_EchoRevealed");

	ABuff_EchoRevealed_C_ExecuteUbergraph_Buff_EchoRevealed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
