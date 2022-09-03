// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Indicate_Selected_Teleport_Target_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Indicate_Selected_Teleport_Target_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.BPClientHandleNetExecCommand");

	ABuff_Indicate_Selected_Teleport_Target_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript
// ()

void ABuff_Indicate_Selected_Teleport_Target_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.UserConstructionScript");

	ABuff_Indicate_Selected_Teleport_Target_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client
// ()
// Parameters:
// class APlayerController*       NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Indicate_Selected_Teleport_Target_C::toggle_active_on_targeting_client(class APlayerController* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.toggle active on targeting client");

	ABuff_Indicate_Selected_Teleport_Target_C_toggle_active_on_targeting_client_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Indicate_Selected_Teleport_Target_C::ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Indicate_Selected_Teleport_Target.Buff_Indicate_Selected_Teleport_Target_C.ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target");

	ABuff_Indicate_Selected_Teleport_Target_C_ExecuteUbergraph_Buff_Indicate_Selected_Teleport_Target_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
