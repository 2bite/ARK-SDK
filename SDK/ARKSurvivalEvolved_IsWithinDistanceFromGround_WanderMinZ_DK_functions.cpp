// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinDistanceFromGround_WanderMinZ_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsWithinDistanceFromGround_WanderMinZ_DK.IsWithinDistanceFromGround_WanderMinZ_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceFromGround_WanderMinZ_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_WanderMinZ_DK.IsWithinDistanceFromGround_WanderMinZ_DK_C.ReceiveConditionCheck");

	UIsWithinDistanceFromGround_WanderMinZ_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsWithinDistanceFromGround_WanderMinZ_DK.IsWithinDistanceFromGround_WanderMinZ_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_WanderMinZ_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceFromGround_WanderMinZ_DK_C::ExecuteUbergraph_IsWithinDistanceFromGround_WanderMinZ_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_WanderMinZ_DK.IsWithinDistanceFromGround_WanderMinZ_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_WanderMinZ_DK");

	UIsWithinDistanceFromGround_WanderMinZ_DK_C_ExecuteUbergraph_IsWithinDistanceFromGround_WanderMinZ_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
