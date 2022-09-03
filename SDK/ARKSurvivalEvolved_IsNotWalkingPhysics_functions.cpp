// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsNotWalkingPhysics_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotWalkingPhysics_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ReceiveConditionCheck");

	UIsNotWalkingPhysics_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ExecuteUbergraph_IsNotWalkingPhysics
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotWalkingPhysics_C::ExecuteUbergraph_IsNotWalkingPhysics(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotWalkingPhysics.IsNotWalkingPhysics_C.ExecuteUbergraph_IsNotWalkingPhysics");

	UIsNotWalkingPhysics_C_ExecuteUbergraph_IsNotWalkingPhysics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
