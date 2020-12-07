// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ThrownByMammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ThrownByMammoth_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_ThrownByMammoth_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_ThrownByMammoth_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.BuffAdjustDamage");

	ABuff_ThrownByMammoth_C_BuffAdjustDamage_Params params;
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


// Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.UserConstructionScript
// ()

void ABuff_ThrownByMammoth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.UserConstructionScript");

	ABuff_ThrownByMammoth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.ExecuteUbergraph_Buff_ThrownByMammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ThrownByMammoth_C::ExecuteUbergraph_Buff_ThrownByMammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ThrownByMammoth.Buff_ThrownByMammoth_C.ExecuteUbergraph_Buff_ThrownByMammoth");

	ABuff_ThrownByMammoth_C_ExecuteUbergraph_Buff_ThrownByMammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
