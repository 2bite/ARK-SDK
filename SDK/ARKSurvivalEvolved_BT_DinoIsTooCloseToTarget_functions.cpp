// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BT_DinoIsTooCloseToTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBT_DinoIsTooCloseToTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ReceiveConditionCheck");

	UBT_DinoIsTooCloseToTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ExecuteUbergraph_BT_DinoIsTooCloseToTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBT_DinoIsTooCloseToTarget_C::ExecuteUbergraph_BT_DinoIsTooCloseToTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C.ExecuteUbergraph_BT_DinoIsTooCloseToTarget");

	UBT_DinoIsTooCloseToTarget_C_ExecuteUbergraph_BT_DinoIsTooCloseToTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
