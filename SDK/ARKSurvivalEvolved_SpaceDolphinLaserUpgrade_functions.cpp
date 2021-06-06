// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinLaserUpgrade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASpaceDolphinLaserUpgrade_C::BPCustomIsRelevantForClient(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.BPCustomIsRelevantForClient");

	ASpaceDolphinLaserUpgrade_C_BPCustomIsRelevantForClient_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick
// (NetReliable, NetRequest, Native, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphinLaserUpgrade_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ReceiveTick");

	ASpaceDolphinLaserUpgrade_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript
// ()

void ASpaceDolphinLaserUpgrade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.UserConstructionScript");

	ASpaceDolphinLaserUpgrade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphinLaserUpgrade_C::ExecuteUbergraph_SpaceDolphinLaserUpgrade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C.ExecuteUbergraph_SpaceDolphinLaserUpgrade");

	ASpaceDolphinLaserUpgrade_C_ExecuteUbergraph_SpaceDolphinLaserUpgrade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
