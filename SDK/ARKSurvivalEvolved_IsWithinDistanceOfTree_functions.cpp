// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinDistanceOfTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ReceiveTick
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, NetValidate)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceOfTree_C::STATIC_ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ReceiveTick");

	UIsWithinDistanceOfTree_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ExecuteUbergraph_IsWithinDistanceOfTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsWithinDistanceOfTree_C::ExecuteUbergraph_IsWithinDistanceOfTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsWithinDistanceOfTree.IsWithinDistanceOfTree_C.ExecuteUbergraph_IsWithinDistanceOfTree");

	UIsWithinDistanceOfTree_C_ExecuteUbergraph_IsWithinDistanceOfTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
