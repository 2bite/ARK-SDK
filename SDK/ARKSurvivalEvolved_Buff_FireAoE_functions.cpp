// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FireAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FireAoE.Buff_FireAoE_C.UserConstructionScript
// ()

void ABuff_FireAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.UserConstructionScript");

	ABuff_FireAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__FinishedFunc
// ()

void ABuff_FireAoE_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__FinishedFunc");

	ABuff_FireAoE_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__UpdateFunc
// ()

void ABuff_FireAoE_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.Timeline_0__UpdateFunc");

	ABuff_FireAoE_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FireAoE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ReceiveTick");

	ABuff_FireAoE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.SetStructure
// ()
// Parameters:
// class APrimalStructure*        NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FireAoE_C::SetStructure(class APrimalStructure* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.SetStructure");

	ABuff_FireAoE_C_SetStructure_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.DoFadeOutMesh
// ()

void ABuff_FireAoE_C::DoFadeOutMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.DoFadeOutMesh");

	ABuff_FireAoE_C_DoFadeOutMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.CheckForRain
// ()

void ABuff_FireAoE_C::CheckForRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.CheckForRain");

	ABuff_FireAoE_C_CheckForRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.ReceiveBeginPlay
// ()

void ABuff_FireAoE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ReceiveBeginPlay");

	ABuff_FireAoE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FireAoE.Buff_FireAoE_C.ExecuteUbergraph_Buff_FireAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FireAoE_C::ExecuteUbergraph_Buff_FireAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FireAoE.Buff_FireAoE_C.ExecuteUbergraph_Buff_FireAoE");

	ABuff_FireAoE_C_ExecuteUbergraph_Buff_FireAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
