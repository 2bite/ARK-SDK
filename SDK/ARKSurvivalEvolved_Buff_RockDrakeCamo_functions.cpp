// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RockDrakeCamo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RockDrakeCamo_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickClient");

	ABuff_RockDrakeCamo_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RockDrakeCamo_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.BuffTickServer");

	ABuff_RockDrakeCamo_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RockDrakeCamo_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.PreventActorTargeting");

	ABuff_RockDrakeCamo_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.UserConstructionScript
// ()

void ABuff_RockDrakeCamo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.UserConstructionScript");

	ABuff_RockDrakeCamo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.ExecuteUbergraph_Buff_RockDrakeCamo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RockDrakeCamo_C::ExecuteUbergraph_Buff_RockDrakeCamo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeCamo.Buff_RockDrakeCamo_C.ExecuteUbergraph_Buff_RockDrakeCamo");

	ABuff_RockDrakeCamo_C_ExecuteUbergraph_Buff_RockDrakeCamo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
