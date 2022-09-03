// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_DinoMoveTowardsTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_DinoMoveTowardsTarget_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveAbort");

	UBTT_DinoMoveTowardsTarget_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_DinoMoveTowardsTarget_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveTick");

	UBTT_DinoMoveTowardsTarget_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_DinoMoveTowardsTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ReceiveExecute");

	UBTT_DinoMoveTowardsTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_DinoMoveTowardsTarget_C::ExecuteUbergraph_BTT_DinoMoveTowardsTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C.ExecuteUbergraph_BTT_DinoMoveTowardsTarget");

	UBTT_DinoMoveTowardsTarget_C_ExecuteUbergraph_BTT_DinoMoveTowardsTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
