// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PredatorVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PredatorVision_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickServer");

	ABuff_PredatorVision_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.ReceiveBeginPlay
// ()

void ABuff_PredatorVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.ReceiveBeginPlay");

	ABuff_PredatorVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PredatorVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.BuffTickClient");

	ABuff_PredatorVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PredatorVision_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.BPDeactivated");

	ABuff_PredatorVision_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PredatorVision_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.BPActivated");

	ABuff_PredatorVision_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.UserConstructionScript
// ()

void ABuff_PredatorVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.UserConstructionScript");

	ABuff_PredatorVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PredatorVision.Buff_PredatorVision_C.ExecuteUbergraph_Buff_PredatorVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PredatorVision_C::ExecuteUbergraph_Buff_PredatorVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PredatorVision.Buff_PredatorVision_C.ExecuteUbergraph_Buff_PredatorVision");

	ABuff_PredatorVision_C_ExecuteUbergraph_Buff_PredatorVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
