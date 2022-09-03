// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BT_DinoIsTooFarFromTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBT_DinoIsTooFarFromTarget_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ReceiveConditionCheck");

	UBT_DinoIsTooFarFromTarget_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ExecuteUbergraph_BT_DinoIsTooFarFromTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBT_DinoIsTooFarFromTarget_C::ExecuteUbergraph_BT_DinoIsTooFarFromTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_DinoIsTooFarFromTarget.BT_DinoIsTooFarFromTarget_C.ExecuteUbergraph_BT_DinoIsTooFarFromTarget");

	UBT_DinoIsTooFarFromTarget_C_ExecuteUbergraph_BT_DinoIsTooFarFromTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
