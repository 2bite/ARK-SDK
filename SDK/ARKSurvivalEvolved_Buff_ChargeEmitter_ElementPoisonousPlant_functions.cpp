// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_ElementPoisonousPlant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetEmitterActor
// ()
// Parameters:
// class AActor*                  emitterActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::GetEmitterActor(class AActor** emitterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetEmitterActor");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetEmitterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (emitterActor != nullptr)
		*emitterActor = params.emitterActor;
}


// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ShouldEnableTimers");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetActorsToIgnoreOnRaycast
// ()
// Parameters:
// class AActor**                 emitterActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.GetActorsToIgnoreOnRaycast");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_GetActorsToIgnoreOnRaycast_Params params;
	params.emitterActor = emitterActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
}


// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.CanEmitCharge");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.UserConstructionScript");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_ElementPoisonousPlant_C::ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_ElementPoisonousPlant.Buff_ChargeEmitter_ElementPoisonousPlant_C.ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant");

	ABuff_ChargeEmitter_ElementPoisonousPlant_C_ExecuteUbergraph_Buff_ChargeEmitter_ElementPoisonousPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
