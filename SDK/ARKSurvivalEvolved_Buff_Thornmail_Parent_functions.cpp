// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Parent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BPDeactivated");

	ABuff_Thornmail_Parent_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.CalculateDoTDamage
// ()
// Parameters:
// float                          TimeSinceLastDoT               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.CalculateDoTDamage");

	ABuff_Thornmail_Parent_C_CalculateDoTDamage_Params params;
	params.TimeSinceLastDoT = TimeSinceLastDoT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BuffTickServer");

	ABuff_Thornmail_Parent_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.Do Damage Over TimeFn
// (NetRequest, Native, Event, NetResponse, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// double                         LastDotTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::Do_Damage_Over_TimeFn(double LastDotTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.Do Damage Over TimeFn");

	ABuff_Thornmail_Parent_C_Do_Damage_Over_TimeFn_Params params;
	params.LastDotTime = LastDotTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BPAdjustStatusValueModification
// (NetReliable, NetRequest, Exec, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Thornmail_Parent_C::STATIC_BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.BPAdjustStatusValueModification");

	ABuff_Thornmail_Parent_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ReceiveBeginPlay
// ()

void ABuff_Thornmail_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ReceiveBeginPlay");

	ABuff_Thornmail_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ReceiveEndPlay");

	ABuff_Thornmail_Parent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.UserConstructionScript
// ()

void ABuff_Thornmail_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.UserConstructionScript");

	ABuff_Thornmail_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ExecuteUbergraph_Buff_Thornmail_Parent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Thornmail_Parent_C::ExecuteUbergraph_Buff_Thornmail_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Thornmail_Parent.Buff_Thornmail_Parent_C.ExecuteUbergraph_Buff_Thornmail_Parent");

	ABuff_Thornmail_Parent_C_ExecuteUbergraph_Buff_Thornmail_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
