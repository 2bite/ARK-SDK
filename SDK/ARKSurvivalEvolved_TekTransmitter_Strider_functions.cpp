// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTransmitter_Strider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay
// (NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ATekTransmitter_Strider_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.ReceiveBeginPlay");

	ATekTransmitter_Strider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated
// (NetReliable, Native, NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ATekTransmitter_Strider_C::STATIC_BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerDeactivated");

	ATekTransmitter_Strider_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ATekTransmitter_Strider_C::STATIC_BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPContainerActivated");

	ATekTransmitter_Strider_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents
// ()

void ATekTransmitter_Strider_C::BPPreInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPPreInitializeComponents");

	ATekTransmitter_Strider_C_BPPreInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTransmitter_Strider_C::BPCanBeActivatedByPlayer(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.BPCanBeActivatedByPlayer");

	ATekTransmitter_Strider_C_BPCanBeActivatedByPlayer_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript
// ()

void ATekTransmitter_Strider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.UserConstructionScript");

	ATekTransmitter_Strider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekTransmitter_Strider_C::ExecuteUbergraph_TekTransmitter_Strider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTransmitter_Strider.TekTransmitter_Strider_C.ExecuteUbergraph_TekTransmitter_Strider");

	ATekTransmitter_Strider_C_ExecuteUbergraph_TekTransmitter_Strider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
