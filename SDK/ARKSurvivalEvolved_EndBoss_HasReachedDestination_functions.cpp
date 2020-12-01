// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_HasReachedDestination_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.IsBossStuck
// ()
// Parameters:
// class APrimalDinoAIController* bossController                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isVelocityLow                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isNavigationInvalid            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndBoss_HasReachedDestination_C::IsBossStuck(class APrimalDinoAIController* bossController, bool* isVelocityLow, bool* isNavigationInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.IsBossStuck");

	UEndBoss_HasReachedDestination_C_IsBossStuck_Params params;
	params.bossController = bossController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isVelocityLow != nullptr)
		*isVelocityLow = params.isVelocityLow;
	if (isNavigationInvalid != nullptr)
		*isNavigationInvalid = params.isNavigationInvalid;
}


// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndBoss_HasReachedDestination_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveActivation");

	UEndBoss_HasReachedDestination_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UEndBoss_HasReachedDestination_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveTick");

	UEndBoss_HasReachedDestination_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ExecuteUbergraph_EndBoss_HasReachedDestination
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndBoss_HasReachedDestination_C::ExecuteUbergraph_EndBoss_HasReachedDestination(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ExecuteUbergraph_EndBoss_HasReachedDestination");

	UEndBoss_HasReachedDestination_C_ExecuteUbergraph_EndBoss_HasReachedDestination_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
