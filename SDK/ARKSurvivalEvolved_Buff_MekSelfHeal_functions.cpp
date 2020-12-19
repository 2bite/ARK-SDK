// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekSelfHeal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.GetMekFuelLevel
// ()
// Parameters:
// float                          FuelLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekSelfHeal_C::GetMekFuelLevel(float* FuelLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.GetMekFuelLevel");

	ABuff_MekSelfHeal_C_GetMekFuelLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuelLevel != nullptr)
		*FuelLevel = params.FuelLevel;
}


// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekSelfHeal_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BPActivated");

	ABuff_MekSelfHeal_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffPostAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekSelfHeal_C::BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffPostAdjustDamage");

	ABuff_MekSelfHeal_C_BuffPostAdjustDamage_Params params;
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


// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekSelfHeal_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.BuffTickServer");

	ABuff_MekSelfHeal_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.UserConstructionScript
// ()

void ABuff_MekSelfHeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.UserConstructionScript");

	ABuff_MekSelfHeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.ExecuteUbergraph_Buff_MekSelfHeal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekSelfHeal_C::ExecuteUbergraph_Buff_MekSelfHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekSelfHeal.Buff_MekSelfHeal_C.ExecuteUbergraph_Buff_MekSelfHeal");

	ABuff_MekSelfHeal_C_ExecuteUbergraph_Buff_MekSelfHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
