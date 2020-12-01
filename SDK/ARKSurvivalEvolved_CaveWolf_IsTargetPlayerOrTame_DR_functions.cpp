// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_IsTargetPlayerOrTame_DR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_IsTargetPlayerOrTame_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck");

	UCaveWolf_IsTargetPlayerOrTame_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_IsTargetPlayerOrTame_DR_C::ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR");

	UCaveWolf_IsTargetPlayerOrTame_DR_C_ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
