// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Uberraptor_Bleed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.CalculateDoTDamage
// ()
// Parameters:
// float                          TimeSinceLastDoT               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Uberraptor_Bleed_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.CalculateDoTDamage");

	ABuff_Uberraptor_Bleed_C_CalculateDoTDamage_Params params;
	params.TimeSinceLastDoT = TimeSinceLastDoT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Uberraptor_Bleed_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BuffTickServer");

	ABuff_Uberraptor_Bleed_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.Do Damage Over TimeFn
// (Net, NetReliable, Exec, Native, NetMulticast, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// double                         LastDotTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Uberraptor_Bleed_C::Do_Damage_Over_TimeFn(double LastDotTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.Do Damage Over TimeFn");

	ABuff_Uberraptor_Bleed_C_Do_Damage_Over_TimeFn_Params params;
	params.LastDotTime = LastDotTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BPAdjustStatusValueModification
// (Net, NetRequest, Native, Event, NetMulticast, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Uberraptor_Bleed_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.BPAdjustStatusValueModification");

	ABuff_Uberraptor_Bleed_C_BPAdjustStatusValueModification_Params params;
	params.ForComponent = ForComponent;
	params.ValueType = ValueType;
	params.InAmount = InAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveBeginPlay
// ()

void ABuff_Uberraptor_Bleed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveBeginPlay");

	ABuff_Uberraptor_Bleed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Uberraptor_Bleed_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ReceiveEndPlay");

	ABuff_Uberraptor_Bleed_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.UserConstructionScript
// ()

void ABuff_Uberraptor_Bleed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.UserConstructionScript");

	ABuff_Uberraptor_Bleed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ExecuteUbergraph_Buff_Uberraptor_Bleed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Uberraptor_Bleed_C::ExecuteUbergraph_Buff_Uberraptor_Bleed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Uberraptor_Bleed.Buff_Uberraptor_Bleed_C.ExecuteUbergraph_Buff_Uberraptor_Bleed");

	ABuff_Uberraptor_Bleed_C_ExecuteUbergraph_Buff_Uberraptor_Bleed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
