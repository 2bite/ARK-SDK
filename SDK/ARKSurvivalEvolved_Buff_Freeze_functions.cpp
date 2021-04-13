// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Freeze_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Freeze.Buff_Freeze_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Freeze_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPServerHandleNetExecCommand");

	ABuff_Freeze_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Freeze.Buff_Freeze_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Freeze_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPPreventFirstPerson");

	ABuff_Freeze_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Freeze.Buff_Freeze_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Freeze_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.GetBuffPostprocessIntensity");

	ABuff_Freeze_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Freeze.Buff_Freeze_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Freeze_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPAdjustStatusValueModification");

	ABuff_Freeze_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_Freeze.Buff_Freeze_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Freeze_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPCustomAllowAddBuff");

	ABuff_Freeze_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Freeze.Buff_Freeze_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BuffTickClient");

	ABuff_Freeze_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.Initialize
// ()

void ABuff_Freeze_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.Initialize");

	ABuff_Freeze_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.CreateMIC
// (NetReliable, Exec, NetResponse, Static, Public, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ABuff_Freeze_C::STATIC_CreateMIC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.CreateMIC");

	ABuff_Freeze_C_CreateMIC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BuffTickServer");

	ABuff_Freeze_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.ApplyFrozenDebuff
// ()

void ABuff_Freeze_C::ApplyFrozenDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.ApplyFrozenDebuff");

	ABuff_Freeze_C_ApplyFrozenDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.AddFreeze
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::STATIC_AddFreeze(float amount, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.AddFreeze");

	ABuff_Freeze_C_AddFreeze_Params params;
	params.amount = amount;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.CheckDeactivateCondition
// ()

void ABuff_Freeze_C::CheckDeactivateCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.CheckDeactivateCondition");

	ABuff_Freeze_C_CheckDeactivateCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPActivated");

	ABuff_Freeze_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.BPDeactivated");

	ABuff_Freeze_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.UserConstructionScript
// ()

void ABuff_Freeze_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.UserConstructionScript");

	ABuff_Freeze_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.ChangeFreezingFX
// ()

void ABuff_Freeze_C::ChangeFreezingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.ChangeFreezingFX");

	ABuff_Freeze_C_ChangeFreezingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.MultiExtendBuffTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::MultiExtendBuffTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.MultiExtendBuffTime");

	ABuff_Freeze_C_MultiExtendBuffTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.MultiCreateFrozenMIC
// ()

void ABuff_Freeze_C::MultiCreateFrozenMIC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.MultiCreateFrozenMIC");

	ABuff_Freeze_C_MultiCreateFrozenMIC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.MultiAddFreeze
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::MultiAddFreeze(float amount, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.MultiAddFreeze");

	ABuff_Freeze_C_MultiAddFreeze_Params params;
	params.amount = amount;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.ReceiveBeginPlay
// ()

void ABuff_Freeze_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.ReceiveBeginPlay");

	ABuff_Freeze_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.ApplyFrozen
// ()

void ABuff_Freeze_C::ApplyFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.ApplyFrozen");

	ABuff_Freeze_C_ApplyFrozen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze.Buff_Freeze_C.ExecuteUbergraph_Buff_Freeze
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_C::ExecuteUbergraph_Buff_Freeze(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze.Buff_Freeze_C.ExecuteUbergraph_Buff_Freeze");

	ABuff_Freeze_C_ExecuteUbergraph_Buff_Freeze_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
