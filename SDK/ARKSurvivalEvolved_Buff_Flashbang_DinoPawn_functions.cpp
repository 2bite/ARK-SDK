// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_DinoPawn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.IsDotProductValid
// ()

void ABuff_Flashbang_DinoPawn_C::IsDotProductValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.IsDotProductValid");

	ABuff_Flashbang_DinoPawn_C_IsDotProductValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_DinoPawn_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPPreSetupForInstigator");

	ABuff_Flashbang_DinoPawn_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_DinoPawn_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPSetupForInstigator");

	ABuff_Flashbang_DinoPawn_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.PlayStartledAnim
// ()

void ABuff_Flashbang_DinoPawn_C::PlayStartledAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.PlayStartledAnim");

	ABuff_Flashbang_DinoPawn_C_PlayStartledAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Flashbang_DinoPawn_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPCheckPreventInput");

	ABuff_Flashbang_DinoPawn_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.UserConstructionScript
// ()

void ABuff_Flashbang_DinoPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.UserConstructionScript");

	ABuff_Flashbang_DinoPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_DinoPawn_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.BPActivated");

	ABuff_Flashbang_DinoPawn_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Flashbang_DinoPawn_C::ExecuteUbergraph_Buff_Flashbang_DinoPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn");

	ABuff_Flashbang_DinoPawn_C_ExecuteUbergraph_Buff_Flashbang_DinoPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
