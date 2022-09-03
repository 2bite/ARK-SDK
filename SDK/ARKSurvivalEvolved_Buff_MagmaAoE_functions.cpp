// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MagmaAoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MagmaAoE_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.BPExcludeAoEActor");

	ABuff_MagmaAoE_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript
// ()

void ABuff_MagmaAoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.UserConstructionScript");

	ABuff_MagmaAoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc
// ()

void ABuff_MagmaAoE_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__FinishedFunc");

	ABuff_MagmaAoE_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc
// ()

void ABuff_MagmaAoE_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.Timeline_0__UpdateFunc");

	ABuff_MagmaAoE_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MagmaAoE_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveTick");

	ABuff_MagmaAoE_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure
// ()
// Parameters:
// class APrimalStructure*        NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MagmaAoE_C::SetStructure(class APrimalStructure* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.SetStructure");

	ABuff_MagmaAoE_C_SetStructure_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh
// ()

void ABuff_MagmaAoE_C::DoFadeOutMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.DoFadeOutMesh");

	ABuff_MagmaAoE_C_DoFadeOutMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain
// ()

void ABuff_MagmaAoE_C::CheckForRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.CheckForRain");

	ABuff_MagmaAoE_C_CheckForRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay
// ()

void ABuff_MagmaAoE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ReceiveBeginPlay");

	ABuff_MagmaAoE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MagmaAoE_C::ExecuteUbergraph_Buff_MagmaAoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MagmaAoE.Buff_MagmaAoE_C.ExecuteUbergraph_Buff_MagmaAoE");

	ABuff_MagmaAoE_C_ExecuteUbergraph_Buff_MagmaAoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
