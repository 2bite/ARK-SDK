// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_IsTargetNearZipline_DR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_IsTargetNearZipline_DR_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C.ReceiveConditionCheck");

	UCaveWolf_IsTargetNearZipline_DR_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C.ExecuteUbergraph_CaveWolf_IsTargetNearZipline_DR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_IsTargetNearZipline_DR_C::ExecuteUbergraph_CaveWolf_IsTargetNearZipline_DR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_IsTargetNearZipline_DR.CaveWolf_IsTargetNearZipline_DR_C.ExecuteUbergraph_CaveWolf_IsTargetNearZipline_DR");

	UCaveWolf_IsTargetNearZipline_DR_C_ExecuteUbergraph_CaveWolf_IsTargetNearZipline_DR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
