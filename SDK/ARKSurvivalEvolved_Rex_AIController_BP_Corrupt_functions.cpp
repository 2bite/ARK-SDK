// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_AIController_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARex_AIController_BP_Corrupt_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor");

	ARex_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARex_AIController_BP_Corrupt_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPGetTargetingDesire");

	ARex_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARex_AIController_BP_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor");

	ARex_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPNotifyTargetSet
// ()

void ARex_AIController_BP_Corrupt_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPNotifyTargetSet");

	ARex_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.UserConstructionScript
// ()

void ARex_AIController_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.UserConstructionScript");

	ARex_AIController_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
// ()

void ARex_AIController_BP_Corrupt_C::CheckIfFlyerIsOutOfRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange");

	ARex_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.ExecuteUbergraph_Rex_AIController_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARex_AIController_BP_Corrupt_C::ExecuteUbergraph_Rex_AIController_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.ExecuteUbergraph_Rex_AIController_BP_Corrupt");

	ARex_AIController_BP_Corrupt_C_ExecuteUbergraph_Rex_AIController_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
