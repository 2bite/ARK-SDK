// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhaleTeleport_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated");

	ABuff_SpaceWhaleTeleport_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed
// ()

void ABuff_SpaceWhaleTeleport_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed");

	ABuff_SpaceWhaleTeleport_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient");

	ABuff_SpaceWhaleTeleport_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator
// (NetReliable, NetRequest, Static, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator");

	ABuff_SpaceWhaleTeleport_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpaceWhaleTeleport_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff");

	ABuff_SpaceWhaleTeleport_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, HasDefaults)
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpaceWhaleTeleport_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode");

	ABuff_SpaceWhaleTeleport_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent
// (NetReliable, Exec, Static, MulticastDelegate, Private, Protected, NetServer, HasDefaults)
// Parameters:
// TEnumAsByte<EMassTeleportState>* EventState                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter**       TeleportInitiatedByChar        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::STATIC_BPOnOwnerMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent");

	ABuff_SpaceWhaleTeleport_C_BPOnOwnerMassTeleportEvent_Params params;
	params.EventState = EventState;
	params.TeleportInitiatedByChar = TeleportInitiatedByChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript
// ()

void ABuff_SpaceWhaleTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript");

	ABuff_SpaceWhaleTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect
// ()
// Parameters:
// class USceneComponent*         meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::MultiHyperdriveEffect(class USceneComponent* meshComp, const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect");

	ABuff_SpaceWhaleTeleport_C_MultiHyperdriveEffect_Params params;
	params.meshComp = meshComp;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered
// ()
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::OnMassTeleportTriggered(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered");

	ABuff_SpaceWhaleTeleport_C_OnMassTeleportTriggered_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted
// ()

void ABuff_SpaceWhaleTeleport_C::OnMassTeleportStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted");

	ABuff_SpaceWhaleTeleport_C_OnMassTeleportStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted
// ()

void ABuff_SpaceWhaleTeleport_C::OnMassTeleportCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted");

	ABuff_SpaceWhaleTeleport_C_OnMassTeleportCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated");

	ABuff_SpaceWhaleTeleport_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay
// ()

void ABuff_SpaceWhaleTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay");

	ABuff_SpaceWhaleTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode
// ()

void ABuff_SpaceWhaleTeleport_C::SyncMovementMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode");

	ABuff_SpaceWhaleTeleport_C_SyncMovementMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::HideMesh(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh");

	ABuff_SpaceWhaleTeleport_C_HideMesh_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceWhaleTeleport_C::ExecuteUbergraph_Buff_SpaceWhaleTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport");

	ABuff_SpaceWhaleTeleport_C_ExecuteUbergraph_Buff_SpaceWhaleTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
