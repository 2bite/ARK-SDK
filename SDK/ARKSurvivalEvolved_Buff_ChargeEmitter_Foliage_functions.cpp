// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast
// ()
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void ABuff_ChargeEmitter_Foliage_C::GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetActorsToIgnoreOnRaycast");

	ABuff_ChargeEmitter_Foliage_C_GetActorsToIgnoreOnRaycast_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_C::GetEmitterActor(class AActor** emitterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.GetEmitterActor");

	ABuff_ChargeEmitter_Foliage_C_GetEmitterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (emitterActor != nullptr)
		*emitterActor = params.emitterActor;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* VariableName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_C::Get_Charge_Variable(TEnumAsByte<E_ChargeVariableNames>* VariableName, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.Get Charge Variable");

	ABuff_ChargeEmitter_Foliage_C_Get_Charge_Variable_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.CanEmitCharge");

	ABuff_ChargeEmitter_Foliage_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_Foliage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.UserConstructionScript");

	ABuff_ChargeEmitter_Foliage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay
// ()

void ABuff_ChargeEmitter_Foliage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ReceiveBeginPlay");

	ABuff_ChargeEmitter_Foliage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Foliage_C::ExecuteUbergraph_Buff_ChargeEmitter_Foliage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C.ExecuteUbergraph_Buff_ChargeEmitter_Foliage");

	ABuff_ChargeEmitter_Foliage_C_ExecuteUbergraph_Buff_ChargeEmitter_Foliage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
