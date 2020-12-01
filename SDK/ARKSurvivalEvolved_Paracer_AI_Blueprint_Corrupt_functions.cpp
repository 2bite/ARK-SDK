// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_AI_Blueprint_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AParacer_AI_Blueprint_Corrupt_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPGetTargetingDesire");

	AParacer_AI_Blueprint_Corrupt_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AParacer_AI_Blueprint_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor");

	AParacer_AI_Blueprint_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPNotifyTargetSet
// ()

void AParacer_AI_Blueprint_Corrupt_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPNotifyTargetSet");

	AParacer_AI_Blueprint_Corrupt_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.UserConstructionScript
// ()

void AParacer_AI_Blueprint_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.UserConstructionScript");

	AParacer_AI_Blueprint_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange
// ()

void AParacer_AI_Blueprint_Corrupt_C::CheckIfFlyerIsOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange");

	AParacer_AI_Blueprint_Corrupt_C_CheckIfFlyerIsOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParacer_AI_Blueprint_Corrupt_C::ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt");

	AParacer_AI_Blueprint_Corrupt_C_ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif