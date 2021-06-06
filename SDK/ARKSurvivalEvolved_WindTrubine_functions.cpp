// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindTrubine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindTrubine.WindTrubine_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AWindTrubine_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPOverrideCantBuildReasonString");

	AWindTrubine_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindTrubine.WindTrubine_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWindTrubine_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPIsAllowedToBuild");

	AWindTrubine_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function WindTrubine.WindTrubine_C.BPUnstasis
// ()

void AWindTrubine_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPUnstasis");

	AWindTrubine_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.UpdateWind
// ()

void AWindTrubine_C::UpdateWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.UpdateWind");

	AWindTrubine_C_UpdateWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.BPIsValidWaterSourceForPipe
// ()
// Parameters:
// class APrimalStructureWaterPipe** ForWaterPipe                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWindTrubine_C::BPIsValidWaterSourceForPipe(class APrimalStructureWaterPipe** ForWaterPipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPIsValidWaterSourceForPipe");

	AWindTrubine_C_BPIsValidWaterSourceForPipe_Params params;
	params.ForWaterPipe = ForWaterPipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindTrubine.WindTrubine_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWindTrubine_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPCanBeActivatedByPlayer");

	AWindTrubine_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindTrubine.WindTrubine_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWindTrubine_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPCanBeActivated");

	AWindTrubine_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindTrubine.WindTrubine_C.BPContainerActivated
// ()

void AWindTrubine_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPContainerActivated");

	AWindTrubine_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.BPContainerDeactivated
// ()

void AWindTrubine_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.BPContainerDeactivated");

	AWindTrubine_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.UserConstructionScript
// ()

void AWindTrubine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.UserConstructionScript");

	AWindTrubine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.ReceiveBeginPlay
// ()

void AWindTrubine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.ReceiveBeginPlay");

	AWindTrubine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.ForceUpdateWind
// ()

void AWindTrubine_C::ForceUpdateWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.ForceUpdateWind");

	AWindTrubine_C_ForceUpdateWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindTrubine.WindTrubine_C.ExecuteUbergraph_WindTrubine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWindTrubine_C::ExecuteUbergraph_WindTrubine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindTrubine.WindTrubine_C.ExecuteUbergraph_WindTrubine");

	AWindTrubine_C_ExecuteUbergraph_WindTrubine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
