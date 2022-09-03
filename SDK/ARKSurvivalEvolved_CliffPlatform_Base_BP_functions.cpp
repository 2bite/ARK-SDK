// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CliffPlatform_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.BPIsAllowedToBuild
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACliffPlatform_Base_BP_C::STATIC_BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.BPIsAllowedToBuild");

	ACliffPlatform_Base_BP_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.UserConstructionScript
// ()

void ACliffPlatform_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.UserConstructionScript");

	ACliffPlatform_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.ExecuteUbergraph_CliffPlatform_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACliffPlatform_Base_BP_C::ExecuteUbergraph_CliffPlatform_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.ExecuteUbergraph_CliffPlatform_Base_BP");

	ACliffPlatform_Base_BP_C_ExecuteUbergraph_CliffPlatform_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
