// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_AIController_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADimorph_AIController_BP_Corrupt_C::BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor");

	ADimorph_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADimorph_AIController_BP_Corrupt_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor");

	ADimorph_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.UserConstructionScript
// ()

void ADimorph_AIController_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.UserConstructionScript");

	ADimorph_AIController_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.ExecuteUbergraph_Dimorph_AIController_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimorph_AIController_BP_Corrupt_C::ExecuteUbergraph_Dimorph_AIController_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_AIController_BP_Corrupt.Dimorph_AIController_BP_Corrupt_C.ExecuteUbergraph_Dimorph_AIController_BP_Corrupt");

	ADimorph_AIController_BP_Corrupt_C_ExecuteUbergraph_Dimorph_AIController_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
