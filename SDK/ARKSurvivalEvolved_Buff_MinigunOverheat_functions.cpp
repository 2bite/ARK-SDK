// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunOverheat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunOverheat_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BuffTickClient");

	ABuff_MinigunOverheat_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunOverheat_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveEndPlay");

	ABuff_MinigunOverheat_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveBeginPlay
// ()

void ABuff_MinigunOverheat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ReceiveBeginPlay");

	ABuff_MinigunOverheat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BPDrawBuffStatusHUD
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunOverheat_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.BPDrawBuffStatusHUD");

	ABuff_MinigunOverheat_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.UserConstructionScript
// ()

void ABuff_MinigunOverheat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.UserConstructionScript");

	ABuff_MinigunOverheat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.StopStaminaDrain
// ()

void ABuff_MinigunOverheat_C::StopStaminaDrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.StopStaminaDrain");

	ABuff_MinigunOverheat_C_StopStaminaDrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ExecuteUbergraph_Buff_MinigunOverheat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunOverheat_C::ExecuteUbergraph_Buff_MinigunOverheat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunOverheat.Buff_MinigunOverheat_C.ExecuteUbergraph_Buff_MinigunOverheat");

	ABuff_MinigunOverheat_C_ExecuteUbergraph_Buff_MinigunOverheat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
