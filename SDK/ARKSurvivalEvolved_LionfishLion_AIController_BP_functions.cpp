// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_AIController_BP_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPShouldNotifyNeighbor");

	ALionfishLion_AIController_BP_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPSetupFindTarget
// ()

void ALionfishLion_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPSetupFindTarget");

	ALionfishLion_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.
// ()
// Parameters:
// float                          _1                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          _2                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_AIController_BP_C::(float _1, float _2, float* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.");

	ALionfishLion_AIController_BP_C__Params params;
	params._1 = _1;
	params._2 = _2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is night
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALionfishLion_AIController_BP_C::is_night()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is night");

	ALionfishLion_AIController_BP_C_is_night_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is line of sight blocked
// (NetReliable, NetRequest, Exec, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_AIController_BP_C::is_line_of_sight_blocked(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.is line of sight blocked");

	ALionfishLion_AIController_BP_C_is_line_of_sight_blocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.Check if Viewed by Players
// (NetRequest, Native, Event, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const)

void ALionfishLion_AIController_BP_C::Check_if_Viewed_by_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.Check if Viewed by Players");

	ALionfishLion_AIController_BP_C_Check_if_Viewed_by_Players_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPNotifyTargetSet
// (Event, NetResponse, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const)

void ALionfishLion_AIController_BP_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.BPNotifyTargetSet");

	ALionfishLion_AIController_BP_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.UserConstructionScript
// ()

void ALionfishLion_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.UserConstructionScript");

	ALionfishLion_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.ExecuteUbergraph_LionfishLion_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALionfishLion_AIController_BP_C::ExecuteUbergraph_LionfishLion_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLion_AIController_BP.LionfishLion_AIController_BP_C.ExecuteUbergraph_LionfishLion_AIController_BP");

	ALionfishLion_AIController_BP_C_ExecuteUbergraph_LionfishLion_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
