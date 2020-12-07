// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_AIController_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeathworm_AIController_BP_Corrupt_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor");

	ADeathworm_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeathworm_AIController_BP_Corrupt_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPGetTargetingDesire");

	ADeathworm_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeathworm_AIController_BP_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor");

	ADeathworm_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPNotifyTargetSet
// ()

void ADeathworm_AIController_BP_Corrupt_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPNotifyTargetSet");

	ADeathworm_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.UserConstructionScript
// ()

void ADeathworm_AIController_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.UserConstructionScript");

	ADeathworm_AIController_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
// ()

void ADeathworm_AIController_BP_Corrupt_C::CheckIfFlyerIsOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange");

	ADeathworm_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.ExecuteUbergraph_Deathworm_AIController_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_AIController_BP_Corrupt_C::ExecuteUbergraph_Deathworm_AIController_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.ExecuteUbergraph_Deathworm_AIController_BP_Corrupt");

	ADeathworm_AIController_BP_Corrupt_C_ExecuteUbergraph_Deathworm_AIController_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif