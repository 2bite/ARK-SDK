// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RestingDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RestingDino.Buff_RestingDino_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RestingDino_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino.Buff_RestingDino_C.BuffTickServer");

	ABuff_RestingDino_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestingDino.Buff_RestingDino_C.BPPreventCharacterStatusValueModifiers
// ()
// Parameters:
// class APrimalCharacter**       ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RestingDino_C::BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino.Buff_RestingDino_C.BPPreventCharacterStatusValueModifiers");

	ABuff_RestingDino_C_BPPreventCharacterStatusValueModifiers_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RestingDino.Buff_RestingDino_C.UserConstructionScript
// ()

void ABuff_RestingDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino.Buff_RestingDino_C.UserConstructionScript");

	ABuff_RestingDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestingDino.Buff_RestingDino_C.ExecuteUbergraph_Buff_RestingDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RestingDino_C::ExecuteUbergraph_Buff_RestingDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RestingDino.Buff_RestingDino_C.ExecuteUbergraph_Buff_RestingDino");

	ABuff_RestingDino_C_ExecuteUbergraph_Buff_RestingDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
