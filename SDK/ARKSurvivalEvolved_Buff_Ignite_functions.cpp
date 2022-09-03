// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Ignite_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Ignite.Buff_Ignite_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Ignite_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BPCustomAllowAddBuff");

	ABuff_Ignite_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Ignite.Buff_Ignite_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Ignite_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BPPreventAddingOtherBuff");

	ABuff_Ignite_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Ignite.Buff_Ignite_C.MeleeIncIgnite
// ()

void ABuff_Ignite_C::MeleeIncIgnite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.MeleeIncIgnite");

	ABuff_Ignite_C_MeleeIncIgnite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.UpdateBuffDescription
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Protected, NetServer, NetClient, BlueprintEvent)

void ABuff_Ignite_C::UpdateBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.UpdateBuffDescription");

	ABuff_Ignite_C_UpdateBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.GetBuffDescription
// (NetReliable, Native, NetResponse, MulticastDelegate, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_Ignite_C::GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.GetBuffDescription");

	ABuff_Ignite_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Ignite.Buff_Ignite_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Ignite_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BPServerHandleNetExecCommand");

	ABuff_Ignite_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Ignite.Buff_Ignite_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Ignite_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.GetBuffPostprocessIntensity");

	ABuff_Ignite_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Ignite.Buff_Ignite_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BuffTickClient");

	ABuff_Ignite_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.Initialize
// ()

void ABuff_Ignite_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.Initialize");

	ABuff_Ignite_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BuffTickServer");

	ABuff_Ignite_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.ApplyOnFireDebuff
// ()

void ABuff_Ignite_C::ApplyOnFireDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.ApplyOnFireDebuff");

	ABuff_Ignite_C_ApplyOnFireDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.AddIgnite
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::AddIgnite(float amount, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.AddIgnite");

	ABuff_Ignite_C_AddIgnite_Params params;
	params.amount = amount;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.CheckDeactivateCondition
// ()

void ABuff_Ignite_C::CheckDeactivateCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.CheckDeactivateCondition");

	ABuff_Ignite_C_CheckDeactivateCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.BPDeactivated");

	ABuff_Ignite_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.UserConstructionScript
// ()

void ABuff_Ignite_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.UserConstructionScript");

	ABuff_Ignite_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.MultiExtendBuffTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::MultiExtendBuffTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.MultiExtendBuffTime");

	ABuff_Ignite_C_MultiExtendBuffTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.MultiAddIgnite
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::MultiAddIgnite(float amount, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.MultiAddIgnite");

	ABuff_Ignite_C_MultiAddIgnite_Params params;
	params.amount = amount;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.ReceiveBeginPlay
// ()

void ABuff_Ignite_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.ReceiveBeginPlay");

	ABuff_Ignite_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.ApplyOnFire
// ()

void ABuff_Ignite_C::ApplyOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.ApplyOnFire");

	ABuff_Ignite_C_ApplyOnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.ChangeIgniteVFX
// ()

void ABuff_Ignite_C::ChangeIgniteVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.ChangeIgniteVFX");

	ABuff_Ignite_C_ChangeIgniteVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Ignite.Buff_Ignite_C.ExecuteUbergraph_Buff_Ignite
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Ignite_C::ExecuteUbergraph_Buff_Ignite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Ignite.Buff_Ignite_C.ExecuteUbergraph_Buff_Ignite");

	ABuff_Ignite_C_ExecuteUbergraph_Buff_Ignite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
