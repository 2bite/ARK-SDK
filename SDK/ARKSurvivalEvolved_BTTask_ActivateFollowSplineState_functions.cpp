// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTTask_ActivateFollowSplineState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ActivateFollowSplineState_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ReceiveExecute");

	UBTTask_ActivateFollowSplineState_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ExecuteUbergraph_BTTask_ActivateFollowSplineState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ActivateFollowSplineState_C::ExecuteUbergraph_BTTask_ActivateFollowSplineState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ActivateFollowSplineState.BTTask_ActivateFollowSplineState_C.ExecuteUbergraph_BTTask_ActivateFollowSplineState");

	UBTTask_ActivateFollowSplineState_C_ExecuteUbergraph_BTTask_ActivateFollowSplineState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
