// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpindlesMinigunHit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABuff_SpindlesMinigunHit_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPGetDebugInfoString");

	ABuff_SpindlesMinigunHit_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim
// ()

void ABuff_SpindlesMinigunHit_C::OnRep_CurrentPreventHurtAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.OnRep_CurrentPreventHurtAnim");

	ABuff_SpindlesMinigunHit_C_OnRep_CurrentPreventHurtAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_SpindlesMinigunHit_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffAdjustDamage");

	ABuff_SpindlesMinigunHit_C_BuffAdjustDamage_Params params;
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


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpindlesMinigunHit_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveEndPlay");

	ABuff_SpindlesMinigunHit_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpindlesMinigunHit_C::STATIC_BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPPreventflight");

	ABuff_SpindlesMinigunHit_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay
// ()

void ABuff_SpindlesMinigunHit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ReceiveBeginPlay");

	ABuff_SpindlesMinigunHit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpindlesMinigunHit_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BuffTickServer");

	ABuff_SpindlesMinigunHit_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart
// ()

void ABuff_SpindlesMinigunHit_C::BPResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.BPResetBuffStart");

	ABuff_SpindlesMinigunHit_C_BPResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript
// ()

void ABuff_SpindlesMinigunHit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.UserConstructionScript");

	ABuff_SpindlesMinigunHit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpindlesMinigunHit_C::ExecuteUbergraph_Buff_SpindlesMinigunHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpindlesMinigunHit.Buff_SpindlesMinigunHit_C.ExecuteUbergraph_Buff_SpindlesMinigunHit");

	ABuff_SpindlesMinigunHit_C_ExecuteUbergraph_Buff_SpindlesMinigunHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
