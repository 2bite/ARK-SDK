// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BossActiveVisual_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_BossActiveVisual_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.BuffAdjustDamage");

	ABuff_BossActiveVisual_C_BuffAdjustDamage_Params params;
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


// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.UserConstructionScript
// ()

void ABuff_BossActiveVisual_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.UserConstructionScript");

	ABuff_BossActiveVisual_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ReceiveBeginPlay
// ()

void ABuff_BossActiveVisual_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ReceiveBeginPlay");

	ABuff_BossActiveVisual_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.MultiSetDamageEffect
// ()
// Parameters:
// class AActor*                  BossChar                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BossActiveVisual_C::MultiSetDamageEffect(class AActor* BossChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.MultiSetDamageEffect");

	ABuff_BossActiveVisual_C_MultiSetDamageEffect_Params params;
	params.BossChar = BossChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ExecuteUbergraph_Buff_BossActiveVisual
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BossActiveVisual_C::ExecuteUbergraph_Buff_BossActiveVisual(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BossActiveVisual.Buff_BossActiveVisual_C.ExecuteUbergraph_Buff_BossActiveVisual");

	ABuff_BossActiveVisual_C_ExecuteUbergraph_Buff_BossActiveVisual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
