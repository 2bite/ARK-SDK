// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_IsParticleActive
// ()

void ABuff_TekArmor_Boots_C::OnRep_IsParticleActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_IsParticleActive");

	ABuff_TekArmor_Boots_C_OnRep_IsParticleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.IsOnSteepSlope
// ()
// Parameters:
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 surfaceNormal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::IsOnSteepSlope(bool* ret, struct FVector* surfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.IsOnSteepSlope");

	ABuff_TekArmor_Boots_C_IsOnSteepSlope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (surfaceNormal != nullptr)
		*surfaceNormal = params.surfaceNormal;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_NewWalkableZIsActive
// ()

void ABuff_TekArmor_Boots_C::OnRep_NewWalkableZIsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.OnRep_NewWalkableZIsActive");

	ABuff_TekArmor_Boots_C_OnRep_NewWalkableZIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffTickServer");

	ABuff_TekArmor_Boots_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BPDeactivated");

	ABuff_TekArmor_Boots_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekArmor_Boots_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.BuffAdjustDamage");

	ABuff_TekArmor_Boots_C_BuffAdjustDamage_Params params;
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


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.AdjustFallDamageAndElement
// ()
// Parameters:
// float                          fallDamage_In                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          fallDamage_Out                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::AdjustFallDamageAndElement(float fallDamage_In, float* fallDamage_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.AdjustFallDamageAndElement");

	ABuff_TekArmor_Boots_C_AdjustFallDamageAndElement_Params params;
	params.fallDamage_In = fallDamage_In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fallDamage_Out != nullptr)
		*fallDamage_Out = params.fallDamage_Out;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.CanUseTekAbility
// ()
// Parameters:
// bool*                          bNotifyIfOutOfElement          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.CanUseTekAbility");

	ABuff_TekArmor_Boots_C_CanUseTekAbility_Params params;
	params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Boots_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Boots_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.UserConstructionScript
// ()

void ABuff_TekArmor_Boots_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.UserConstructionScript");

	ABuff_TekArmor_Boots_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.PlayDamageAbsorbFX
// ()

void ABuff_TekArmor_Boots_C::PlayDamageAbsorbFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.PlayDamageAbsorbFX");

	ABuff_TekArmor_Boots_C_PlayDamageAbsorbFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.ExecuteUbergraph_Buff_TekArmor_Boots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Boots_C::ExecuteUbergraph_Buff_TekArmor_Boots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Boots.Buff_TekArmor_Boots_C.ExecuteUbergraph_Buff_TekArmor_Boots");

	ABuff_TekArmor_Boots_C_ExecuteUbergraph_Buff_TekArmor_Boots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
