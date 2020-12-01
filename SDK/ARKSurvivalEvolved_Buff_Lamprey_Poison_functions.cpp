// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lamprey_Poison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UpdateBuffPersistentData
// ()

void ABuff_Lamprey_Poison_C::UpdateBuffPersistentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UpdateBuffPersistentData");

	ABuff_Lamprey_Poison_C_UpdateBuffPersistentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ReceiveBeginPlay
// ()

void ABuff_Lamprey_Poison_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ReceiveBeginPlay");

	ABuff_Lamprey_Poison_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_Poison_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickClient");

	ABuff_Lamprey_Poison_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BPDrawBuffStatusHUD
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_Poison_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BPDrawBuffStatusHUD");

	ABuff_Lamprey_Poison_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_Poison_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.BuffTickServer");

	ABuff_Lamprey_Poison_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UserConstructionScript
// ()

void ABuff_Lamprey_Poison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.UserConstructionScript");

	ABuff_Lamprey_Poison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ExecuteUbergraph_Buff_Lamprey_Poison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Lamprey_Poison_C::ExecuteUbergraph_Buff_Lamprey_Poison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Lamprey_Poison.Buff_Lamprey_Poison_C.ExecuteUbergraph_Buff_Lamprey_Poison");

	ABuff_Lamprey_Poison_C_ExecuteUbergraph_Buff_Lamprey_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
