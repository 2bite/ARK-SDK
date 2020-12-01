// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_Shield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization
// ()

void ABuff_MekBackpack_Shield_C::OnSyncColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization");

	ABuff_MekBackpack_Shield_C_OnSyncColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound
// ()
// Parameters:
// int                            SoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::PlayShieldSound(int SoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound");

	ABuff_MekBackpack_Shield_C_PlayShieldSound_Params params;
	params.SoundIndex = SoundIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// struct FMekBackpackData        Data                           (Parm, OutParm)

void ABuff_MekBackpack_Shield_C::STATIC_GetBackpackSaveData(struct FMekBackpackData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData");

	ABuff_MekBackpack_Shield_C_GetBackpackSaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData
// ()
// Parameters:
// struct FMekBackpackData*       SaveData                       (Parm)

void ABuff_MekBackpack_Shield_C::RestoreBackpackSaveData(struct FMekBackpackData* SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData");

	ABuff_MekBackpack_Shield_C_RestoreBackpackSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmissiveMin                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          IOR                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::SetShieldShellMaterialParams(const struct FLinearColor& Color, float Health, float Opacity, float EmissiveMin, float IOR)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams");

	ABuff_MekBackpack_Shield_C_SetShieldShellMaterialParams_Params params;
	params.Color = Color;
	params.Health = Health;
	params.Opacity = Opacity;
	params.EmissiveMin = EmissiveMin;
	params.IOR = IOR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay
// ()

void ABuff_MekBackpack_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay");

	ABuff_MekBackpack_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient");

	ABuff_MekBackpack_Shield_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated");

	ABuff_MekBackpack_Shield_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::GetShieldStatus(bool* IsActive, struct FVector* WorldLocation, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus");

	ABuff_MekBackpack_Shield_C_GetShieldStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::EnsureCharacterHasShieldBuff(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff");

	ABuff_MekBackpack_Shield_C_EnsureCharacterHasShieldBuff_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack
// ()
// Parameters:
// bool                           CanActivate                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  FailureMessage                 (Parm, OutParm, ZeroConstructor)

void ABuff_MekBackpack_Shield_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack");

	ABuff_MekBackpack_Shield_C_CanActivateBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanActivate != nullptr)
		*CanActivate = params.CanActivate;
	if (FailureMessage != nullptr)
		*FailureMessage = params.FailureMessage;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover
// ()
// Parameters:
// bool                           CanHover                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::AllowMekHover(bool* CanHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover");

	ABuff_MekBackpack_Shield_C_AllowMekHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHover != nullptr)
		*CanHover = params.CanHover;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer");

	ABuff_MekBackpack_Shield_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::IsBackpackActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive");

	ABuff_MekBackpack_Shield_C_IsBackpackActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated
// ()

void ABuff_MekBackpack_Shield_C::OnBackpackActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated");

	ABuff_MekBackpack_Shield_C_OnBackpackActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated
// ()

void ABuff_MekBackpack_Shield_C::OnBackpackDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated");

	ABuff_MekBackpack_Shield_C_OnBackpackDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript
// ()

void ABuff_MekBackpack_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript");

	ABuff_MekBackpack_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc
// ()

void ABuff_MekBackpack_Shield_C::ShieldDropTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc");

	ABuff_MekBackpack_Shield_C_ShieldDropTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc
// ()

void ABuff_MekBackpack_Shield_C::ShieldDropTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc");

	ABuff_MekBackpack_Shield_C_ShieldDropTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc
// ()

void ABuff_MekBackpack_Shield_C::ShieldExpandTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc");

	ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc
// ()

void ABuff_MekBackpack_Shield_C::ShieldExpandTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc");

	ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield
// ()

void ABuff_MekBackpack_Shield_C::MultiDropShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield");

	ABuff_MekBackpack_Shield_C_MultiDropShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ABuff_MekBackpack_Shield_C::BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature");

	ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature");

	ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach
// ()

void ABuff_MekBackpack_Shield_C::OnShieldAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach");

	ABuff_MekBackpack_Shield_C_OnShieldAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach
// ()

void ABuff_MekBackpack_Shield_C::MultiOnShieldDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach");

	ABuff_MekBackpack_Shield_C_MultiOnShieldDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield
// ()

void ABuff_MekBackpack_Shield_C::MultiRetractShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield");

	ABuff_MekBackpack_Shield_C_MultiRetractShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::MultiAutoDeploy(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy");

	ABuff_MekBackpack_Shield_C_MultiAutoDeploy_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization
// ()

void ABuff_MekBackpack_Shield_C::SyncColorization()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization");

	ABuff_MekBackpack_Shield_C_SyncColorization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekBackpack_Shield_C::ExecuteUbergraph_Buff_MekBackpack_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield");

	ABuff_MekBackpack_Shield_C_ExecuteUbergraph_Buff_MekBackpack_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
