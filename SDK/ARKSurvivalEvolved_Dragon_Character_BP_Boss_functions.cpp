// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPGetHealthBarColor
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADragon_Character_BP_Boss_C::BPGetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPGetHealthBarColor");

	ADragon_Character_BP_Boss_C_BPGetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPSentKilledNotification
// ()
// Parameters:
// class AShooterPlayerController** ToPC                           (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_Boss_C::BPSentKilledNotification(class AShooterPlayerController** ToPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BPSentKilledNotification");

	ADragon_Character_BP_Boss_C_BPSentKilledNotification_Params params;
	params.ToPC = ToPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.Force to WanderOnLand
// (NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, Const, NetValidate)

void ADragon_Character_BP_Boss_C::STATIC_Force_to_WanderOnLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.Force to WanderOnLand");

	ADragon_Character_BP_Boss_C_Force_to_WanderOnLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ForceToFlying
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, Const, NetValidate)

void ADragon_Character_BP_Boss_C::STATIC_ForceToFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ForceToFlying");

	ADragon_Character_BP_Boss_C_ForceToFlying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADragon_Character_BP_Boss_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.BlueprintOverrideWantsToRun");

	ADragon_Character_BP_Boss_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.UserConstructionScript
// ()

void ADragon_Character_BP_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.UserConstructionScript");

	ADragon_Character_BP_Boss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_Boss_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveTick");

	ADragon_Character_BP_Boss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveBeginPlay
// ()

void ADragon_Character_BP_Boss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ReceiveBeginPlay");

	ADragon_Character_BP_Boss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ExecuteUbergraph_Dragon_Character_BP_Boss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_Boss_C::ExecuteUbergraph_Dragon_Character_BP_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C.ExecuteUbergraph_Dragon_Character_BP_Boss");

	ADragon_Character_BP_Boss_C_ExecuteUbergraph_Dragon_Character_BP_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
