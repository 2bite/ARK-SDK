// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Stun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickClient");

	ABuff_TekPistol_Stun_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanApplyToTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::CanApplyToTarget(class APrimalCharacter* Target, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanApplyToTarget");

	ABuff_TekPistol_Stun_C_CanApplyToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPSetupForInstigator
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPSetupForInstigator");

	ABuff_TekPistol_Stun_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanBeViewed
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekPistol_Stun_C::CanBeViewed(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanBeViewed");

	ABuff_TekPistol_Stun_C_CanBeViewed_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointCustomData
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_TekPistol_Stun_C::GetPointCustomData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointCustomData");

	ABuff_TekPistol_Stun_C_GetPointCustomData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointOfInterestData
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointOfInterestData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointOfInterestData ABuff_TekPistol_Stun_C::STATIC_GetPointOfInterestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointOfInterestData");

	ABuff_TekPistol_Stun_C_GetPointOfInterestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickServer");

	ABuff_TekPistol_Stun_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ApplyStunWeight
// ()
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::ApplyStunWeight(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ApplyStunWeight");

	ABuff_TekPistol_Stun_C_ApplyStunWeight_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekPistol_Stun_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPCustomAllowAddBuff");

	ABuff_TekPistol_Stun_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPReactivateWithDamageCauser
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ForDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPReactivateWithDamageCauser");

	ABuff_TekPistol_Stun_C_BPReactivateWithDamageCauser_Params params;
	params.ForInstigator = ForInstigator;
	params.ForDamageCauser = ForDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPActivated");

	ABuff_TekPistol_Stun_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.UserConstructionScript
// ()

void ABuff_TekPistol_Stun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.UserConstructionScript");

	ABuff_TekPistol_Stun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ExecuteUbergraph_Buff_TekPistol_Stun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Stun_C::ExecuteUbergraph_Buff_TekPistol_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ExecuteUbergraph_Buff_TekPistol_Stun");

	ABuff_TekPistol_Stun_C_ExecuteUbergraph_Buff_TekPistol_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
