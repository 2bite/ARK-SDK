// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Owner_Blocking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Owner_Blocking_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPSetupForInstigator");

	ABuff_TekClaw_Owner_Blocking_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpulseDir                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekClaw_Owner_Blocking_C::BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustDamage_Ex");

	ABuff_TekClaw_Owner_Blocking_C_BPAdjustDamage_Ex_Params params;
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


// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekClaw_Owner_Blocking_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.BPAdjustImpulseFromDamage");

	ABuff_TekClaw_Owner_Blocking_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript
// ()

void ABuff_TekClaw_Owner_Blocking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.UserConstructionScript");

	ABuff_TekClaw_Owner_Blocking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Owner_Blocking_C::ExecuteUbergraph_Buff_TekClaw_Owner_Blocking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_Blocking.Buff_TekClaw_Owner_Blocking_C.ExecuteUbergraph_Buff_TekClaw_Owner_Blocking");

	ABuff_TekClaw_Owner_Blocking_C_ExecuteUbergraph_Buff_TekClaw_Owner_Blocking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
