// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldSwitchBiped_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UShouldSwitchBiped_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveTick");

	UShouldSwitchBiped_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldSwitchBiped_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldSwitchBiped.ShouldSwitchBiped_C.ReceiveActivation");

	UShouldSwitchBiped_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldSwitchBiped.ShouldSwitchBiped_C.ExecuteUbergraph_ShouldSwitchBiped
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldSwitchBiped_C::ExecuteUbergraph_ShouldSwitchBiped(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldSwitchBiped.ShouldSwitchBiped_C.ExecuteUbergraph_ShouldSwitchBiped");

	UShouldSwitchBiped_C_ExecuteUbergraph_ShouldSwitchBiped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
