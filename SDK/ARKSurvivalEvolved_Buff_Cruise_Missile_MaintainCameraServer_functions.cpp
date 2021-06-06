// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Cruise_Missile_MaintainCameraServer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Cruise_Missile_MaintainCameraServer_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPServerHandleNetExecCommand");

	ABuff_Cruise_Missile_MaintainCameraServer_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPHandleOnStartFire
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Cruise_Missile_MaintainCameraServer_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.BPHandleOnStartFire");

	ABuff_Cruise_Missile_MaintainCameraServer_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.UserConstructionScript
// ()

void ABuff_Cruise_Missile_MaintainCameraServer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.UserConstructionScript");

	ABuff_Cruise_Missile_MaintainCameraServer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Cruise_Missile_MaintainCameraServer_C::ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer");

	ABuff_Cruise_Missile_MaintainCameraServer_C_ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
