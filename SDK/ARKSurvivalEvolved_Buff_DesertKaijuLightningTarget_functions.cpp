// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesertKaijuLightningTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket
// ()
// Parameters:
// struct FVector                 CompareLoc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClosestSocket                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::FindClosestFXSocket(const struct FVector& CompareLoc, struct FName* ClosestSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket");

	ABuff_DesertKaijuLightningTarget_C_FindClosestFXSocket_Params params;
	params.CompareLoc = CompareLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestSocket != nullptr)
		*ClosestSocket = params.ClosestSocket;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer");

	ABuff_DesertKaijuLightningTarget_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator");

	ABuff_DesertKaijuLightningTarget_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated");

	ABuff_DesertKaijuLightningTarget_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser
// ()
// Parameters:
// class AActor**                 CausedBy                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::SetBuffCauser(class AActor** CausedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser");

	ABuff_DesertKaijuLightningTarget_C_SetBuffCauser_Params params;
	params.CausedBy = CausedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript
// ()

void ABuff_DesertKaijuLightningTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript");

	ABuff_DesertKaijuLightningTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc
// ()

void ABuff_DesertKaijuLightningTarget_C::SetLightningLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc");

	ABuff_DesertKaijuLightningTarget_C_SetLightningLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle
// ()

void ABuff_DesertKaijuLightningTarget_C::Client_DeactivateParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle");

	ABuff_DesertKaijuLightningTarget_C_Client_DeactivateParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseRelative                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::FireDelayedLightning(const struct FVector& Loc, bool UseRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning");

	ABuff_DesertKaijuLightningTarget_C_FireDelayedLightning_Params params;
	params.Loc = Loc;
	params.UseRelative = UseRelative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju
// ()
// Parameters:
// class USceneComponent*         Root                           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::Multi_AttachFXToKaiju(class USceneComponent* Root, class USceneComponent* Parent, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju");

	ABuff_DesertKaijuLightningTarget_C_Multi_AttachFXToKaiju_Params params;
	params.Root = Root;
	params.Parent = Parent;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Relative                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClosestSocket                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DmgCauser                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeLoc                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::Multi_SpawnNextLightning(const struct FVector& Loc, bool Relative, const struct FName& ClosestSocket, class AActor* DmgCauser, const struct FVector& RelativeLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning");

	ABuff_DesertKaijuLightningTarget_C_Multi_SpawnNextLightning_Params params;
	params.Loc = Loc;
	params.Relative = Relative;
	params.ClosestSocket = ClosestSocket;
	params.DmgCauser = DmgCauser;
	params.RelativeLoc = RelativeLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DesertKaijuLightningTarget_C::ExecuteUbergraph_Buff_DesertKaijuLightningTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget");

	ABuff_DesertKaijuLightningTarget_C_ExecuteUbergraph_Buff_DesertKaijuLightningTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
