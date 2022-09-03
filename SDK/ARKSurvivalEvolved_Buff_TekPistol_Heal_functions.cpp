// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Heal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffPostAdjustDamage
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Heal_C::STATIC_BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffPostAdjustDamage");

	ABuff_TekPistol_Heal_C_BuffPostAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekPistol_Heal_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.BuffAdjustDamage");

	ABuff_TekPistol_Heal_C_BuffAdjustDamage_Params params;
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


// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.AddHealer
// ()
// Parameters:
// class AActor*                  Damager                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Heal_C::AddHealer(class AActor* Damager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.AddHealer");

	ABuff_TekPistol_Heal_C_AddHealer_Params params;
	params.Damager = Damager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.UserConstructionScript
// ()

void ABuff_TekPistol_Heal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.UserConstructionScript");

	ABuff_TekPistol_Heal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.ExecuteUbergraph_Buff_TekPistol_Heal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_Heal_C::ExecuteUbergraph_Buff_TekPistol_Heal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_Heal.Buff_TekPistol_Heal_C.ExecuteUbergraph_Buff_TekPistol_Heal");

	ABuff_TekPistol_Heal_C_ExecuteUbergraph_Buff_TekPistol_Heal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
