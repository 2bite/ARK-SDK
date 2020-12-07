// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Male_AIController_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Male_AIController_BP_Corrupt_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor");

	AXenomorph_Male_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Male_AIController_BP_Corrupt_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPGetTargetingDesire");

	AXenomorph_Male_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Male_AIController_BP_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor");

	AXenomorph_Male_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.UserConstructionScript
// ()

void AXenomorph_Male_AIController_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.UserConstructionScript");

	AXenomorph_Male_AIController_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Male_AIController_BP_Corrupt_C::ExecuteUbergraph_Xenomorph_Male_AIController_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C.ExecuteUbergraph_Xenomorph_Male_AIController_BP_Corrupt");

	AXenomorph_Male_AIController_BP_Corrupt_C_ExecuteUbergraph_Xenomorph_Male_AIController_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
