// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTService_StopRunningIfWithinDistance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_StopRunningIfWithinDistance_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveTick");

	UBTService_StopRunningIfWithinDistance_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_StopRunningIfWithinDistance_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveDeactivation");

	UBTService_StopRunningIfWithinDistance_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_StopRunningIfWithinDistance_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ReceiveActivation");

	UBTService_StopRunningIfWithinDistance_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTService_StopRunningIfWithinDistance_C::ExecuteUbergraph_BTService_StopRunningIfWithinDistance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C.ExecuteUbergraph_BTService_StopRunningIfWithinDistance");

	UBTService_StopRunningIfWithinDistance_C_ExecuteUbergraph_BTService_StopRunningIfWithinDistance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
