// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Female_LFL_Maxcombo_Parent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage
// ()
// Parameters:
// float                          TimeSinceLastDoT               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Female_LFL_Maxcombo_Parent_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage");

	ABuff_Female_LFL_Maxcombo_Parent_C_CalculateDoTDamage_Params params;
	params.TimeSinceLastDoT = TimeSinceLastDoT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Female_LFL_Maxcombo_Parent_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer");

	ABuff_Female_LFL_Maxcombo_Parent_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn
// (NetReliable, NetRequest, NetResponse, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                         LastDotTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Female_LFL_Maxcombo_Parent_C::Do_Damage_Over_TimeFn(double LastDotTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn");

	ABuff_Female_LFL_Maxcombo_Parent_C_Do_Damage_Over_TimeFn_Params params;
	params.LastDotTime = LastDotTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification
// (Event, NetResponse, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Female_LFL_Maxcombo_Parent_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification");

	ABuff_Female_LFL_Maxcombo_Parent_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay
// ()

void ABuff_Female_LFL_Maxcombo_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay");

	ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Female_LFL_Maxcombo_Parent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay");

	ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript
// ()

void ABuff_Female_LFL_Maxcombo_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript");

	ABuff_Female_LFL_Maxcombo_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Female_LFL_Maxcombo_Parent_C::ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent");

	ABuff_Female_LFL_Maxcombo_Parent_C_ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
