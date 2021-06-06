// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_SilenceVictim_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_SilenceVictim_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.HideBuffFromHUD");

	ABuff_TekStrider_SilenceVictim_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceVictim_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPDrawBuffStatusHUD");

	ABuff_TekStrider_SilenceVictim_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Delay Update Vfx
// ()

void ABuff_TekStrider_SilenceVictim_C::Delay_Update_Vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Delay Update Vfx");

	ABuff_TekStrider_SilenceVictim_C_Delay_Update_Vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceVictim_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickClient");

	ABuff_TekStrider_SilenceVictim_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_SilenceVictim_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPClientHandleNetExecCommand");

	ABuff_TekStrider_SilenceVictim_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_SilenceVictim_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventflight");

	ABuff_TekStrider_SilenceVictim_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceVictim_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPActivated");

	ABuff_TekStrider_SilenceVictim_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Update whether deactivate VFX should be seen by rider
// ()

void ABuff_TekStrider_SilenceVictim_C::Update_whether_deactivate_VFX_should_be_seen_by_rider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Update whether deactivate VFX should be seen by rider");

	ABuff_TekStrider_SilenceVictim_C_Update_whether_deactivate_VFX_should_be_seen_by_rider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceVictim_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickServer");

	ABuff_TekStrider_SilenceVictim_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventInstigatorAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekStrider_SilenceVictim_C::BPPreventInstigatorAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventInstigatorAttack");

	ABuff_TekStrider_SilenceVictim_C_BPPreventInstigatorAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.UserConstructionScript
// ()

void ABuff_TekStrider_SilenceVictim_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.UserConstructionScript");

	ABuff_TekStrider_SilenceVictim_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ReceiveBeginPlay
// ()

void ABuff_TekStrider_SilenceVictim_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ReceiveBeginPlay");

	ABuff_TekStrider_SilenceVictim_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.OnSilenceEnded
// ()

void ABuff_TekStrider_SilenceVictim_C::OnSilenceEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.OnSilenceEnded");

	ABuff_TekStrider_SilenceVictim_C_OnSilenceEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.toggle invalid particle
// ()

void ABuff_TekStrider_SilenceVictim_C::toggle_invalid_particle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.toggle invalid particle");

	ABuff_TekStrider_SilenceVictim_C_toggle_invalid_particle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ExecuteUbergraph_Buff_TekStrider_SilenceVictim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekStrider_SilenceVictim_C::ExecuteUbergraph_Buff_TekStrider_SilenceVictim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ExecuteUbergraph_Buff_TekStrider_SilenceVictim");

	ABuff_TekStrider_SilenceVictim_C_ExecuteUbergraph_Buff_TekStrider_SilenceVictim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
