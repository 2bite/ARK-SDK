// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinDistanceFromGround_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsWithinDistanceFromGround_DK.IsWithinDistanceFromGround_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceFromGround_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_DK.IsWithinDistanceFromGround_DK_C.ReceiveConditionCheck");

	UIsWithinDistanceFromGround_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsWithinDistanceFromGround_DK.IsWithinDistanceFromGround_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceFromGround_DK_C::ExecuteUbergraph_IsWithinDistanceFromGround_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_DK.IsWithinDistanceFromGround_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_DK");

	UIsWithinDistanceFromGround_DK_C_ExecuteUbergraph_IsWithinDistanceFromGround_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
