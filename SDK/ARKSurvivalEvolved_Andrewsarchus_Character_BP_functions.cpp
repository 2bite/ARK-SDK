// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Andrewsarchus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet
// ()
// Parameters:
// TArray<int>                    MaterialIndices                (Parm, OutParm, ZeroConstructor)

void AAndrewsarchus_Character_BP_C::GetMaterialIndicesToSupportNet(TArray<int>* MaterialIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMaterialIndicesToSupportNet");

	AAndrewsarchus_Character_BP_C_GetMaterialIndicesToSupportNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialIndices != nullptr)
		*MaterialIndices = params.MaterialIndices;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff
// ()
// Parameters:
// bool                           bHasBuff                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::HasNettedBuff(bool* bHasBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.HasNettedBuff");

	AAndrewsarchus_Character_BP_C_HasNettedBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasBuff != nullptr)
		*bHasBuff = params.bHasBuff;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BP_PreventUnmounting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_PreventUnmounting");

	AAndrewsarchus_Character_BP_C_BP_PreventUnmounting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC
// ()
// Parameters:
// class APrimalCharacter*        ForTaget                       (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::DisableCC(class APrimalCharacter* ForTaget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DisableCC");

	AAndrewsarchus_Character_BP_C_DisableCC_Params params;
	params.ForTaget = ForTaget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AAndrewsarchus_Character_BP_C::GetDinoLevelUpAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDinoLevelUpAnimation");

	AAndrewsarchus_Character_BP_C_GetDinoLevelUpAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void AAndrewsarchus_Character_BP_C::STATIC_Server_ToggleTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ToggleTurret");

	AAndrewsarchus_Character_BP_C_Server_ToggleTurret_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility
// ()

void AAndrewsarchus_Character_BP_C::UpdateCanvasVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateCanvasVisibility");

	AAndrewsarchus_Character_BP_C_UpdateCanvasVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio
// ()
// Parameters:
// bool                           IsRotating                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFromInit                     (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::SetTurretIsRotatingAudio(bool IsRotating, bool IsFromInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetTurretIsRotatingAudio");

	AAndrewsarchus_Character_BP_C_SetTurretIsRotatingAudio_Params params;
	params.IsRotating = IsRotating;
	params.IsFromInit = IsFromInit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized
// ()
// Parameters:
// class UStructurePaintingComponent** PaintingComp                   (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BP_OnPaintingComponentInitialized(class UStructurePaintingComponent** PaintingComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnPaintingComponentInitialized");

	AAndrewsarchus_Character_BP_C_BP_OnPaintingComponentInitialized_Params params;
	params.PaintingComp = PaintingComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures
// ()

void AAndrewsarchus_Character_BP_C::InitPaintTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitPaintTextures");

	AAndrewsarchus_Character_BP_C_InitPaintTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTryMultiUse");

	AAndrewsarchus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AAndrewsarchus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetMultiUseEntries");

	AAndrewsarchus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh
// ()
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMeshComponent* AAndrewsarchus_Character_BP_C::GetPaintingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetPaintingMesh");

	AAndrewsarchus_Character_BP_C_GetPaintingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSafe                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::STATIC_IsServerSafeFiringLocation(const struct FVector& Location, bool* IsSafe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IsServerSafeFiringLocation");

	AAndrewsarchus_Character_BP_C_IsServerSafeFiringLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSafe != nullptr)
		*IsSafe = params.IsSafe;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation
// ()
// Parameters:
// struct FRotator                desiredRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetDesiredTurretRotation(struct FRotator* desiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetDesiredTurretRotation");

	AAndrewsarchus_Character_BP_C_GetDesiredTurretRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (desiredRotation != nullptr)
		*desiredRotation = params.desiredRotation;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetMinigunLocationRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetMinigunLocationRotation");

	AAndrewsarchus_Character_BP_C_GetMinigunLocationRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetBarrelPivotSocketLocationRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetBarrelPivotSocketLocationRotation");

	AAndrewsarchus_Character_BP_C_GetBarrelPivotSocketLocationRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax
// ()

void AAndrewsarchus_Character_BP_C::DecOxygenIfMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.DecOxygenIfMax");

	AAndrewsarchus_Character_BP_C_DecOxygenIfMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation
// (Native, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OverrideRandomWanderLocation");

	AAndrewsarchus_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped
// ()

void AAndrewsarchus_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPCharacterSleeped");

	AAndrewsarchus_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink
// ()

void AAndrewsarchus_Character_BP_C::OnRep_bShouldUnderwaterSink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bShouldUnderwaterSink");

	AAndrewsarchus_Character_BP_C_OnRep_bShouldUnderwaterSink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem
// ()
// Parameters:
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPAddedAttachmentsForItem(class UPrimalItem** anItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAddedAttachmentsForItem");

	AAndrewsarchus_Character_BP_C_BPAddedAttachmentsForItem_Params params;
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility
// ()
// Parameters:
// bool                           IsForFPV                       (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::SetCameraTurretVisibility(bool IsForFPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SetCameraTurretVisibility");

	AAndrewsarchus_Character_BP_C_SetCameraTurretVisibility_Params params;
	params.IsForFPV = IsForFPV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify
// ()
// Parameters:
// struct FName                   NewCameraStyle                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   OldCameraStyle                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BP_OnCameraStyleChangedNotify(struct FName* NewCameraStyle, struct FName* OldCameraStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_OnCameraStyleChangedNotify");

	AAndrewsarchus_Character_BP_C_BP_OnCameraStyleChangedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCameraStyle != nullptr)
		*NewCameraStyle = params.NewCameraStyle;
	if (OldCameraStyle != nullptr)
		*OldCameraStyle = params.OldCameraStyle;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAndrewsarchus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AAndrewsarchus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAndrewsarchus_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardDirection");

	AAndrewsarchus_Character_BP_C_BPGetRiderUnboardDirection_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPSetupTamed");

	AAndrewsarchus_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX
// (NetReliable, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AAndrewsarchus_Character_BP_C::STATIC_SpawnJumpVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnJumpVFX");

	AAndrewsarchus_Character_BP_C_SpawnJumpVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX
// ()

void AAndrewsarchus_Character_BP_C::SpawnSlideVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.SpawnSlideVFX");

	AAndrewsarchus_Character_BP_C_SpawnSlideVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput
// ()

void AAndrewsarchus_Character_BP_C::IncreaseTamingIneffectivenessOnIncorrectInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.IncreaseTamingIneffectivenessOnIncorrectInput");

	AAndrewsarchus_Character_BP_C_IncreaseTamingIneffectivenessOnIncorrectInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AAndrewsarchus_Character_BP_C::BPGetRiderSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderSocket");

	AAndrewsarchus_Character_BP_C_BPGetRiderSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding
// ()

void AAndrewsarchus_Character_BP_C::AggroOntoActorAfterRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AggroOntoActorAfterRiding");

	AAndrewsarchus_Character_BP_C_AggroOntoActorAfterRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPServerHandleNetExecCommand");

	AAndrewsarchus_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy
// ()

void AAndrewsarchus_Character_BP_C::InitAndy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InitAndy");

	AAndrewsarchus_Character_BP_C_InitAndy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost
// ()

void AAndrewsarchus_Character_BP_C::RegenSpeedBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RegenSpeedBoost");

	AAndrewsarchus_Character_BP_C_RegenSpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAndrewsarchus_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPAdjustDamage");

	AAndrewsarchus_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleUseButtonPress");

	AAndrewsarchus_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPOverrideIsSubmergedForWaterTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideIsSubmergedForWaterTargeting");

	AAndrewsarchus_Character_BP_C_BPOverrideIsSubmergedForWaterTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAndrewsarchus_Character_BP_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCharacterNewFallVelocity");

	AAndrewsarchus_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex
// ()

void AAndrewsarchus_Character_BP_C::ClearMinigunSlideDirIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearMinigunSlideDirIndex");

	AAndrewsarchus_Character_BP_C_ClearMinigunSlideDirIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide
// ()

void AAndrewsarchus_Character_BP_C::ClearShouldAttemptMinigunSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptMinigunSlide");

	AAndrewsarchus_Character_BP_C_ClearShouldAttemptMinigunSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)
// float*                         FallDamageAmount               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventFallDamage");

	AAndrewsarchus_Character_BP_C_BPPreventFallDamage_Params params;
	params.FallDamageAmount = FallDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAndrewsarchus_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_GetCustomModifier_MaxSpeed");

	AAndrewsarchus_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking
// ()
// Parameters:
// bool                           IsUnderwater                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetIsUnderwaterSinking(bool* IsUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetIsUnderwaterSinking");

	AAndrewsarchus_Character_BP_C_GetIsUnderwaterSinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnderwater != nullptr)
		*IsUnderwater = params.IsUnderwater;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage
// (NetReliable, Exec, Native, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AllowPlayMontage");

	AAndrewsarchus_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AAndrewsarchus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK
// ()
// Parameters:
// bool                           TwoLegged                      (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::UpdateLegIK(bool TwoLegged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateLegIK");

	AAndrewsarchus_Character_BP_C_UpdateLegIK_Params params;
	params.TwoLegged = TwoLegged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::UpdateMovementVars(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateMovementVars");

	AAndrewsarchus_Character_BP_C_UpdateMovementVars_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer
// ()

void AAndrewsarchus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPTimerServer");

	AAndrewsarchus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanAttack");

	AAndrewsarchus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnMovementModeChangedNotify");

	AAndrewsarchus_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WantsToMoveForward             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VelOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::ScaledJump(const struct FVector& Direction, float Alpha, bool WantsToMoveForward, const struct FVector& VelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ScaledJump");

	AAndrewsarchus_Character_BP_C_ScaledJump_Params params;
	params.Direction = Direction;
	params.Alpha = Alpha;
	params.WantsToMoveForward = WantsToMoveForward;
	params.VelOverride = VelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPOnStartJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOnStartJump");

	AAndrewsarchus_Character_BP_C_BPOnStartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPHandlePoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandlePoop");

	AAndrewsarchus_Character_BP_C_BPHandlePoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BP_InterceptMoveForward");

	AAndrewsarchus_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn
// ()

void AAndrewsarchus_Character_BP_C::EndDriftTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.EndDriftTurn");

	AAndrewsarchus_Character_BP_C_EndDriftTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPShouldLimitForwardDirection");

	AAndrewsarchus_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn
// ()

void AAndrewsarchus_Character_BP_C::StartDriftTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.StartDriftTurn");

	AAndrewsarchus_Character_BP_C_StartDriftTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAndrewsarchus_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetRiderUnboardLocation");

	AAndrewsarchus_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AAndrewsarchus_Character_BP_C::CheckTamingRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckTamingRiding");

	AAndrewsarchus_Character_BP_C_CheckTamingRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider
// ()

void AAndrewsarchus_Character_BP_C::ClearTamingRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearTamingRider");

	AAndrewsarchus_Character_BP_C_ClearTamingRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding
// ()

void AAndrewsarchus_Character_BP_C::ClearAllowTamingRiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearAllowTamingRiding");

	AAndrewsarchus_Character_BP_C_ClearAllowTamingRiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPPreventRiding");

	AAndrewsarchus_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming
// ()
// Parameters:
// class AShooterCharacter*       ForShooterChar                 (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::UpdateTaming(class AShooterCharacter* ForShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateTaming");

	AAndrewsarchus_Character_BP_C_UpdateTaming_Params params;
	params.ForShooterChar = ForShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPDoAttack");

	AAndrewsarchus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding
// ()

void AAndrewsarchus_Character_BP_C::OnRep_bIsSliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bIsSliding");

	AAndrewsarchus_Character_BP_C_OnRep_bIsSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding
// (Net, Exec, Native, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ShouldSlide                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::CheckUpdateSliding(bool* ShouldSlide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckUpdateSliding");

	AAndrewsarchus_Character_BP_C_CheckUpdateSliding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSlide != nullptr)
		*ShouldSlide = params.ShouldSlide;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding
// ()
// Parameters:
// bool                           EnableSliding                  (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::UpdateSliding(bool EnableSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UpdateSliding");

	AAndrewsarchus_Character_BP_C_UpdateSliding_Params params;
	params.EnableSliding = EnableSliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost
// ()

void AAndrewsarchus_Character_BP_C::ApplySpeedBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ApplySpeedBoost");

	AAndrewsarchus_Character_BP_C_ApplySpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost
// ()

void AAndrewsarchus_Character_BP_C::ClearShouldAttemptSpeedBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ClearShouldAttemptSpeedBoost");

	AAndrewsarchus_Character_BP_C_ClearShouldAttemptSpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost
// ()
// Parameters:
// bool                           CanSpeedBoost                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::CheckCanSpeedBoost(bool* CanSpeedBoost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.CheckCanSpeedBoost");

	AAndrewsarchus_Character_BP_C_CheckCanSpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpeedBoost != nullptr)
		*CanSpeedBoost = params.CanSpeedBoost;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AAndrewsarchus_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyAimOffsetNoTarget");

	AAndrewsarchus_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAndrewsarchus_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintAdjustOutputDamage");

	AAndrewsarchus_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InDesiredRotation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                OutDesiredRotation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPModifyDesiredRotation");

	AAndrewsarchus_Character_BP_C_BPModifyDesiredRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDesiredRotation != nullptr)
		*InDesiredRotation = params.InDesiredRotation;
	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = params.OutDesiredRotation;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifySetRider");

	AAndrewsarchus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AAndrewsarchus_Character_BP_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPGetHUDElements");

	AAndrewsarchus_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun
// ()
// Parameters:
// bool                           CanShoot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetCanShootMinigun(bool* CanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanShootMinigun");

	AAndrewsarchus_Character_BP_C_GetCanShootMinigun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShoot != nullptr)
		*CanShoot = params.CanShoot;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget
// (NetReliable, Exec, Native, Event, Static, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::STATIC_BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPOverrideCameraViewTarget");

	AAndrewsarchus_Character_BP_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPNotifyClearRider");

	AAndrewsarchus_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive
// ()

void AAndrewsarchus_Character_BP_C::OnRep_bMinigunActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.OnRep_bMinigunActive");

	AAndrewsarchus_Character_BP_C_OnRep_bMinigunActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleOnStopTargeting");

	AAndrewsarchus_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun
// ()
// Parameters:
// bool                           CanEnable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::GetCanEnableMinigun(bool* CanEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.GetCanEnableMinigun");

	AAndrewsarchus_Character_BP_C_GetCanEnableMinigun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanEnable != nullptr)
		*CanEnable = params.CanEnable;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BlueprintCanRiderAttack");

	AAndrewsarchus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAndrewsarchus_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPHandleControllerInitiatedAttack");

	AAndrewsarchus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick
// (NetReliable, NetRequest, Static, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::STATIC_RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.RidingTick");

	AAndrewsarchus_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript
// ()

void AAndrewsarchus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.UserConstructionScript");

	AAndrewsarchus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139
// ()

void AAndrewsarchus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_139()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_139");

	AAndrewsarchus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_139_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138
// ()

void AAndrewsarchus_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138");

	AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_138_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137
// ()

void AAndrewsarchus_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137");

	AAndrewsarchus_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_137_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136
// ()

void AAndrewsarchus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_136()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_136");

	AAndrewsarchus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_136_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135
// ()

void AAndrewsarchus_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_135()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_135");

	AAndrewsarchus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_135_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_FireMinigun(const struct FVector& Location, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_FireMinigun");

	AAndrewsarchus_Character_BP_C_Server_FireMinigun_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX
// ()
// Parameters:
// struct FVector                 EndLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShootDir                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm)

void AAndrewsarchus_Character_BP_C::Multi_SpawnFireVFX(const struct FVector& EndLoc, const struct FVector& Start, const struct FVector& ShootDir, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Multi_SpawnFireVFX");

	AAndrewsarchus_Character_BP_C_Multi_SpawnFireVFX_Params params;
	params.EndLoc = EndLoc;
	params.Start = Start;
	params.ShootDir = ShootDir;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire
// ()

void AAndrewsarchus_Character_BP_C::Server_CancelMinigunFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_CancelMinigunFire");

	AAndrewsarchus_Character_BP_C_Server_CancelMinigunFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot
// ()
// Parameters:
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_SetRepAimRot(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetRepAimRot");

	AAndrewsarchus_Character_BP_C_Server_SetRepAimRot_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex
// ()
// Parameters:
// int                            TurnIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_SetDesiredTurnIndex(int TurnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetDesiredTurnIndex");

	AAndrewsarchus_Character_BP_C_Server_SetDesiredTurnIndex_Params params;
	params.TurnIndex = TurnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost
// ()

void AAndrewsarchus_Character_BP_C::Server_AttemptSpeedBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptSpeedBoost");

	AAndrewsarchus_Character_BP_C_Server_AttemptSpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding
// ()
// Parameters:
// bool                           EnableSliding                  (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_UpdateSliding(bool EnableSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_UpdateSliding");

	AAndrewsarchus_Character_BP_C_Server_UpdateSliding_Params params;
	params.EnableSliding = EnableSliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim
// ()

void AAndrewsarchus_Character_BP_C::MC_StartSlideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_StartSlideAnim");

	AAndrewsarchus_Character_BP_C_MC_StartSlideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim
// ()

void AAndrewsarchus_Character_BP_C::MC_EndSlideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSlideAnim");

	AAndrewsarchus_Character_BP_C_MC_EndSlideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay
// ()

void AAndrewsarchus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ReceiveBeginPlay");

	AAndrewsarchus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis
// ()

void AAndrewsarchus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.BPUnstasis");

	AAndrewsarchus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WantsToMoveForward             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VelOverride                    (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_ScaledJump(const struct FVector& Direction, float Alpha, bool WantsToMoveForward, const struct FVector& VelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_ScaledJump");

	AAndrewsarchus_Character_BP_C_Server_ScaledJump_Params params;
	params.Direction = Direction;
	params.Alpha = Alpha;
	params.WantsToMoveForward = WantsToMoveForward;
	params.VelOverride = VelOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide
// ()
// Parameters:
// int                            DirIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_AttemptDoMinigunSlide(int DirIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_AttemptDoMinigunSlide");

	AAndrewsarchus_Character_BP_C_Server_AttemptDoMinigunSlide_Params params;
	params.DirIndex = DirIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars
// ()

void AAndrewsarchus_Character_BP_C::MC_RefreshMovementVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_RefreshMovementVars");

	AAndrewsarchus_Character_BP_C_MC_RefreshMovementVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount
// ()
// Parameters:
// float                          LastRightVal                   (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_Dismount(float LastRightVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_Dismount");

	AAndrewsarchus_Character_BP_C_Server_Dismount_Params params;
	params.LastRightVal = LastRightVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX
// ()

void AAndrewsarchus_Character_BP_C::PlayPreventDismountVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.PlayPreventDismountVFX");

	AAndrewsarchus_Character_BP_C_PlayPreventDismountVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement
// ()
// Parameters:
// bool                           Prevent                        (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::MC_PreventMovement(bool Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_PreventMovement");

	AAndrewsarchus_Character_BP_C_MC_PreventMovement_Params params;
	params.Prevent = Prevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink
// ()
// Parameters:
// bool                           ShouldSink                     (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::Server_SetShouldUnderwaterSink(bool ShouldSink)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.Server_SetShouldUnderwaterSink");

	AAndrewsarchus_Character_BP_C_Server_SetShouldUnderwaterSink_Params params;
	params.ShouldSink = ShouldSink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX
// ()

void AAndrewsarchus_Character_BP_C::MC_EndSLideVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.MC_EndSLideVFX");

	AAndrewsarchus_Character_BP_C_MC_EndSLideVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump
// ()

void AAndrewsarchus_Character_BP_C::AnimNotify_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.AnimNotify_Jump");

	AAndrewsarchus_Character_BP_C_AnimNotify_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAndrewsarchus_Character_BP_C::ExecuteUbergraph_Andrewsarchus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Andrewsarchus_Character_BP.Andrewsarchus_Character_BP_C.ExecuteUbergraph_Andrewsarchus_Character_BP");

	AAndrewsarchus_Character_BP_C_ExecuteUbergraph_Andrewsarchus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
