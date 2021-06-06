// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossTeleporter.BossTeleporter_C.Do TeleportSound
// ()

void ABossTeleporter_C::Do_TeleportSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.Do TeleportSound");

	ABossTeleporter_C_Do_TeleportSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.BuffTickClient
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.BuffTickClient");

	ABossTeleporter_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.DoTeleport
// ()

void ABossTeleporter_C::DoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.DoTeleport");

	ABossTeleporter_C_DoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.UserConstructionScript
// ()

void ABossTeleporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.UserConstructionScript");

	ABossTeleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.NetDoTeleport
// ()

void ABossTeleporter_C::NetDoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.NetDoTeleport");

	ABossTeleporter_C_NetDoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay
// ()

void ABossTeleporter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay");

	ABossTeleporter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossTeleporter_C::ExecuteUbergraph_BossTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter");

	ABossTeleporter_C_ExecuteUbergraph_BossTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
