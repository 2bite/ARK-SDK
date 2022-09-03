// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EcholocationDetect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Stencil_Value                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasCustomDepth                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EcholocationDetect_C::Set_Custom_Depth_Stencil_ValueForActor(class AActor* Actor, int Stencil_Value, bool HasCustomDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.Set Custom Depth Stencil ValueForActor");

	ABuff_EcholocationDetect_C_Set_Custom_Depth_Stencil_ValueForActor_Params params;
	params.Actor = Actor;
	params.Stencil_Value = Stencil_Value;
	params.HasCustomDepth = HasCustomDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EcholocationDetect_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BuffTickClient");

	ABuff_EcholocationDetect_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EcholocationDetect_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.BPDeactivated");

	ABuff_EcholocationDetect_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay
// ()

void ABuff_EcholocationDetect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ReceiveBeginPlay");

	ABuff_EcholocationDetect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript
// ()

void ABuff_EcholocationDetect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.UserConstructionScript");

	ABuff_EcholocationDetect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EcholocationDetect_C::ExecuteUbergraph_Buff_EcholocationDetect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EcholocationDetect.Buff_EcholocationDetect_C.ExecuteUbergraph_Buff_EcholocationDetect");

	ABuff_EcholocationDetect_C_ExecuteUbergraph_Buff_EcholocationDetect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
