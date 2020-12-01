// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ShouldEnableTimers");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.CanEmitCharge");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.AttachBuffToPlant
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::AttachBuffToPlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.AttachBuffToPlant");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_AttachBuffToPlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.UserConstructionScript
// ()

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.UserConstructionScript");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C::ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew.Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew");

	ABuff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_PlayerGrownNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
