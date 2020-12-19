// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_DinoLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad
// ()

void AStructure_DinoLeash_C::UpdateTetherAfterLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad");

	AStructure_DinoLeash_C_UpdateTetherAfterLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame
// ()

void AStructure_DinoLeash_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame");

	AStructure_DinoLeash_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_DinoLeash_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage");

	AStructure_DinoLeash_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility
// ()

void AStructure_DinoLeash_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility");

	AStructure_DinoLeash_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay
// ()

void AStructure_DinoLeash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay");

	AStructure_DinoLeash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis
// ()

void AStructure_DinoLeash_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis");

	AStructure_DinoLeash_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_DinoLeash_C::Get_Is_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active");

	AStructure_DinoLeash_C_Get_Is_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated
// ()

void AStructure_DinoLeash_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated");

	AStructure_DinoLeash_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated
// ()

void AStructure_DinoLeash_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated");

	AStructure_DinoLeash_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD
// (NetReliable, Exec, Event, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::BlueprintDrawPreviewHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD");

	AStructure_DinoLeash_C_BlueprintDrawPreviewHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius
// ()
// Parameters:
// float                          MaxRadius                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::GetMaximumAllowedRadius(float* MaxRadius, int* MaxSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius");

	AStructure_DinoLeash_C_GetMaximumAllowedRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxRadius != nullptr)
		*MaxRadius = params.MaxRadius;
	if (MaxSetting != nullptr)
		*MaxSetting = params.MaxSetting;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius
// ()

void AStructure_DinoLeash_C::TetherDinosInRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius");

	AStructure_DinoLeash_C_TetherDinosInRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius
// ()
// Parameters:
// float                          EffectRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceSet                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::SetEffectRadius(float EffectRadius, bool ForceSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius");

	AStructure_DinoLeash_C_SetEffectRadius_Params params;
	params.EffectRadius = EffectRadius;
	params.ForceSet = ForceSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius
// ()

void AStructure_DinoLeash_C::OnRep_EffectRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius");

	AStructure_DinoLeash_C_OnRep_EffectRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse");

	AStructure_DinoLeash_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructure_DinoLeash_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild");

	AStructure_DinoLeash_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure");

	AStructure_DinoLeash_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.Activate
// ()
// Parameters:
// bool                           Activated                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::Activate(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.Activate");

	AStructure_DinoLeash_C_Activate_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated
// ()

void AStructure_DinoLeash_C::OnRep_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated");

	AStructure_DinoLeash_C_OnRep_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_DinoLeash_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse");

	AStructure_DinoLeash_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries
// (NetReliable, Native, Event, Static, Public, Protected, NetClient, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_DinoLeash_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries");

	AStructure_DinoLeash_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript
// ()

void AStructure_DinoLeash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript");

	AStructure_DinoLeash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::AddTetherToDino(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino");

	AStructure_DinoLeash_C_AddTetherToDino_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TetherObject                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::MovementTetherEvent__DelegateSignature_Event(class APawn* Pawn, class AActor* TetherObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event");

	AStructure_DinoLeash_C_MovementTetherEvent__DelegateSignature_Event_Params params;
	params.Pawn = Pawn;
	params.TetherObject = TetherObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::RemoveTetherFromDino(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino");

	AStructure_DinoLeash_C_RemoveTetherFromDino_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AStructure_DinoLeash_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature");

	AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature");

	AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_DinoLeash_C::ExecuteUbergraph_Structure_DinoLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash");

	AStructure_DinoLeash_C_ExecuteUbergraph_Structure_DinoLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
