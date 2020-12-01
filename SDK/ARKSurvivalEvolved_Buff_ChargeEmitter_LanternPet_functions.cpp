// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_LanternPet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LanternPet_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ShouldEnableTimers");

	ABuff_ChargeEmitter_LanternPet_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double*                        dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LanternPet_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ChargeVariableEvent");

	ABuff_ChargeEmitter_LanternPet_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed
// ()

void ABuff_ChargeEmitter_LanternPet_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ReceiveDestroyed");

	ABuff_ChargeEmitter_LanternPet_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LanternPet_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.BuffTickServer");

	ABuff_ChargeEmitter_LanternPet_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_LanternPet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.UserConstructionScript");

	ABuff_ChargeEmitter_LanternPet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LanternPet_C::ExecuteUbergraph_Buff_ChargeEmitter_LanternPet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C.ExecuteUbergraph_Buff_ChargeEmitter_LanternPet");

	ABuff_ChargeEmitter_LanternPet_C_ExecuteUbergraph_Buff_ChargeEmitter_LanternPet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
