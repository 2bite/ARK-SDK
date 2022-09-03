// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_Cooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_Cooldown_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPPreSetupForInstigator");

	ABuff_Flashbang_Cooldown_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Flashbang_Cooldown_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPCheckPreventInput");

	ABuff_Flashbang_Cooldown_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.UserConstructionScript
// ()

void ABuff_Flashbang_Cooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.UserConstructionScript");

	ABuff_Flashbang_Cooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.ExecuteUbergraph_Buff_Flashbang_Cooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_Cooldown_C::ExecuteUbergraph_Buff_Flashbang_Cooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.ExecuteUbergraph_Buff_Flashbang_Cooldown");

	ABuff_Flashbang_Cooldown_C_ExecuteUbergraph_Buff_Flashbang_Cooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
