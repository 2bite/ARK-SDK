// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_IceKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_IceKaiju_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCheckPreventInput");

	ABuff_Frozen_IceKaiju_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_IceKaiju_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPCustomAllowAddBuff");

	ABuff_Frozen_IceKaiju_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPSetupForInstigator");

	ABuff_Frozen_IceKaiju_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_IceKaiju_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventflight");

	ABuff_Frozen_IceKaiju_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPHandleOnStartFire");

	ABuff_Frozen_IceKaiju_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Frozen_IceKaiju_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffAdjustDamage");

	ABuff_Frozen_IceKaiju_C_BuffAdjustDamage_Params params;
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


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.NotifyDamage");

	ABuff_Frozen_IceKaiju_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffPostAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffPostAdjustDamage");

	ABuff_Frozen_IceKaiju_C_BuffPostAdjustDamage_Params params;
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


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceivePointDamage");

	ABuff_Frozen_IceKaiju_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickClient");

	ABuff_Frozen_IceKaiju_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickServer
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BuffTickServer");

	ABuff_Frozen_IceKaiju_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeCharacter
// ()
// Parameters:
// class APrimalCharacter*        InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Freeze                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::FreezeCharacter(class APrimalCharacter* InputPin, bool Freeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeCharacter");

	ABuff_Frozen_IceKaiju_C_FreezeCharacter_Params params;
	params.InputPin = InputPin;
	params.Freeze = Freeze;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventCharacterStatusValueModifiers
// ()
// Parameters:
// class APrimalCharacter**       ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_IceKaiju_C::BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventCharacterStatusValueModifiers");

	ABuff_Frozen_IceKaiju_C_BPPreventCharacterStatusValueModifiers_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveAnyDamage");

	ABuff_Frozen_IceKaiju_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Frozen_IceKaiju_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPPreventAddingOtherBuff");

	ABuff_Frozen_IceKaiju_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPDeactivated");

	ABuff_Frozen_IceKaiju_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.BPActivated");

	ABuff_Frozen_IceKaiju_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.AddFrozenTime
// ()

void ABuff_Frozen_IceKaiju_C::AddFrozenTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.AddFrozenTime");

	ABuff_Frozen_IceKaiju_C_AddFrozenTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UserConstructionScript
// ()

void ABuff_Frozen_IceKaiju_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UserConstructionScript");

	ABuff_Frozen_IceKaiju_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UpdateFrozenMIC
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::UpdateFrozenMIC(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.UpdateFrozenMIC");

	ABuff_Frozen_IceKaiju_C_UpdateFrozenMIC_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeChar
// ()
// Parameters:
// class APrimalCharacter*        Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Freeze                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::FreezeChar(class APrimalCharacter* Char, bool Freeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.FreezeChar");

	ABuff_Frozen_IceKaiju_C_FreezeChar_Params params;
	params.Char = Char;
	params.Freeze = Freeze;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveBeginPlay
// ()

void ABuff_Frozen_IceKaiju_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ReceiveBeginPlay");

	ABuff_Frozen_IceKaiju_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Server_HandleOnStartFire
// ()

void ABuff_Frozen_IceKaiju_C::Server_HandleOnStartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Server_HandleOnStartFire");

	ABuff_Frozen_IceKaiju_C_Server_HandleOnStartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Multi_PlayIceBreakVFX
// ()

void ABuff_Frozen_IceKaiju_C::Multi_PlayIceBreakVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.Multi_PlayIceBreakVFX");

	ABuff_Frozen_IceKaiju_C_Multi_PlayIceBreakVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ExecuteUbergraph_Buff_Frozen_IceKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_IceKaiju_C::ExecuteUbergraph_Buff_Frozen_IceKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C.ExecuteUbergraph_Buff_Frozen_IceKaiju");

	ABuff_Frozen_IceKaiju_C_ExecuteUbergraph_Buff_Frozen_IceKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
