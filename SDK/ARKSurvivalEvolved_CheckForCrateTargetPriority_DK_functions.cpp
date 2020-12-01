// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckForCrateTargetPriority_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckForCrateTargetPriority_DK.CheckForCrateTargetPriority_DK_C.ReceiveExecutionStart
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForCrateTargetPriority_DK_C::ReceiveExecutionStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForCrateTargetPriority_DK.CheckForCrateTargetPriority_DK_C.ReceiveExecutionStart");

	UCheckForCrateTargetPriority_DK_C_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckForCrateTargetPriority_DK.CheckForCrateTargetPriority_DK_C.ExecuteUbergraph_CheckForCrateTargetPriority_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckForCrateTargetPriority_DK_C::ExecuteUbergraph_CheckForCrateTargetPriority_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckForCrateTargetPriority_DK.CheckForCrateTargetPriority_DK_C.ExecuteUbergraph_CheckForCrateTargetPriority_DK");

	UCheckForCrateTargetPriority_DK_C_ExecuteUbergraph_CheckForCrateTargetPriority_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif