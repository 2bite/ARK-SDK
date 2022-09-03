// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AndyRider.Buff_AndyRider_C.HiddenCharDiedUnexpectedly
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::HiddenCharDiedUnexpectedly(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.HiddenCharDiedUnexpectedly");

	ABuff_AndyRider_C_HiddenCharDiedUnexpectedly_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BuffTickServer");

	ABuff_AndyRider_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BPDeactivated");

	ABuff_AndyRider_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BPSetupForInstigator");

	ABuff_AndyRider_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BPNotifyPreventDismounting
// (NetRequest, Event, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   FromDino                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::BPNotifyPreventDismounting(class APrimalDinoCharacter** FromDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BPNotifyPreventDismounting");

	ABuff_AndyRider_C_BPNotifyPreventDismounting_Params params;
	params.FromDino = FromDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_AndyRider_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BPAdjustStatusValueModification");

	ABuff_AndyRider_C_BPAdjustStatusValueModification_Params params;
	params.ForComponent = ForComponent;
	params.ValueType = ValueType;
	params.InAmount = InAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndyRider.Buff_AndyRider_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_AndyRider_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BuffAdjustDamage");

	ABuff_AndyRider_C_BuffAdjustDamage_Params params;
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


// Function Buff_AndyRider.Buff_AndyRider_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AndyRider_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.BPPreventAddingOtherBuff");

	ABuff_AndyRider_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndyRider.Buff_AndyRider_C.UserConstructionScript
// ()

void ABuff_AndyRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.UserConstructionScript");

	ABuff_AndyRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyRider.Buff_AndyRider_C.ExecuteUbergraph_Buff_AndyRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyRider_C::ExecuteUbergraph_Buff_AndyRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyRider.Buff_AndyRider_C.ExecuteUbergraph_Buff_AndyRider");

	ABuff_AndyRider_C_ExecuteUbergraph_Buff_AndyRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
