// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderProtection_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderProtection_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickClient");

	ABuff_RiderProtection_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RiderProtection_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.GetBuffPostprocessIntensity");

	ABuff_RiderProtection_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderProtection_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.AllowPostProcessEffect");

	ABuff_RiderProtection_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.BPNotifyPreventDismounting
// ()
// Parameters:
// class APrimalDinoCharacter**   FromDino                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderProtection_C::BPNotifyPreventDismounting(class APrimalDinoCharacter** FromDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.BPNotifyPreventDismounting");

	ABuff_RiderProtection_C_BPNotifyPreventDismounting_Params params;
	params.FromDino = FromDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderProtection_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.BuffTickServer");

	ABuff_RiderProtection_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RiderProtection_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.BuffAdjustDamage");

	ABuff_RiderProtection_C_BuffAdjustDamage_Params params;
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


// Function Buff_RiderProtection.Buff_RiderProtection_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderProtection_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.BPSetupForInstigator");

	ABuff_RiderProtection_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.UserConstructionScript
// ()

void ABuff_RiderProtection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.UserConstructionScript");

	ABuff_RiderProtection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderProtection.Buff_RiderProtection_C.ExecuteUbergraph_Buff_RiderProtection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderProtection_C::ExecuteUbergraph_Buff_RiderProtection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderProtection.Buff_RiderProtection_C.ExecuteUbergraph_Buff_RiderProtection");

	ABuff_RiderProtection_C_ExecuteUbergraph_Buff_RiderProtection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
