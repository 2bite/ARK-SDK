// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WantsToRun_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WantsToRun_DK.WantsToRun_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UWantsToRun_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WantsToRun_DK.WantsToRun_DK_C.ReceiveConditionCheck");

	UWantsToRun_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WantsToRun_DK.WantsToRun_DK_C.ExecuteUbergraph_WantsToRun_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWantsToRun_DK_C::ExecuteUbergraph_WantsToRun_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WantsToRun_DK.WantsToRun_DK_C.ExecuteUbergraph_WantsToRun_DK");

	UWantsToRun_DK_C_ExecuteUbergraph_WantsToRun_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
