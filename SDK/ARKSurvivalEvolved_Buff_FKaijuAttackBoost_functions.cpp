// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuAttackBoost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuAttackBoost_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BPDeactivated");

	ABuff_FKaijuAttackBoost_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuAttackBoost_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffTickServer");

	ABuff_FKaijuAttackBoost_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_FKaijuAttackBoost_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffAdjustDamage");

	ABuff_FKaijuAttackBoost_C_BuffAdjustDamage_Params params;
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


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffPostAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuAttackBoost_C::BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.BuffPostAdjustDamage");

	ABuff_FKaijuAttackBoost_C_BuffPostAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.UserConstructionScript
// ()

void ABuff_FKaijuAttackBoost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.UserConstructionScript");

	ABuff_FKaijuAttackBoost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.Multi_RefreshDeactivationTime
// ()

void ABuff_FKaijuAttackBoost_C::Multi_RefreshDeactivationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.Multi_RefreshDeactivationTime");

	ABuff_FKaijuAttackBoost_C_Multi_RefreshDeactivationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.ExecuteUbergraph_Buff_FKaijuAttackBoost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuAttackBoost_C::ExecuteUbergraph_Buff_FKaijuAttackBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuAttackBoost.Buff_FKaijuAttackBoost_C.ExecuteUbergraph_Buff_FKaijuAttackBoost");

	ABuff_FKaijuAttackBoost_C_ExecuteUbergraph_Buff_FKaijuAttackBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
