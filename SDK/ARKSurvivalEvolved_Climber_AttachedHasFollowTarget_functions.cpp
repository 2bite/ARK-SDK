// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_AttachedHasFollowTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_AttachedHasFollowTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ReceiveExecute");

	UClimber_AttachedHasFollowTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ExecuteUbergraph_Climber_AttachedHasFollowTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UClimber_AttachedHasFollowTarget_C::ExecuteUbergraph_Climber_AttachedHasFollowTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C.ExecuteUbergraph_Climber_AttachedHasFollowTarget");

	UClimber_AttachedHasFollowTarget_C_ExecuteUbergraph_Climber_AttachedHasFollowTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
