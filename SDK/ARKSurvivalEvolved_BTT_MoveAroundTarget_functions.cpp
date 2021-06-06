// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_MoveAroundTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget
// ()
// Parameters:
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLoc                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAroundTarget_C::GetPointsAroundTarget(float Direction, const struct FVector& StartLoc, const struct FVector& EndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget");

	UBTT_MoveAroundTarget_C_GetPointsAroundTarget_Params params;
	params.Direction = Direction;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAroundTarget_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick");

	UBTT_MoveAroundTarget_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAroundTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute");

	UBTT_MoveAroundTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveAroundTarget_C::ExecuteUbergraph_BTT_MoveAroundTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget");

	UBTT_MoveAroundTarget_C_ExecuteUbergraph_BTT_MoveAroundTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
