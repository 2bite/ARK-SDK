// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInputMolerat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputMolerat_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPDeactivated");

	ABuff_PreventInputMolerat_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputMolerat_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPSetupForInstigator");

	ABuff_PreventInputMolerat_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PreventInputMolerat_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPPreventFirstPerson");

	ABuff_PreventInputMolerat_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.UserConstructionScript
// ()

void ABuff_PreventInputMolerat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.UserConstructionScript");

	ABuff_PreventInputMolerat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.ExecuteUbergraph_Buff_PreventInputMolerat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputMolerat_C::ExecuteUbergraph_Buff_PreventInputMolerat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.ExecuteUbergraph_Buff_PreventInputMolerat");

	ABuff_PreventInputMolerat_C_ExecuteUbergraph_Buff_PreventInputMolerat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
