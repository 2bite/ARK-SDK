// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Kill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.Public Calculate Damage Multiplier
// ()
// Parameters:
// float                          Mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::Public_Calculate_Damage_Multiplier(float* Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.Public Calculate Damage Multiplier");

	ABuff_TekPistol_Kill_C_Public_Calculate_Damage_Multiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mult != nullptr)
		*Mult = params.Mult;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateImpactScale
// ()
// Parameters:
// float                          ImpactScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::CalculateImpactScale(float* ImpactScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateImpactScale");

	ABuff_TekPistol_Kill_C_CalculateImpactScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactScale != nullptr)
		*ImpactScale = params.ImpactScale;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateDamageMultiplier
// ()
// Parameters:
// float                          Mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::CalculateDamageMultiplier(float* Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CalculateDamageMultiplier");

	ABuff_TekPistol_Kill_C_CalculateDamageMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mult != nullptr)
		*Mult = params.Mult;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPAdjustDamage_Ex
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpulseDir                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekPistol_Kill_C::BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPAdjustDamage_Ex");

	ABuff_TekPistol_Kill_C_BPAdjustDamage_Ex_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.InDamageCauser = InDamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (ImpulseDir != nullptr)
		*ImpulseDir = params.ImpulseDir;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanApplyToTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::CanApplyToTarget(class APrimalCharacter* Target, bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanApplyToTarget");

	ABuff_TekPistol_Kill_C_CanApplyToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPSetupForInstigator
// (NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPSetupForInstigator");

	ABuff_TekPistol_Kill_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanBeViewed
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekPistol_Kill_C::CanBeViewed(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.CanBeViewed");

	ABuff_TekPistol_Kill_C_CanBeViewed_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointCustomData
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_TekPistol_Kill_C::GetPointCustomData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointCustomData");

	ABuff_TekPistol_Kill_C_GetPointCustomData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointOfInterestData
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointOfInterestData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointOfInterestData ABuff_TekPistol_Kill_C::GetPointOfInterestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.GetPointOfInterestData");

	ABuff_TekPistol_Kill_C_GetPointOfInterestData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickServer");

	ABuff_TekPistol_Kill_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ApplyChargeWeight
// ()
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::ApplyChargeWeight(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ApplyChargeWeight");

	ABuff_TekPistol_Kill_C_ApplyChargeWeight_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekPistol_Kill_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPCustomAllowAddBuff");

	ABuff_TekPistol_Kill_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPReactivateWithDamageCauser
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ForDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPReactivateWithDamageCauser");

	ABuff_TekPistol_Kill_C_BPReactivateWithDamageCauser_Params params;
	params.ForInstigator = ForInstigator;
	params.ForDamageCauser = ForDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BuffTickClient");

	ABuff_TekPistol_Kill_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.BPActivated");

	ABuff_TekPistol_Kill_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.UserConstructionScript
// ()

void ABuff_TekPistol_Kill_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.UserConstructionScript");

	ABuff_TekPistol_Kill_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ExecuteUbergraph_Buff_TekPistol_Kill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Kill_C::ExecuteUbergraph_Buff_TekPistol_Kill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Kill.Buff_TekPistol_Kill_C.ExecuteUbergraph_Buff_TekPistol_Kill");

	ABuff_TekPistol_Kill_C_ExecuteUbergraph_Buff_TekPistol_Kill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
