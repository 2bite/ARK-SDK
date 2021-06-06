// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_SilenceCannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_TekStrider_SilenceCannon_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPGetHUDElements");

	ABuff_TekStrider_SilenceCannon_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Is Ai Controlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::Is_Ai_Controlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Is Ai Controlled");

	ABuff_TekStrider_SilenceCannon_C_Is_Ai_Controlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle
// ()
// Parameters:
// class APrimalDinoCharacter*    NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::is_target_within_angle(class APrimalDinoCharacter* NewParam, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.is target within angle");

	ABuff_TekStrider_SilenceCannon_C_is_target_within_angle_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, NetValidate)
// Parameters:
// bool                           from_animbp                    (Parm, ZeroConstructor, IsPlainOldData)
// class ABuff_ChargeEmitter_Strider_C* AsBuff_ChargeEmitter_Strider_C (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_SilenceCannon_C::STATIC_CanFire(bool from_animbp, class ABuff_ChargeEmitter_Strider_C** AsBuff_ChargeEmitter_Strider_C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.CanFire");

	ABuff_TekStrider_SilenceCannon_C_CanFire_Params params;
	params.from_animbp = from_animbp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBuff_ChargeEmitter_Strider_C != nullptr)
		*AsBuff_ChargeEmitter_Strider_C = params.AsBuff_ChargeEmitter_Strider_C;

	return params.ReturnValue;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BuffTickClient");

	ABuff_TekStrider_SilenceCannon_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger
// ()

void ABuff_TekStrider_SilenceCannon_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Trigger");

	ABuff_TekStrider_SilenceCannon_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, NetClient, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.BPSetupForInstigator");

	ABuff_TekStrider_SilenceCannon_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?
// (NetRequest, Native, MulticastDelegate, Public, Private, HasOutParms, NetClient, NetValidate)
// Parameters:
// class APrimalCharacter*        Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      hit_result                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isInCone                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::IsDinoInCone_(class APrimalCharacter* Dino, TArray<struct FHitResult>* hit_result, bool* isInCone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.IsDinoInCone?");

	ABuff_TekStrider_SilenceCannon_C_IsDinoInCone__Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hit_result != nullptr)
		*hit_result = params.hit_result;
	if (isInCone != nullptr)
		*isInCone = params.isInCone;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward
// ()
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::Get_Cone_Forward(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Get Cone Forward");

	ABuff_TekStrider_SilenceCannon_C_Get_Cone_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin
// ()
// Parameters:
// struct FVector                 ConeOrigin                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::GetConeOrigin(struct FVector* ConeOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.GetConeOrigin");

	ABuff_TekStrider_SilenceCannon_C_GetConeOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConeOrigin != nullptr)
		*ConeOrigin = params.ConeOrigin;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript
// ()

void ABuff_TekStrider_SilenceCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.UserConstructionScript");

	ABuff_TekStrider_SilenceCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire
// ()

void ABuff_TekStrider_SilenceCannon_C::Multicast_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.Multicast_Fire");

	ABuff_TekStrider_SilenceCannon_C_Multicast_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceCannon_C::ExecuteUbergraph_Buff_TekStrider_SilenceCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceCannon.Buff_TekStrider_SilenceCannon_C.ExecuteUbergraph_Buff_TekStrider_SilenceCannon");

	ABuff_TekStrider_SilenceCannon_C_ExecuteUbergraph_Buff_TekStrider_SilenceCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
