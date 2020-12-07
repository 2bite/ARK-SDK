// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInput_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventInput.Buff_PreventInput_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PreventInput_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInput.Buff_PreventInput_C.BPCheckPreventInput");

	ABuff_PreventInput_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PreventInput.Buff_PreventInput_C.UserConstructionScript
// ()

void ABuff_PreventInput_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInput.Buff_PreventInput_C.UserConstructionScript");

	ABuff_PreventInput_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInput.Buff_PreventInput_C.ExecuteUbergraph_Buff_PreventInput
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInput_C::ExecuteUbergraph_Buff_PreventInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInput.Buff_PreventInput_C.ExecuteUbergraph_Buff_PreventInput");

	ABuff_PreventInput_C_ExecuteUbergraph_Buff_PreventInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
