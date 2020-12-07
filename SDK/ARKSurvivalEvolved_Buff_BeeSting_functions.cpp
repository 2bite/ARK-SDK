// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BeeSting_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BeeSting.Buff_BeeSting_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BeeSting_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.BPPreventAddingOtherBuff");

	ABuff_BeeSting_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BeeSting.Buff_BeeSting_C.ResetValues
// ()

void ABuff_BeeSting_C::ResetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.ResetValues");

	ABuff_BeeSting_C_ResetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BeeSting.Buff_BeeSting_C.UserConstructionScript
// ()

void ABuff_BeeSting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.UserConstructionScript");

	ABuff_BeeSting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BeeSting.Buff_BeeSting_C.ReceiveBeginPlay
// ()

void ABuff_BeeSting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.ReceiveBeginPlay");

	ABuff_BeeSting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BeeSting.Buff_BeeSting_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BeeSting_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.ReceiveEndPlay");

	ABuff_BeeSting_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BeeSting.Buff_BeeSting_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BeeSting_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.BuffTickServer");

	ABuff_BeeSting_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BeeSting.Buff_BeeSting_C.ExecuteUbergraph_Buff_BeeSting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BeeSting_C::ExecuteUbergraph_Buff_BeeSting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BeeSting.Buff_BeeSting_C.ExecuteUbergraph_Buff_BeeSting");

	ABuff_BeeSting_C_ExecuteUbergraph_Buff_BeeSting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
