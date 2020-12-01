// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_KingKaiju_EvalTargets_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LaunchMeteor
// (NetReliable, Exec, Event, Static, NetMulticast, Public, HasOutParms, NetClient, BlueprintCallable, Const, NetValidate)

void UService_KingKaiju_EvalTargets_C::STATIC_LaunchMeteor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LaunchMeteor");

	UService_KingKaiju_EvalTargets_C_LaunchMeteor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.IsDoingWipeout
// ()

void UService_KingKaiju_EvalTargets_C::IsDoingWipeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.IsDoingWipeout");

	UService_KingKaiju_EvalTargets_C_IsDoingWipeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LeashKingKaiju
// ()

void UService_KingKaiju_EvalTargets_C::LeashKingKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.LeashKingKaiju");

	UService_KingKaiju_EvalTargets_C_LeashKingKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.CheckIfTargetStillValid
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_EvalTargets_C::CheckIfTargetStillValid(class APrimalCharacter* Target, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.CheckIfTargetStillValid");

	UService_KingKaiju_EvalTargets_C_CheckIfTargetStillValid_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ClearArrays
// ()

void UService_KingKaiju_EvalTargets_C::ClearArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ClearArrays");

	UService_KingKaiju_EvalTargets_C_ClearArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_EvalTargets_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveActivation");

	UService_KingKaiju_EvalTargets_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_EvalTargets_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ReceiveTick");

	UService_KingKaiju_EvalTargets_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.DelayedMeteorLaunch
// ()

void UService_KingKaiju_EvalTargets_C::DelayedMeteorLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.DelayedMeteorLaunch");

	UService_KingKaiju_EvalTargets_C_DelayedMeteorLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ExecuteUbergraph_Service_KingKaiju_EvalTargets
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_KingKaiju_EvalTargets_C::ExecuteUbergraph_Service_KingKaiju_EvalTargets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_KingKaiju_EvalTargets.Service_KingKaiju_EvalTargets_C.ExecuteUbergraph_Service_KingKaiju_EvalTargets");

	UService_KingKaiju_EvalTargets_C_ExecuteUbergraph_Service_KingKaiju_EvalTargets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
