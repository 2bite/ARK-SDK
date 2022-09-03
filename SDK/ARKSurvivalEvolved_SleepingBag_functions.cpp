// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SleepingBag.SleepingBag_C.BPIsAllowedToBuildEx
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ASleepingBag_C::BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBag.SleepingBag_C.BPIsAllowedToBuildEx");

	ASleepingBag_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function SleepingBag.SleepingBag_C.UserConstructionScript
// ()

void ASleepingBag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBag.SleepingBag_C.UserConstructionScript");

	ASleepingBag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SleepingBag.SleepingBag_C.ExecuteUbergraph_SleepingBag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASleepingBag_C::ExecuteUbergraph_SleepingBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBag.SleepingBag_C.ExecuteUbergraph_SleepingBag");

	ASleepingBag_C_ExecuteUbergraph_SleepingBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
