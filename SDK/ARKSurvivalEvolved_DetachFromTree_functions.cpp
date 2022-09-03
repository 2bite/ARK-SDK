// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DetachFromTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DetachFromTree.DetachFromTree_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDetachFromTree_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetachFromTree.DetachFromTree_C.ReceiveExecute");

	UDetachFromTree_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DetachFromTree.DetachFromTree_C.ExecuteUbergraph_DetachFromTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDetachFromTree_C::ExecuteUbergraph_DetachFromTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetachFromTree.DetachFromTree_C.ExecuteUbergraph_DetachFromTree");

	UDetachFromTree_C_ExecuteUbergraph_DetachFromTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
