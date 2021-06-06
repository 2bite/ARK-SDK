// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Env_DesertGeyser_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser
// (NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnv_DesertGeyser_C::IsCharacterInGeyser(class APrimalCharacter* Character, bool* return_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.IsCharacterInGeyser");

	AEnv_DesertGeyser_C_IsCharacterInGeyser_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript
// ()

void AEnv_DesertGeyser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.UserConstructionScript");

	AEnv_DesertGeyser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AEnv_DesertGeyser_C::BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	AEnv_DesertGeyser_C_BndEvt__LaunchArea_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AEnv_DesertGeyser_C::ServerRequestLaunch(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ServerRequestLaunch");

	AEnv_DesertGeyser_C_ServerRequestLaunch_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEnv_DesertGeyser_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveTick");

	AEnv_DesertGeyser_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff
// ()

void AEnv_DesertGeyser_C::TurnGeyserOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.TurnGeyserOff");

	AEnv_DesertGeyser_C_TurnGeyserOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void AEnv_DesertGeyser_C::Multi_ToggleParticles(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.Multi_ToggleParticles");

	AEnv_DesertGeyser_C_Multi_ToggleParticles_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay
// ()

void AEnv_DesertGeyser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ReceiveBeginPlay");

	AEnv_DesertGeyser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEnv_DesertGeyser_C::ExecuteUbergraph_Env_DesertGeyser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Env_DesertGeyser.Env_DesertGeyser_C.ExecuteUbergraph_Env_DesertGeyser");

	AEnv_DesertGeyser_C_ExecuteUbergraph_Env_DesertGeyser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
