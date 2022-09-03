// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChalicoSit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChalicoSit.Buff_ChalicoSit_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChalicoSit_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChalicoSit.Buff_ChalicoSit_C.BuffTickServer");

	ABuff_ChalicoSit_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChalicoSit.Buff_ChalicoSit_C.BPPreventCharacterStatusValueModifiers
// ()
// Parameters:
// class APrimalCharacter**       ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChalicoSit_C::BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChalicoSit.Buff_ChalicoSit_C.BPPreventCharacterStatusValueModifiers");

	ABuff_ChalicoSit_C_BPPreventCharacterStatusValueModifiers_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChalicoSit.Buff_ChalicoSit_C.UserConstructionScript
// ()

void ABuff_ChalicoSit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChalicoSit.Buff_ChalicoSit_C.UserConstructionScript");

	ABuff_ChalicoSit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChalicoSit.Buff_ChalicoSit_C.ExecuteUbergraph_Buff_ChalicoSit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChalicoSit_C::ExecuteUbergraph_Buff_ChalicoSit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChalicoSit.Buff_ChalicoSit_C.ExecuteUbergraph_Buff_ChalicoSit");

	ABuff_ChalicoSit_C_ExecuteUbergraph_Buff_ChalicoSit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
