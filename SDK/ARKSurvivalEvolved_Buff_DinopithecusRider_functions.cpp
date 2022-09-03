// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinopithecusRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_DinopithecusRider_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffAdjustDamage");

	ABuff_DinopithecusRider_C_BuffAdjustDamage_Params params;
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


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_DinopithecusRider_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.GetBuffPostprocessIntensity");

	ABuff_DinopithecusRider_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DinopithecusRider_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.AllowPostProcessEffect");

	ABuff_DinopithecusRider_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Is Valid PounceTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinopithecusRider_C::Is_Valid_PounceTarget(class APrimalCharacter* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Is Valid PounceTarget");

	ABuff_DinopithecusRider_C_Is_Valid_PounceTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BPGetHUDElements
// (NetReliable, Exec, Native, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_DinopithecusRider_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BPGetHUDElements");

	ABuff_DinopithecusRider_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.IsAnotherDinoAlreadyAttached
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinopithecusRider_C::IsAnotherDinoAlreadyAttached(class AActor* Target, bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.IsAnotherDinoAlreadyAttached");

	ABuff_DinopithecusRider_C_IsAnotherDinoAlreadyAttached_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Can Ignore Traced Actor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeIgnored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinopithecusRider_C::Can_Ignore_Traced_Actor(class AActor* Actor, bool* CanBeIgnored)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.Can Ignore Traced Actor");

	ABuff_DinopithecusRider_C_Can_Ignore_Traced_Actor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeIgnored != nullptr)
		*CanBeIgnored = params.CanBeIgnored;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffTickClient
// (NetReliable, NetRequest, Native, Event, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinopithecusRider_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.BuffTickClient");

	ABuff_DinopithecusRider_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.UserConstructionScript
// ()

void ABuff_DinopithecusRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.UserConstructionScript");

	ABuff_DinopithecusRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.ExecuteUbergraph_Buff_DinopithecusRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinopithecusRider_C::ExecuteUbergraph_Buff_DinopithecusRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinopithecusRider.Buff_DinopithecusRider_C.ExecuteUbergraph_Buff_DinopithecusRider");

	ABuff_DinopithecusRider_C_ExecuteUbergraph_Buff_DinopithecusRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
