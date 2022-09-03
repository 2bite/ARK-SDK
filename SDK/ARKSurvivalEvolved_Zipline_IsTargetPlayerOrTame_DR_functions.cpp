// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_IsTargetPlayerOrTame_DR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_IsTargetPlayerOrTame_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ReceiveConditionCheck");

	UZipline_IsTargetPlayerOrTame_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_IsTargetPlayerOrTame_DR_C::ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_IsTargetPlayerOrTame_DR.Zipline_IsTargetPlayerOrTame_DR_C.ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR");

	UZipline_IsTargetPlayerOrTame_DR_C_ExecuteUbergraph_Zipline_IsTargetPlayerOrTame_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
