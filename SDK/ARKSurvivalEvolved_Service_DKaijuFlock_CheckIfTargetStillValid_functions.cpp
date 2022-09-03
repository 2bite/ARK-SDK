// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKaijuFlock_CheckIfTargetStillValid_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuFlock_CheckIfTargetStillValid_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveTick");

	UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuFlock_CheckIfTargetStillValid_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ReceiveActivation");

	UService_DKaijuFlock_CheckIfTargetStillValid_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuFlock_CheckIfTargetStillValid_C::ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuFlock_CheckIfTargetStillValid.Service_DKaijuFlock_CheckIfTargetStillValid_C.ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid");

	UService_DKaijuFlock_CheckIfTargetStillValid_C_ExecuteUbergraph_Service_DKaijuFlock_CheckIfTargetStillValid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
