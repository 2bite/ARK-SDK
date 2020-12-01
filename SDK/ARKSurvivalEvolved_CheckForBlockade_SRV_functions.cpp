// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckForBlockade_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForBlockade_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveTick");

	UCheckForBlockade_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForBlockade_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveActivation");

	UCheckForBlockade_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveDeactivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForBlockade_SRV_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ReceiveDeactivation");

	UCheckForBlockade_SRV_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ExecuteUbergraph_CheckForBlockade_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForBlockade_SRV_C::ExecuteUbergraph_CheckForBlockade_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForBlockade_SRV.CheckForBlockade_SRV_C.ExecuteUbergraph_CheckForBlockade_SRV");

	UCheckForBlockade_SRV_C_ExecuteUbergraph_CheckForBlockade_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
