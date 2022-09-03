// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_Sino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals
// ()
// Parameters:
// float                          current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetSinoFoodVals(float* current, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoFoodVals");

	ABuff_Glider_Sino_C_GetSinoFoodVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current != nullptr)
		*current = params.current;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX
// ()

void ABuff_Glider_Sino_C::UpdateGliderSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderSFX");

	ABuff_Glider_Sino_C_UpdateGliderSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX
// ()

void ABuff_Glider_Sino_C::UpdateVelocityForVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateVelocityForVFX");

	ABuff_Glider_Sino_C_UpdateVelocityForVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider
// ()

void ABuff_Glider_Sino_C::InitGlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InitGlider");

	ABuff_Glider_Sino_C_InitGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV
// ()
// Parameters:
// float*                         inFOV                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Glider_Sino_C::BP_ModifyCharacterFOV(float* inFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BP_ModifyCharacterFOV");

	ABuff_Glider_Sino_C_BP_ModifyCharacterFOV_Params params;
	params.inFOV = inFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired
// ()

void ABuff_Glider_Sino_C::DoInjuredJumpIfRequired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.DoInjuredJumpIfRequired");

	ABuff_Glider_Sino_C_DoInjuredJumpIfRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ
// ()
// Parameters:
// bool                           IsInNonFlightArea              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::CheckIsInNoFlySPZ(bool* IsInNonFlightArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.CheckIsInNoFlySPZ");

	ABuff_Glider_Sino_C_CheckIsInNoFlySPZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInNonFlightArea != nullptr)
		*IsInNonFlightArea = params.IsInNonFlightArea;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage
// ()

void ABuff_Glider_Sino_C::ClearIsGlideFallingFromDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsGlideFallingFromDamage");

	ABuff_Glider_Sino_C_ClearIsGlideFallingFromDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Glider_Sino_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffAdjustDamage");

	ABuff_Glider_Sino_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX
// ()

void ABuff_Glider_Sino_C::AttachWingVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttachWingVFX");

	ABuff_Glider_Sino_C_AttachWingVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage
// ()

void ABuff_Glider_Sino_C::PlayInsufficientStaminaMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.PlayInsufficientStaminaMessage");

	ABuff_Glider_Sino_C_PlayInsufficientStaminaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals
// ()
// Parameters:
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderInactiveMeshTargetRotVals");

	ABuff_Glider_Sino_C_GetGliderInactiveMeshTargetRotVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rot != nullptr)
		*Rot = params.Rot;
	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump
// ()
// Parameters:
// bool                           CanDoubleJump                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetCanDoubleJump(bool* CanDoubleJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetCanDoubleJump");

	ABuff_Glider_Sino_C_GetCanDoubleJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDoubleJump != nullptr)
		*CanDoubleJump = params.CanDoubleJump;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping
// ()

void ABuff_Glider_Sino_C::ClearIsDoubleJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearIsDoubleJumping");

	ABuff_Glider_Sino_C_ClearIsDoubleJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping
// (NetRequest, Event, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           isDoubleJumping                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::STATIC_AttemptSetIsDoubleJumping(bool isDoubleJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.AttemptSetIsDoubleJumping");

	ABuff_Glider_Sino_C_AttemptSetIsDoubleJumping_Params params;
	params.isDoubleJumping = isDoubleJumping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh
// ()
// Parameters:
// bool                           foundMesh                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  meshRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetGliderMesh");

	ABuff_Glider_Sino_C_GetGliderMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundMesh != nullptr)
		*foundMesh = params.foundMesh;
	if (meshRef != nullptr)
		*meshRef = params.meshRef;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater
// ()

void ABuff_Glider_Sino_C::ClearOwnerIgnoreWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ClearOwnerIgnoreWater");

	ABuff_Glider_Sino_C_ClearOwnerIgnoreWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface
// ()
// Parameters:
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSwimming                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetIsCloseToWaterSurface(bool* IsClose, bool* IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetIsCloseToWaterSurface");

	ABuff_Glider_Sino_C_GetIsCloseToWaterSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
	if (IsSwimming != nullptr)
		*IsSwimming = params.IsSwimming;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer
// (NetRequest, Native, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickServer");

	ABuff_Glider_Sino_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider
// ()
// Parameters:
// bool*                          isToStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::Can_Use_Glider(bool* isToStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Can Use Glider");

	ABuff_Glider_Sino_C_Can_Use_Glider_Params params;
	params.isToStart = isToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState
// ()
// Parameters:
// TEnumAsByte<E_SinoMovementState> MovementState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanEnter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::ExCanUseSinoMovementState(TEnumAsByte<E_SinoMovementState> MovementState, bool* CanEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExCanUseSinoMovementState");

	ABuff_Glider_Sino_C_ExCanUseSinoMovementState_Params params;
	params.MovementState = MovementState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanEnter != nullptr)
		*CanEnter = params.CanEnter;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient
// ()

void ABuff_Glider_Sino_C::UpdateGliderByState_ServerAndClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateGliderByState_ServerAndClient");

	ABuff_Glider_Sino_C_UpdateGliderByState_ServerAndClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_Glider_Sino_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Glider_Sino_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Glider_Sino_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Glider_Sino_C::HideBuffFromHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.HideBuffFromHUD");

	ABuff_Glider_Sino_C_HideBuffFromHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState
// (MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SinoMovementState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::NetSetCurrentSinoState(TEnumAsByte<E_SinoMovementState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentSinoState");

	ABuff_Glider_Sino_C_NetSetCurrentSinoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState
// ()
// Parameters:
// TEnumAsByte<E_GliderStates>*   NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::NetSetCurrentGliderState(TEnumAsByte<E_GliderStates>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.NetSetCurrentGliderState");

	ABuff_Glider_Sino_C_NetSetCurrentGliderState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement
// ()
// Parameters:
// TEnumAsByte<E_SinoMovementState> MovementType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::CanUseSinoMovement(TEnumAsByte<E_SinoMovementState> MovementType, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.CanUseSinoMovement");

	ABuff_Glider_Sino_C_CanUseSinoMovement_Params params;
	params.MovementType = MovementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BuffTickClient");

	ABuff_Glider_Sino_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals
// ()
// Parameters:
// float                          current                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::GetSinoStaminaVals(float* current, float* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.GetSinoStaminaVals");

	ABuff_Glider_Sino_C_GetSinoStaminaVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (current != nullptr)
		*current = params.current;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintEvent)

void ABuff_Glider_Sino_C::UpdateBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UpdateBuffDescription");

	ABuff_Glider_Sino_C_UpdateBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABuff_Glider_Sino_C::RefreshMountedSinoMovementState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.RefreshMountedSinoMovementState");

	ABuff_Glider_Sino_C_RefreshMountedSinoMovementState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState
// ()

void ABuff_Glider_Sino_C::OnRep_SinoMovementState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnRep_SinoMovementState");

	ABuff_Glider_Sino_C_OnRep_SinoMovementState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript
// ()

void ABuff_Glider_Sino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.UserConstructionScript");

	ABuff_Glider_Sino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422
// ()

void ABuff_Glider_Sino_C::InpActEvt_Jump_K2Node_InputActionEvent_422()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_422");

	ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_422_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421
// ()

void ABuff_Glider_Sino_C::InpActEvt_Jump_K2Node_InputActionEvent_421()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Jump_K2Node_InputActionEvent_421");

	ABuff_Glider_Sino_C_InpActEvt_Jump_K2Node_InputActionEvent_421_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90
// ()

void ABuff_Glider_Sino_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90");

	ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_90_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89
// ()

void ABuff_Glider_Sino_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89");

	ABuff_Glider_Sino_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_89_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420
// ()

void ABuff_Glider_Sino_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420");

	ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_420_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419
// ()

void ABuff_Glider_Sino_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419");

	ABuff_Glider_Sino_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_419_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418
// ()

void ABuff_Glider_Sino_C::InpActEvt_Crouch_K2Node_InputActionEvent_418()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Crouch_K2Node_InputActionEvent_418");

	ABuff_Glider_Sino_C_InpActEvt_Crouch_K2Node_InputActionEvent_418_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417
// ()

void ABuff_Glider_Sino_C::InpActEvt_Prone_K2Node_InputActionEvent_417()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.InpActEvt_Prone_K2Node_InputActionEvent_417");

	ABuff_Glider_Sino_C_InpActEvt_Prone_K2Node_InputActionEvent_417_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState
// ()
// Parameters:
// TEnumAsByte<E_SinoMovementState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::Server_RequestChangeSinoMovementState(TEnumAsByte<E_SinoMovementState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_RequestChangeSinoMovementState");

	ABuff_Glider_Sino_C_Server_RequestChangeSinoMovementState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed
// ()

void ABuff_Glider_Sino_C::OnPlayerJump_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Pressed");

	ABuff_Glider_Sino_C_OnPlayerJump_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released
// ()

void ABuff_Glider_Sino_C::OnPlayerJump_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerJump_Released");

	ABuff_Glider_Sino_C_OnPlayerJump_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.BPDeactivated");

	ABuff_Glider_Sino_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump
// ()
// Parameters:
// bool                           IsDoubleJump                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::Server_AttemptSetDoubleJump(bool IsDoubleJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Server_AttemptSetDoubleJump");

	ABuff_Glider_Sino_C_Server_AttemptSetDoubleJump_Params params;
	params.IsDoubleJump = IsDoubleJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals
// ()
// Parameters:
// float                          Stam                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          food                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::Client_UpdateSinoStatVals(float Stam, float food)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_UpdateSinoStatVals");

	ABuff_Glider_Sino_C_Client_UpdateSinoStatVals_Params params;
	params.Stam = Stam;
	params.food = food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released
// ()

void ABuff_Glider_Sino_C::OnPlayerToggleCrouch_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Released");

	ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed
// ()

void ABuff_Glider_Sino_C::OnPlayerToggleCrouch_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.OnPlayerToggleCrouch_Pressed");

	ABuff_Glider_Sino_C_OnPlayerToggleCrouch_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam
// ()
// Parameters:
// bool                           Set                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::Client_SetIsGlideFallingFromDam(bool Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.Client_SetIsGlideFallingFromDam");

	ABuff_Glider_Sino_C_Client_SetIsGlideFallingFromDam_Params params;
	params.Set = Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_Sino_C::ExecuteUbergraph_Buff_Glider_Sino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider_Sino.Buff_Glider_Sino_C.ExecuteUbergraph_Buff_Glider_Sino");

	ABuff_Glider_Sino_C_ExecuteUbergraph_Buff_Glider_Sino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
