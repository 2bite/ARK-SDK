// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Leech_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Leech.Buff_Leech_C.BPInstigatorDied
// ()

void ABuff_Leech_C::BPInstigatorDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.BPInstigatorDied");

	ABuff_Leech_C_BPInstigatorDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech.Buff_Leech_C.NotifyDamage
// ()
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TheDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Leech_C::NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.NotifyDamage");

	ABuff_Leech_C_NotifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageClass = DamageClass;
	params.EventInstigator = EventInstigator;
	params.TheDamageCauser = TheDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech.Buff_Leech_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Leech_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.BPCustomAllowAddBuff");

	ABuff_Leech_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Leech.Buff_Leech_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Leech_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.BPTryMultiUse");

	ABuff_Leech_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Leech.Buff_Leech_C.BPGetMultiUseEntries
// (NetReliable, Native, Event, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_Leech_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.BPGetMultiUseEntries");

	ABuff_Leech_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_Leech.Buff_Leech_C.BPSetupForInstigator
// (NetReliable, Exec, Native, NetResponse, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Leech_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.BPSetupForInstigator");

	ABuff_Leech_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech.Buff_Leech_C.UserConstructionScript
// ()

void ABuff_Leech_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.UserConstructionScript");

	ABuff_Leech_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech.Buff_Leech_C.ExecuteUbergraph_Buff_Leech
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Leech_C::ExecuteUbergraph_Buff_Leech(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech.Buff_Leech_C.ExecuteUbergraph_Buff_Leech");

	ABuff_Leech_C_ExecuteUbergraph_Buff_Leech_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
