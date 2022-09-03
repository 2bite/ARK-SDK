// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Liopleurodon_Magic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart
// ()

void ABuff_Liopleurodon_Magic_C::BPResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart");

	ABuff_Liopleurodon_Magic_C_BPResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient
// (NetReliable, Event, Static, NetMulticast, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Liopleurodon_Magic_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient");

	ABuff_Liopleurodon_Magic_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD
// (NetReliable, NetResponse, Static, MulticastDelegate, Protected, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Liopleurodon_Magic_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD");

	ABuff_Liopleurodon_Magic_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript
// ()

void ABuff_Liopleurodon_Magic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript");

	ABuff_Liopleurodon_Magic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle
// ()
// Parameters:
// class APrimalStructureItemContainer_SupplyCrate* TargetCrate                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Liopleurodon_Magic_C::SpawnCrateBuffedParticle(class APrimalStructureItemContainer_SupplyCrate* TargetCrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle");

	ABuff_Liopleurodon_Magic_C_SpawnCrateBuffedParticle_Params params;
	params.TargetCrate = TargetCrate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer
// ()
// Parameters:
// bool                           ShouldHide                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Liopleurodon_Magic_C::HideTimer(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer");

	ABuff_Liopleurodon_Magic_C_HideTimer_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay
// ()

void ABuff_Liopleurodon_Magic_C::RevealBuffTimerAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay");

	ABuff_Liopleurodon_Magic_C_RevealBuffTimerAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay
// ()

void ABuff_Liopleurodon_Magic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay");

	ABuff_Liopleurodon_Magic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Liopleurodon_Magic_C::ExecuteUbergraph_Buff_Liopleurodon_Magic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic");

	ABuff_Liopleurodon_Magic_C_ExecuteUbergraph_Buff_Liopleurodon_Magic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
