// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_launcher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Meteor_launcher.Meteor_launcher_C.Update Location
// ()

void AMeteor_launcher_C::Update_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.Update Location");

	AMeteor_launcher_C_Update_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.Shoot
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// bool                           NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_launcher_C::Shoot(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.Shoot");

	AMeteor_launcher_C_Shoot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.UserConstructionScript
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AMeteor_launcher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.UserConstructionScript");

	AMeteor_launcher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.ReceiveBeginPlay
// ()

void AMeteor_launcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.ReceiveBeginPlay");

	AMeteor_launcher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_launcher_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.ReceiveTick");

	AMeteor_launcher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.Destroy_MeteorLauncher
// ()

void AMeteor_launcher_C::Destroy_MeteorLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.Destroy_MeteorLauncher");

	AMeteor_launcher_C_Destroy_MeteorLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_launcher.Meteor_launcher_C.ExecuteUbergraph_Meteor_launcher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_launcher_C::ExecuteUbergraph_Meteor_launcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_launcher.Meteor_launcher_C.ExecuteUbergraph_Meteor_launcher");

	AMeteor_launcher_C_ExecuteUbergraph_Meteor_launcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
