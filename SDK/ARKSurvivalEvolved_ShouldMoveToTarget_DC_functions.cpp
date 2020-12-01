// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldMoveToTarget_DC_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShouldMoveToTarget_DC.ShouldMoveToTarget_DC_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldMoveToTarget_DC_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldMoveToTarget_DC.ShouldMoveToTarget_DC_C.ReceiveConditionCheck");

	UShouldMoveToTarget_DC_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldMoveToTarget_DC.ShouldMoveToTarget_DC_C.ExecuteUbergraph_ShouldMoveToTarget_DC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldMoveToTarget_DC_C::ExecuteUbergraph_ShouldMoveToTarget_DC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldMoveToTarget_DC.ShouldMoveToTarget_DC_C.ExecuteUbergraph_ShouldMoveToTarget_DC");

	UShouldMoveToTarget_DC_C_ExecuteUbergraph_ShouldMoveToTarget_DC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
