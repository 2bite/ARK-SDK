// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekClaw_Owner_MaxPower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage
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

struct FVector ABuff_TekClaw_Owner_MaxPower_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage");

	ABuff_TekClaw_Owner_MaxPower_C_BPAdjustImpulseFromDamage_Params params;
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


// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript
// ()

void ABuff_TekClaw_Owner_MaxPower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript");

	ABuff_TekClaw_Owner_MaxPower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekClaw_Owner_MaxPower_C::ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower");

	ABuff_TekClaw_Owner_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
