// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_AI_Blueprint_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpino_AI_Blueprint_Corrupt_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyAnyNeighbor");

	ASpino_AI_Blueprint_Corrupt_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpino_AI_Blueprint_Corrupt_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPGetTargetingDesire");

	ASpino_AI_Blueprint_Corrupt_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpino_AI_Blueprint_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor");

	ASpino_AI_Blueprint_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPNotifyTargetSet
// ()

void ASpino_AI_Blueprint_Corrupt_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPNotifyTargetSet");

	ASpino_AI_Blueprint_Corrupt_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.UserConstructionScript
// ()

void ASpino_AI_Blueprint_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.UserConstructionScript");

	ASpino_AI_Blueprint_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange
// ()

void ASpino_AI_Blueprint_Corrupt_C::CheckIfFlyerIsOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange");

	ASpino_AI_Blueprint_Corrupt_C_CheckIfFlyerIsOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Spino_AI_Blueprint_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_AI_Blueprint_Corrupt_C::ExecuteUbergraph_Spino_AI_Blueprint_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Spino_AI_Blueprint_Corrupt");

	ASpino_AI_Blueprint_Corrupt_C_ExecuteUbergraph_Spino_AI_Blueprint_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
