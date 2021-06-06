// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_TekPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Stunned_TekPistol_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCheckPreventInput");

	ABuff_Stunned_TekPistol_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Stunned_TekPistol_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPCustomAllowAddBuff");

	ABuff_Stunned_TekPistol_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_TekPistol_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPDeactivated");

	ABuff_Stunned_TekPistol_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_TekPistol_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.BPSetupForInstigator");

	ABuff_Stunned_TekPistol_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.UserConstructionScript
// ()

void ABuff_Stunned_TekPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.UserConstructionScript");

	ABuff_Stunned_TekPistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.ExecuteUbergraph_Buff_Stunned_TekPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_TekPistol_C::ExecuteUbergraph_Buff_Stunned_TekPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_TekPistol.Buff_Stunned_TekPistol_C.ExecuteUbergraph_Buff_Stunned_TekPistol");

	ABuff_Stunned_TekPistol_C_ExecuteUbergraph_Buff_Stunned_TekPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
