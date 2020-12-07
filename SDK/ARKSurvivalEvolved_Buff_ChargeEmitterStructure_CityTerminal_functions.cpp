// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_CityTerminal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_CityTerminal_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.ShouldEnableTimers");

	ABuff_ChargeEmitterStructure_CityTerminal_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterStructure_CityTerminal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.UserConstructionScript");

	ABuff_ChargeEmitterStructure_CityTerminal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_CityTerminal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_CityTerminal_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_CityTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_CityTerminal");

	ABuff_ChargeEmitterStructure_CityTerminal_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_CityTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
