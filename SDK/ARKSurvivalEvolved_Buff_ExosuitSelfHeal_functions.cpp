// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitSelfHeal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.InitBuff
// ()

void ABuff_ExosuitSelfHeal_C::InitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.InitBuff");

	ABuff_ExosuitSelfHeal_C_InitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitSelfHeal_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BPActivated");

	ABuff_ExosuitSelfHeal_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffPostAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitSelfHeal_C::BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffPostAdjustDamage");

	ABuff_ExosuitSelfHeal_C_BuffPostAdjustDamage_Params params;
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


// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitSelfHeal_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.BuffTickServer");

	ABuff_ExosuitSelfHeal_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.UserConstructionScript
// ()

void ABuff_ExosuitSelfHeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.UserConstructionScript");

	ABuff_ExosuitSelfHeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.ExecuteUbergraph_Buff_ExosuitSelfHeal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExosuitSelfHeal_C::ExecuteUbergraph_Buff_ExosuitSelfHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExosuitSelfHeal.Buff_ExosuitSelfHeal_C.ExecuteUbergraph_Buff_ExosuitSelfHeal");

	ABuff_ExosuitSelfHeal_C_ExecuteUbergraph_Buff_ExosuitSelfHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
