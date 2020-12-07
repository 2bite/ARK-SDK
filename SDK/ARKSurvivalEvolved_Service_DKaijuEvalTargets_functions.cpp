// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKaijuEvalTargets_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive
// ()
// Parameters:
// bool                           IsPassive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuEvalTargets_C::IsTamedAndPassive(bool* IsPassive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.IsTamedAndPassive");

	UService_DKaijuEvalTargets_C_IsTamedAndPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPassive != nullptr)
		*IsPassive = params.IsPassive;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll
// ()

void UService_DKaijuEvalTargets_C::AlertFlocksForRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.AlertFlocksForRoll");

	UService_DKaijuEvalTargets_C_AlertFlocksForRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks
// ()

void UService_DKaijuEvalTargets_C::Eval_Attacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.Eval Attacks");

	UService_DKaijuEvalTargets_C_Eval_Attacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks
// ()

void UService_DKaijuEvalTargets_C::DestroyFlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.DestroyFlocks");

	UService_DKaijuEvalTargets_C_DestroyFlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets
// ()

void UService_DKaijuEvalTargets_C::SetFlockTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SetFlockTargets");

	UService_DKaijuEvalTargets_C_SetFlockTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets
// (NetReliable, Native, Event, MulticastDelegate, Private, HasOutParms, DLLImport, BlueprintCallable, Const, NetValidate)

void UService_DKaijuEvalTargets_C::SummonLightningGroundTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.SummonLightningGroundTargets");

	UService_DKaijuEvalTargets_C_SummonLightningGroundTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes
// ()

void UService_DKaijuEvalTargets_C::EvalFlockHoverAttackModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.EvalFlockHoverAttackModes");

	UService_DKaijuEvalTargets_C_EvalFlockHoverAttackModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks
// ()

void UService_DKaijuEvalTargets_C::MaybeSummonFlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.MaybeSummonFlocks");

	UService_DKaijuEvalTargets_C_MaybeSummonFlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuEvalTargets_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveTick");

	UService_DKaijuEvalTargets_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuEvalTargets_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ReceiveActivation");

	UService_DKaijuEvalTargets_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKaijuEvalTargets_C::ExecuteUbergraph_Service_DKaijuEvalTargets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKaijuEvalTargets.Service_DKaijuEvalTargets_C.ExecuteUbergraph_Service_DKaijuEvalTargets");

	UService_DKaijuEvalTargets_C_ExecuteUbergraph_Service_DKaijuEvalTargets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
