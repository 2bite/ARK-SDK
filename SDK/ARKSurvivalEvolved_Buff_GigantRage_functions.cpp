// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GigantRage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GigantRage.Buff_GigantRage_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_GigantRage_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.BuffAdjustDamage");

	ABuff_GigantRage_C_BuffAdjustDamage_Params params;
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


// Function Buff_GigantRage.Buff_GigantRage_C.EnterRage
// ()

void ABuff_GigantRage_C::EnterRage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.EnterRage");

	ABuff_GigantRage_C_EnterRage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GigantRage.Buff_GigantRage_C.GetHUDProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_GigantRage_C::GetHUDProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.GetHUDProgressBarPercent");

	ABuff_GigantRage_C_GetHUDProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_GigantRage.Buff_GigantRage_C.UserConstructionScript
// ()

void ABuff_GigantRage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.UserConstructionScript");

	ABuff_GigantRage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GigantRage.Buff_GigantRage_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GigantRage_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.ReceiveTick");

	ABuff_GigantRage_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GigantRage.Buff_GigantRage_C.ExecuteUbergraph_Buff_GigantRage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GigantRage_C::ExecuteUbergraph_Buff_GigantRage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GigantRage.Buff_GigantRage_C.ExecuteUbergraph_Buff_GigantRage");

	ABuff_GigantRage_C_ExecuteUbergraph_Buff_GigantRage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
