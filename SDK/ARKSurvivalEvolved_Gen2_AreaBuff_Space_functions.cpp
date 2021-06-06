// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Space_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider
// ()
// Parameters:
// class AShooterCharacter**      Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::DinoInstigatorReceivedRider(class AShooterCharacter** Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorReceivedRider");

	AGen2_AreaBuff_Space_C_DinoInstigatorReceivedRider_Params params;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider
// ()

void AGen2_AreaBuff_Space_C::DinoInstigatorClearedRider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoInstigatorClearedRider");

	AGen2_AreaBuff_Space_C_DinoInstigatorClearedRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager
// ()

void AGen2_AreaBuff_Space_C::UpdateDayCycleManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UpdateDayCycleManager");

	AGen2_AreaBuff_Space_C_UpdateDayCycleManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen2_AreaBuff_Space_C::AllowFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.AllowFalling");

	AGen2_AreaBuff_Space_C_AllowFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG
// ()
// Parameters:
// bool                           Ignore                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::HasBuffToIgnoreZeroG(bool* Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.HasBuffToIgnoreZeroG");

	AGen2_AreaBuff_Space_C_HasBuffToIgnoreZeroG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ignore != nullptr)
		*Ignore = params.Ignore;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound
// ()
// Parameters:
// class USoundBase**             SoundIn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen2_AreaBuff_Space_C::BPPreventNotifySound(class USoundBase** SoundIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventNotifySound");

	AGen2_AreaBuff_Space_C_BPPreventNotifySound_Params params;
	params.SoundIn = SoundIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation
// ()

void AGen2_AreaBuff_Space_C::ClearRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ClearRotation");

	AGen2_AreaBuff_Space_C_ClearRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing
// ()
// Parameters:
// bool                           IsClimbing                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::IsInstigatorClimbing(bool* IsClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.IsInstigatorClimbing");

	AGen2_AreaBuff_Space_C_IsInstigatorClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClimbing != nullptr)
		*IsClimbing = params.IsClimbing;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement
// ()

void AGen2_AreaBuff_Space_C::RestorePlayerMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestorePlayerMovement");

	AGen2_AreaBuff_Space_C_RestorePlayerMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement
// ()

void AGen2_AreaBuff_Space_C::InitializePlayerZeroGMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitializePlayerZeroGMovement");

	AGen2_AreaBuff_Space_C_InitializePlayerZeroGMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement
// ()

void AGen2_AreaBuff_Space_C::RestoreDinoMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.RestoreDinoMovement");

	AGen2_AreaBuff_Space_C_RestoreDinoMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement
// ()

void AGen2_AreaBuff_Space_C::InitialzeDinoZeroGMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.InitialzeDinoZeroGMovement");

	AGen2_AreaBuff_Space_C_InitialzeDinoZeroGMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGen2_AreaBuff_Space_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOverrideCharacterNewFallVelocity");

	AGen2_AreaBuff_Space_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying
// ()

void AGen2_AreaBuff_Space_C::StopFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StopFlying");

	AGen2_AreaBuff_Space_C_StopFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BuffTickServer");

	AGen2_AreaBuff_Space_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround
// (NetReliable, Event, NetResponse, Static, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, Const)

void AGen2_AreaBuff_Space_C::STATIC_CheckGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.CheckGround");

	AGen2_AreaBuff_Space_C_CheckGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPDeactivated");

	AGen2_AreaBuff_Space_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale
// ()
// Parameters:
// float*                         currentScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGen2_AreaBuff_Space_C::BPGetGravityZScale(float* currentScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPGetGravityZScale");

	AGen2_AreaBuff_Space_C_BPGetGravityZScale_Params params;
	params.currentScale = currentScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying
// ()

void AGen2_AreaBuff_Space_C::StartFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.StartFlying");

	AGen2_AreaBuff_Space_C_StartFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPOnInstigatorMovementModeChangedNotify");

	AGen2_AreaBuff_Space_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen2_AreaBuff_Space_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPPreventInstigatorMovementMode");

	AGen2_AreaBuff_Space_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.BPSetupForInstigator");

	AGen2_AreaBuff_Space_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript
// ()

void AGen2_AreaBuff_Space_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.UserConstructionScript");

	AGen2_AreaBuff_Space_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::DinoMounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoMounted");

	AGen2_AreaBuff_Space_C_DinoMounted_Params params;
	params.Player = Player;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::DinoUnmounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.DinoUnmounted");

	AGen2_AreaBuff_Space_C_DinoUnmounted_Params params;
	params.Player = Player;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::FlyingDinoLanded(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLanded");

	AGen2_AreaBuff_Space_C_FlyingDinoLanded_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::FlyingDinoStartLanding(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoStartLanding");

	AGen2_AreaBuff_Space_C_FlyingDinoStartLanding_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::FlyingDinoLandingInterrupted(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.FlyingDinoLandingInterrupted");

	AGen2_AreaBuff_Space_C_FlyingDinoLandingInterrupted_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Space_C::ExecuteUbergraph_Gen2_AreaBuff_Space(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C.ExecuteUbergraph_Gen2_AreaBuff_Space");

	AGen2_AreaBuff_Space_C_ExecuteUbergraph_Gen2_AreaBuff_Space_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
