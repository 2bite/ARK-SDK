// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach
// ()

void AThylacoleo_Character_BP_C::BPCharacterDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPCharacterDetach");

	AThylacoleo_Character_BP_C_BPCharacterDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CanThylacoCarryCharacter(class APrimalCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanThylacoCarryCharacter");

	AThylacoleo_Character_BP_C_CanThylacoCarryCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CanClimbOutOfWater(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanClimbOutOfWater");

	AThylacoleo_Character_BP_C_CanClimbOutOfWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active
// ()
// Parameters:
// bool                           newActive                      (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Set_IK_Active(bool newActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set IK_Active");

	AThylacoleo_Character_BP_C_Set_IK_Active_Params params;
	params.newActive = newActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable
// ()
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsNormalClimbable(const struct FVector& Normal, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsNormalClimbable");

	AThylacoleo_Character_BP_C_IsNormalClimbable_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AThylacoleo_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPAdjustDamage");

	AThylacoleo_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::ReduceThylacoStamina(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceThylacoStamina");

	AThylacoleo_Character_BP_C_ReduceThylacoStamina_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage
// ()
// Parameters:
// class FString                  Message                        (Parm, ZeroConstructor)

void AThylacoleo_Character_BP_C::DisplayMessage(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.DisplayMessage");

	AThylacoleo_Character_BP_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::HasEnoughStaminaToClimb(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HasEnoughStaminaToClimb");

	AThylacoleo_Character_BP_C_HasEnoughStaminaToClimb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Is_Thylaco_Climbing_Down(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is Thylaco Climbing Down");

	AThylacoleo_Character_BP_C_Is_Thylaco_Climbing_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsThylacoClimbing_Up(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing_Up");

	AThylacoleo_Character_BP_C_IsThylacoClimbing_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsThylacoClimbing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsThylacoClimbing");

	AThylacoleo_Character_BP_C_IsThylacoClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime
// ()

void AThylacoleo_Character_BP_C::ReduceStaminaOverTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReduceStaminaOverTime");

	AThylacoleo_Character_BP_C_ReduceStaminaOverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim
// ()

void AThylacoleo_Character_BP_C::ManualPlayLandAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ManualPlayLandAnim");

	AThylacoleo_Character_BP_C_ManualPlayLandAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPOnMovementModeChangedNotify");

	AThylacoleo_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir
// ()
// Parameters:
// struct FVector                 pounceDir                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CalcThylacoPounceDir(struct FVector* pounceDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CalcThylacoPounceDir");

	AThylacoleo_Character_BP_C_CalcThylacoPounceDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pounceDir != nullptr)
		*pounceDir = params.pounceDir;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::HardSetThylacoRotationButInterpMeshLocation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.HardSetThylacoRotationButInterpMeshLocation");

	AThylacoleo_Character_BP_C_HardSetThylacoRotationButInterpMeshLocation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall
// ()

void AThylacoleo_Character_BP_C::UpdateIsAttachingToWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateIsAttachingToWall");

	AThylacoleo_Character_BP_C_UpdateIsAttachingToWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims
// ()
// Parameters:
// bool                           animsClean                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CleanUpClimbingAnims(bool* animsClean)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CleanUpClimbingAnims");

	AThylacoleo_Character_BP_C_CleanUpClimbingAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animsClean != nullptr)
		*animsClean = params.animsClean;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::SetShouldRestoreToLatched(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetShouldRestoreToLatched");

	AThylacoleo_Character_BP_C_SetShouldRestoreToLatched_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Set_ThylacoRotationAnd_Interp_Mesh(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Set ThylacoRotationAnd Interp Mesh");

	AThylacoleo_Character_BP_C_Set_ThylacoRotationAnd_Interp_Mesh_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump
// ()

void AThylacoleo_Character_BP_C::WallJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.WallJump");

	AThylacoleo_Character_BP_C_WallJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh
// ()

void AThylacoleo_Character_BP_C::InterpolateMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InterpolateMesh");

	AThylacoleo_Character_BP_C_InterpolateMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThylacoleo_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPShouldForceFlee");

	AThylacoleo_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget
// (NetReliable, Static, Private, NetServer, HasOutParms, DLLImport)
// Parameters:
// bool                           shouldPounce                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::STATIC_CheckForPounceOnTarget(bool* shouldPounce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForPounceOnTarget");

	AThylacoleo_Character_BP_C_CheckForPounceOnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldPounce != nullptr)
		*shouldPounce = params.shouldPounce;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims
// ()
// Parameters:
// bool                           ensureAnimsPlaying             (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::UpdateThylacoAnims(bool ensureAnimsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoAnims");

	AThylacoleo_Character_BP_C_UpdateThylacoAnims_Params params;
	params.ensureAnimsPlaying = ensureAnimsPlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets
// ()
// Parameters:
// bool                           newUse                         (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::SetUse_Aim_Offsets(bool newUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetUse Aim Offsets");

	AThylacoleo_Character_BP_C_SetUse_Aim_Offsets_Params params;
	params.newUse = newUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AThylacoleo_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPModifyAimOffsetTargetLocation");

	AThylacoleo_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::GetWallAttachImpulse(struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetWallAttachImpulse");

	AThylacoleo_Character_BP_C_GetWallAttachImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impulse != nullptr)
		*Impulse = params.Impulse;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveAnyDamage");

	AThylacoleo_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco
// ()

void AThylacoleo_Character_BP_C::InitThylaco()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco");

	AThylacoleo_Character_BP_C_InitThylaco_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis
// ()

void AThylacoleo_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPUnstasis");

	AThylacoleo_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree
// (NetReliable, NetRequest, NetResponse, NetMulticast, Private, NetServer, HasOutParms, DLLImport)

void AThylacoleo_Character_BP_C::Check_for_Ai_Attach_to_Tree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Check for Ai Attach to Tree");

	AThylacoleo_Character_BP_C_Check_for_Ai_Attach_to_Tree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState
// ()
// Parameters:
// TEnumAsByte<E_PredatorClimbingState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Client_SetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Client_SetClimbingState");

	AThylacoleo_Character_BP_C_Client_SetClimbingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground
// (NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, HasOutParms, DLLImport)
// Parameters:
// float                          CheckDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::STATIC_Is_DinoAbove_Ground(float CheckDistance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Is DinoAbove Ground");

	AThylacoleo_Character_BP_C_Is_DinoAbove_Ground_Params params;
	params.CheckDistance = CheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim
// ()

void AThylacoleo_Character_BP_C::UpdateJumpingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateJumpingAnim");

	AThylacoleo_Character_BP_C_UpdateJumpingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree
// ()
// Parameters:
// bool                           newVal                         (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::SetAI_LatchedToTree(bool newVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetAI_LatchedToTree");

	AThylacoleo_Character_BP_C_SetAI_LatchedToTree_Params params;
	params.newVal = newVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller
// ()
// Parameters:
// class AThylacoleo_AIController_BP_C* Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Get_Thylaco_Ai_Controller(class AThylacoleo_AIController_BP_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Get Thylaco Ai Controller");

	AThylacoleo_Character_BP_C_Get_Thylaco_Ai_Controller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThylacoleo_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTryMultiUse");

	AThylacoleo_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, NetServer, HasOutParms, DLLImport)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AThylacoleo_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPGetMultiUseEntries");

	AThylacoleo_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree
// ()

void AThylacoleo_Character_BP_C::AiDropFromTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AiDropFromTree");

	AThylacoleo_Character_BP_C_AiDropFromTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsLatched(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatched");

	AThylacoleo_Character_BP_C_IsLatched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsLatching(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsLatching");

	AThylacoleo_Character_BP_C_IsLatching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim
// ()
// Parameters:
// class UAnimMontage*            animRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::GetCorrectLatchingAnim(class UAnimMontage** animRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetCorrectLatchingAnim");

	AThylacoleo_Character_BP_C_GetCorrectLatchingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animRef != nullptr)
		*animRef = params.animRef;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifyClearRider");

	AThylacoleo_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPNotifySetRider");

	AThylacoleo_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated
// ()

void AThylacoleo_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerNonDedicated");

	AThylacoleo_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey
// ()

void AThylacoleo_Character_BP_C::RemoveCarryBuffFromPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.RemoveCarryBuffFromPrey");

	AThylacoleo_Character_BP_C_RemoveCarryBuffFromPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey
// ()

void AThylacoleo_Character_BP_C::ReleasePrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReleasePrey");

	AThylacoleo_Character_BP_C_ReleasePrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThylacoleo_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanAttack");

	AThylacoleo_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsMaulingValidCharacter(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsMaulingValidCharacter");

	AThylacoleo_Character_BP_C_IsMaulingValidCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CanPounce(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanPounce");

	AThylacoleo_Character_BP_C_CanPounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal
// ()

void AThylacoleo_Character_BP_C::OnRep_currentClimbableSurfaceNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_currentClimbableSurfaceNormal");

	AThylacoleo_Character_BP_C_OnRep_currentClimbableSurfaceNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms
// ()

void AThylacoleo_Character_BP_C::UpdateThylacoTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UpdateThylacoTransforms");

	AThylacoleo_Character_BP_C_UpdateThylacoTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::GetDesiredDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDesiredDirection");

	AThylacoleo_Character_BP_C_GetDesiredDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop
// (Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrimalCharacter*        HitTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Pounce_Stop(class APrimalCharacter* HitTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Stop");

	AThylacoleo_Character_BP_C_Pounce_Stop_Params params;
	params.HitTarget = HitTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CanKeepPouncing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CanKeepPouncing");

	AThylacoleo_Character_BP_C_CanKeepPouncing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)

void AThylacoleo_Character_BP_C::Pounce_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Tick");

	AThylacoleo_Character_BP_C_Pounce_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start
// ()

void AThylacoleo_Character_BP_C::Pounce_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Pounce_Start");

	AThylacoleo_Character_BP_C_Pounce_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AThylacoleo_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BlueprintCanRiderAttack");

	AThylacoleo_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino
// ()
// Parameters:
// class AThylacoleo_Character_BP_C* Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::GetDefaultDino(class AThylacoleo_Character_BP_C** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.GetDefaultDino");

	AThylacoleo_Character_BP_C_GetDefaultDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::IsDinoGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.IsDinoGrounded");

	AThylacoleo_Character_BP_C_IsDinoGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 checkDir                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          checkDist                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::CheckForClimbableSurface(const struct FVector& checkDir, float checkDist, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckForClimbableSurface");

	AThylacoleo_Character_BP_C_CheckForClimbableSurface_Params params;
	params.checkDir = checkDir;
	params.checkDist = checkDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState
// ()

void AThylacoleo_Character_BP_C::OnRep_CurrentClimbingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.OnRep_CurrentClimbingState");

	AThylacoleo_Character_BP_C_OnRep_CurrentClimbingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState
// ()
// Parameters:
// TEnumAsByte<E_PredatorClimbingState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.NetSetClimbingState");

	AThylacoleo_Character_BP_C_NetSetClimbingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer
// ()

void AThylacoleo_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BPTimerServer");

	AThylacoleo_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript
// ()

void AThylacoleo_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.UserConstructionScript");

	AThylacoleo_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed
// ()

void AThylacoleo_Character_BP_C::Server_JumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpPressed");

	AThylacoleo_Character_BP_C_Server_JumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased
// ()

void AThylacoleo_Character_BP_C::Server_JumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_JumpReleased");

	AThylacoleo_Character_BP_C_Server_JumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay
// ()

void AThylacoleo_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ReceiveBeginPlay");

	AThylacoleo_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey
// ()

void AThylacoleo_Character_BP_C::AnimNotify_MaulPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.AnimNotify_MaulPrey");

	AThylacoleo_Character_BP_C_AnimNotify_MaulPrey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState
// ()
// Parameters:
// TEnumAsByte<E_PredatorClimbingState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::Server_NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.Server_NetSetClimbingState");

	AThylacoleo_Character_BP_C_Server_NetSetClimbingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::SetReadyToClimbAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SetReadyToClimbAfterDelay");

	AThylacoleo_Character_BP_C_SetReadyToClimbAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree
// ()

void AThylacoleo_Character_BP_C::CheckUntil_SetAiLatchedToTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_SetAiLatchedToTree");

	AThylacoleo_Character_BP_C_CheckUntil_SetAiLatchedToTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::EnsureCorrectAnimsPlayingAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureCorrectAnimsPlayingAfterDelay");

	AThylacoleo_Character_BP_C_EnsureCorrectAnimsPlayingAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall
// ()

void AThylacoleo_Character_BP_C::PlayAttachParticleWhenCloseToWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PlayAttachParticleWhenCloseToWall");

	AThylacoleo_Character_BP_C_PlayAttachParticleWhenCloseToWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay
// ()

void AThylacoleo_Character_BP_C::EnableClimbingAnimsAfterAttachDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnableClimbingAnimsAfterAttachDelay");

	AThylacoleo_Character_BP_C_EnableClimbingAnimsAfterAttachDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall
// ()

void AThylacoleo_Character_BP_C::SyncGravityForPounceFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.SyncGravityForPounceFall");

	AThylacoleo_Character_BP_C_SyncGravityForPounceFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays
// ()

void AThylacoleo_Character_BP_C::EnsureLatchedAnimPlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.EnsureLatchedAnimPlays");

	AThylacoleo_Character_BP_C_EnsureLatchedAnimPlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter
// ()

void AThylacoleo_Character_BP_C::CheckUntil_MaulingValidCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckUntil_MaulingValidCharacter");

	AThylacoleo_Character_BP_C_CheckUntil_MaulingValidCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly
// ()

void AThylacoleo_Character_BP_C::PreventLandingAnimBriefly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.PreventLandingAnimBriefly");

	AThylacoleo_Character_BP_C_PreventLandingAnimBriefly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay
// ()

void AThylacoleo_Character_BP_C::CheckOnJumpStateAfterJumpDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.CheckOnJumpStateAfterJumpDelay");

	AThylacoleo_Character_BP_C_CheckOnJumpStateAfterJumpDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed
// ()

void AThylacoleo_Character_BP_C::BP_OnJumpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpPressed");

	AThylacoleo_Character_BP_C_BP_OnJumpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased
// ()

void AThylacoleo_Character_BP_C::BP_OnJumpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.BP_OnJumpReleased");

	AThylacoleo_Character_BP_C_BP_OnJumpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick
// ()

void AThylacoleo_Character_BP_C::InitThylaco_NextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_NextTick");

	AThylacoleo_Character_BP_C_InitThylaco_NextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now
// ()

void AThylacoleo_Character_BP_C::InitThylaco_Now()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.InitThylaco_Now");

	AThylacoleo_Character_BP_C_InitThylaco_Now_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThylacoleo_Character_BP_C::ExecuteUbergraph_Thylacoleo_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thylacoleo_Character_BP.Thylacoleo_Character_BP_C.ExecuteUbergraph_Thylacoleo_Character_BP");

	AThylacoleo_Character_BP_C_ExecuteUbergraph_Thylacoleo_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
