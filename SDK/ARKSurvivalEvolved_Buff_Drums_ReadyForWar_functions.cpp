// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Drums_ReadyForWar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried
// ()
// Parameters:
// class APrimalCharacter**       ByCarrier                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Drums_ReadyForWar_C::BPCanBeCarried(class APrimalCharacter** ByCarrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPCanBeCarried");

	ABuff_Drums_ReadyForWar_C_BPCanBeCarried_Params params;
	params.ByCarrier = ByCarrier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Drums_ReadyForWar_C::BPInterceptUseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPInterceptUseAction");

	ABuff_Drums_ReadyForWar_C_BPInterceptUseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Drums_ReadyForWar_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.BPDeactivated");

	ABuff_Drums_ReadyForWar_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript
// ()

void ABuff_Drums_ReadyForWar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.UserConstructionScript");

	ABuff_Drums_ReadyForWar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount
// ()

void ABuff_Drums_ReadyForWar_C::AllowDismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.AllowDismount");

	ABuff_Drums_ReadyForWar_C_AllowDismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount
// ()

void ABuff_Drums_ReadyForWar_C::PreventDismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.PreventDismount");

	ABuff_Drums_ReadyForWar_C_PreventDismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Drums_ReadyForWar_C::ExecuteUbergraph_Buff_Drums_ReadyForWar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C.ExecuteUbergraph_Buff_Drums_ReadyForWar");

	ABuff_Drums_ReadyForWar_C_ExecuteUbergraph_Buff_Drums_ReadyForWar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
