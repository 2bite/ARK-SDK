// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_CheckDistanceFromFollowTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_CheckDistanceFromFollowTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ReceiveConditionCheck");

	UDeco_CheckDistanceFromFollowTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_CheckDistanceFromFollowTarget_C::ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_CheckDistanceFromFollowTarget.Deco_CheckDistanceFromFollowTarget_C.ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget");

	UDeco_CheckDistanceFromFollowTarget_C_ExecuteUbergraph_Deco_CheckDistanceFromFollowTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
