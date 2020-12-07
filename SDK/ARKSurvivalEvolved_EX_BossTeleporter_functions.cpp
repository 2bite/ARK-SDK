// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_BossTeleporter.EX_BossTeleporter_C.Do TeleportSound
// ()

void AEX_BossTeleporter_C::Do_TeleportSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.Do TeleportSound");

	AEX_BossTeleporter_C_Do_TeleportSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.BuffTickClient
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Private, NetServer, NetClient, DLLImport, BlueprintCallable, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossTeleporter_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.BuffTickClient");

	AEX_BossTeleporter_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.DoTeleport
// ()

void AEX_BossTeleporter_C::DoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.DoTeleport");

	AEX_BossTeleporter_C_DoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.UserConstructionScript
// ()

void AEX_BossTeleporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.UserConstructionScript");

	AEX_BossTeleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.NetDoTeleport
// ()

void AEX_BossTeleporter_C::NetDoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.NetDoTeleport");

	AEX_BossTeleporter_C_NetDoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.ReceiveBeginPlay
// ()

void AEX_BossTeleporter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.ReceiveBeginPlay");

	AEX_BossTeleporter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossTeleporter.EX_BossTeleporter_C.ExecuteUbergraph_EX_BossTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEX_BossTeleporter_C::ExecuteUbergraph_EX_BossTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossTeleporter.EX_BossTeleporter_C.ExecuteUbergraph_EX_BossTeleporter");

	AEX_BossTeleporter_C_ExecuteUbergraph_EX_BossTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
