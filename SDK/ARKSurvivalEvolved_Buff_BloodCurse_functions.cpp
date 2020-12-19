// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BloodCurse.Buff_BloodCurse_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurse_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.BuffTickClient");

	ABuff_BloodCurse_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurse.Buff_BloodCurse_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurse_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.BPActivated");

	ABuff_BloodCurse_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurse.Buff_BloodCurse_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurse_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.BPDeactivated");

	ABuff_BloodCurse_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurse.Buff_BloodCurse_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurse_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.ReceiveTick");

	ABuff_BloodCurse_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurse.Buff_BloodCurse_C.UserConstructionScript
// ()

void ABuff_BloodCurse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.UserConstructionScript");

	ABuff_BloodCurse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodCurse.Buff_BloodCurse_C.ExecuteUbergraph_Buff_BloodCurse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodCurse_C::ExecuteUbergraph_Buff_BloodCurse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodCurse.Buff_BloodCurse_C.ExecuteUbergraph_Buff_BloodCurse");

	ABuff_BloodCurse_C_ExecuteUbergraph_Buff_BloodCurse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
