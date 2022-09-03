// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmargaSpikeArmorModifier_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_AmargaSpikeArmorModifier_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage");

	ABuff_AmargaSpikeArmorModifier_C_BuffAdjustDamage_Params params;
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


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, NetServer, NetClient, BlueprintEvent)

void ABuff_AmargaSpikeArmorModifier_C::STATIC_UpdateBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription");

	ABuff_AmargaSpikeArmorModifier_C_UpdateBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmargaSpikeArmorModifier_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient");

	ABuff_AmargaSpikeArmorModifier_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmargaSpikeArmorModifier_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer");

	ABuff_AmargaSpikeArmorModifier_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff
// (NetReliable, Exec, Native, Event, Static, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AmargaSpikeArmorModifier_C::STATIC_BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff");

	ABuff_AmargaSpikeArmorModifier_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue
// (NetResponse, Static, Public, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class UPrimalItem**            ForItem                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BaseArmorValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_AmargaSpikeArmorModifier_C::STATIC_BPModifyArmorValue(class UPrimalItem** ForItem, float* BaseArmorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue");

	ABuff_AmargaSpikeArmorModifier_C_BPModifyArmorValue_Params params;
	params.ForItem = ForItem;
	params.BaseArmorValue = BaseArmorValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript
// ()

void ABuff_AmargaSpikeArmorModifier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript");

	ABuff_AmargaSpikeArmorModifier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AmargaSpikeArmorModifier_C::ExecuteUbergraph_Buff_AmargaSpikeArmorModifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier");

	ABuff_AmargaSpikeArmorModifier_C_ExecuteUbergraph_Buff_AmargaSpikeArmorModifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
