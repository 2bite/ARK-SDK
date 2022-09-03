// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterestBP_MissionStart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission
// ()
// Parameters:
// class APlayerController*       WithPC                         (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_C::StartMyMission(class APlayerController* WithPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.StartMyMission");

	APointOfInterestBP_MissionStart_C_StartMyMission_Params params;
	params.WithPC = WithPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APointOfInterestBP_MissionStart_C::CanBeViewed(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanBeViewed");

	APointOfInterestBP_MissionStart_C_CanBeViewed_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission
// (NetRequest, Exec, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_C::CanPlayerStartMyMission(class APlayerController* PC, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.CanPlayerStartMyMission");

	APointOfInterestBP_MissionStart_C_CanPlayerStartMyMission_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries
// (NetRequest, Native, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APointOfInterestBP_MissionStart_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPGetMultiUseEntries");

	APointOfInterestBP_MissionStart_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APointOfInterestBP_MissionStart_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.BPTryMultiUse");

	APointOfInterestBP_MissionStart_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript
// ()

void APointOfInterestBP_MissionStart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.UserConstructionScript");

	APointOfInterestBP_MissionStart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_C::ExecuteUbergraph_PointOfInterestBP_MissionStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C.ExecuteUbergraph_PointOfInterestBP_MissionStart");

	APointOfInterestBP_MissionStart_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
