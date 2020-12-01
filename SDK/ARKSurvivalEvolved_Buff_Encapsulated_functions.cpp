// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Encapsulated_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Encapsulated.Buff_Encapsulated_C.BPOverrideBuffToGiveOnDeactivation
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_Encapsulated_C::BPOverrideBuffToGiveOnDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPOverrideBuffToGiveOnDeactivation");

	ABuff_Encapsulated_C_BPOverrideBuffToGiveOnDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Encapsulated_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.PreventJump");

	ABuff_Encapsulated_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.CheckPVEEnemy
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Encapsulated_C::CheckPVEEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.CheckPVEEnemy");

	ABuff_Encapsulated_C_CheckPVEEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BuffTickServer");

	ABuff_Encapsulated_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Encapsulated_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPCustomAllowAddBuff");

	ABuff_Encapsulated_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BPAdjustImpulseFromDamage
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

struct FVector ABuff_Encapsulated_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPAdjustImpulseFromDamage");

	ABuff_Encapsulated_C_BPAdjustImpulseFromDamage_Params params;
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


// Function Buff_Encapsulated.Buff_Encapsulated_C.IsOwnerOwlRider
// ()
// Parameters:
// bool                           IsOwlRider                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::IsOwnerOwlRider(bool* IsOwlRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.IsOwnerOwlRider");

	ABuff_Encapsulated_C_IsOwnerOwlRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOwlRider != nullptr)
		*IsOwlRider = params.IsOwlRider;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.DeactivateSoon
// ()
// Parameters:
// float                          DelayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::DeactivateSoon(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.DeactivateSoon");

	ABuff_Encapsulated_C_DeactivateSoon_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPActivated");

	ABuff_Encapsulated_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.OnRep_IceShieldCurrentHealth
// ()

void ABuff_Encapsulated_C::OnRep_IceShieldCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.OnRep_IceShieldCurrentHealth");

	ABuff_Encapsulated_C_OnRep_IceShieldCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Encapsulated_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BuffAdjustDamage");

	ABuff_Encapsulated_C_BuffAdjustDamage_Params params;
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


// Function Buff_Encapsulated.Buff_Encapsulated_C.ApplyDamageToIceShield
// (Net, NetMulticast, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRemoteDamage                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::ApplyDamageToIceShield(float Damage, bool IsRemoteDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.ApplyDamageToIceShield");

	ABuff_Encapsulated_C_ApplyDamageToIceShield_Params params;
	params.Damage = Damage;
	params.IsRemoteDamage = IsRemoteDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.Is Riding or Carried Player
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Encapsulated_C::Is_Riding_or_Carried_Player(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.Is Riding or Carried Player");

	ABuff_Encapsulated_C_Is_Riding_or_Carried_Player_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPSetupForInstigator");

	ABuff_Encapsulated_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.FreezeCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Freeze                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::FreezeCharacter(class APrimalCharacter* Character, bool Freeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.FreezeCharacter");

	ABuff_Encapsulated_C_FreezeCharacter_Params params;
	params.Character = Character;
	params.Freeze = Freeze;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.BPDeactivated
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::STATIC_BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.BPDeactivated");

	ABuff_Encapsulated_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.UserConstructionScript
// ()

void ABuff_Encapsulated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.UserConstructionScript");

	ABuff_Encapsulated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Encapsulated.Buff_Encapsulated_C.ExecuteUbergraph_Buff_Encapsulated
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Encapsulated_C::ExecuteUbergraph_Buff_Encapsulated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Encapsulated.Buff_Encapsulated_C.ExecuteUbergraph_Buff_Encapsulated");

	ABuff_Encapsulated_C_ExecuteUbergraph_Buff_Encapsulated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
