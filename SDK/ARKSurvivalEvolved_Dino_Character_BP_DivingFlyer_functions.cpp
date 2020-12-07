// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_DivingFlyer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash
// ()
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComp                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm)

void ADino_Character_BP_DivingFlyer_C::OnDiveCrash(class AActor* HitActor, class USceneComponent* HitComp, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash");

	ADino_Character_BP_DivingFlyer_C_OnDiveCrash_Params params;
	params.HitActor = HitActor;
	params.HitComp = HitComp;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_DivingFlyer_C::BPForceTurretFastTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting");

	ADino_Character_BP_DivingFlyer_C_BPForceTurretFastTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::ReturnDivingFlyerToZeroPitchRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation");

	ADino_Character_BP_DivingFlyer_C_ReturnDivingFlyerToZeroPitchRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina
// ()
// Parameters:
// float                          cost                           (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::ReduceDiverStamina(float cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina");

	ADino_Character_BP_DivingFlyer_C_ReduceDiverStamina_Params params;
	params.cost = cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify
// ()

void ADino_Character_BP_DivingFlyer_C::BP_OnStartLandingNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify");

	ADino_Character_BP_DivingFlyer_C_BP_OnStartLandingNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Diving_Velocity_Mult_Ratio(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio");

	ADino_Character_BP_DivingFlyer_C_Get_Diving_Velocity_Mult_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max
// ()
// Parameters:
// float                          maxVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Flyer_Dive_Velocity_Max(float* maxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max");

	ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Max_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxVelocity != nullptr)
		*maxVelocity = params.maxVelocity;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Flyer_Dive_Velocity_Ratio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio");

	ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Ratio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Has_Diving_Momentum(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum");

	ADino_Character_BP_DivingFlyer_C_Has_Diving_Momentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX
// ()

void ADino_Character_BP_DivingFlyer_C::UpdateDivingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX");

	ADino_Character_BP_DivingFlyer_C_UpdateDivingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars
// ()

void ADino_Character_BP_DivingFlyer_C::ResetDivingVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars");

	ADino_Character_BP_DivingFlyer_C_ResetDivingVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Is_Diver_Moving_Forward(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward");

	ADino_Character_BP_DivingFlyer_C_Is_Diver_Moving_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed
// ()
// Parameters:
// float                          MaxFlySpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::GetDefaultMaxFlySpeed(float* MaxFlySpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed");

	ADino_Character_BP_DivingFlyer_C_GetDefaultMaxFlySpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxFlySpeed != nullptr)
		*MaxFlySpeed = params.MaxFlySpeed;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart
// ()
// Parameters:
// float                          _float                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Diving_Required_VelocityToStart(float* _float)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart");

	ADino_Character_BP_DivingFlyer_C_Get_Diving_Required_VelocityToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_float != nullptr)
		*_float = params._float;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::HasEnoughStaminaToDive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive");

	ADino_Character_BP_DivingFlyer_C_HasEnoughStaminaToDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning
// ()
// Parameters:
// bool*                          bNewIsRunning                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::BP_OnSetRunning(bool* bNewIsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning");

	ADino_Character_BP_DivingFlyer_C_BP_OnSetRunning_Params params;
	params.bNewIsRunning = bNewIsRunning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_DivingFlyer_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate");

	ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_DivingFlyer_C::BP_GetCustomModifier_MaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed");

	ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_MaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider");

	ADino_Character_BP_DivingFlyer_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::IsDiving(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving");

	ADino_Character_BP_DivingFlyer_C_IsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Has_Diving_Momentum_Pure(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure");

	ADino_Character_BP_DivingFlyer_C_Has_Diving_Momentum_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify");

	ADino_Character_BP_DivingFlyer_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure
// ()
// Parameters:
// float                          Ratio                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Flyer_Dive_Velocity_Ratio_Pure(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure");

	ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Ratio_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ratio != nullptr)
		*Ratio = params.Ratio;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure
// ()
// Parameters:
// float                          maxVelocity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Flyer_Dive_Velocity_MaxPure(float* maxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure");

	ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_MaxPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxVelocity != nullptr)
		*maxVelocity = params.maxVelocity;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::CanFlyerDive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive");

	ADino_Character_BP_DivingFlyer_C_CanFlyerDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::AllowDiving(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving");

	ADino_Character_BP_DivingFlyer_C_AllowDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Diving_Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick");

	ADino_Character_BP_DivingFlyer_C_Diving_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop
// ()

void ADino_Character_BP_DivingFlyer_C::Diving_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop");

	ADino_Character_BP_DivingFlyer_C_Diving_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start
// ()

void ADino_Character_BP_DivingFlyer_C::Diving_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start");

	ADino_Character_BP_DivingFlyer_C_Diving_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving
// ()
// Parameters:
// bool                           newDiving                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceSet                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Set_Is_Diving(bool newDiving, bool ForceSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving");

	ADino_Character_BP_DivingFlyer_C_Set_Is_Diving_Params params;
	params.newDiving = newDiving;
	params.ForceSet = ForceSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving
// ()

void ADino_Character_BP_DivingFlyer_C::OnRep_bIsDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving");

	ADino_Character_BP_DivingFlyer_C_OnRep_bIsDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh
// ()

void ADino_Character_BP_DivingFlyer_C::Interp_Diver_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh");

	ADino_Character_BP_DivingFlyer_C_Interp_Diver_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_Diving_Velocity_Mult_Ratio_Pure(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure");

	ADino_Character_BP_DivingFlyer_C_Get_Diving_Velocity_Mult_Ratio_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider");

	ADino_Character_BP_DivingFlyer_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated
// ()

void ADino_Character_BP_DivingFlyer_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated");

	ADino_Character_BP_DivingFlyer_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer
// ()
// Parameters:
// class ADino_Character_BP_DivingFlyer_C* Default                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Get_DefaultDivingFlyer(class ADino_Character_BP_DivingFlyer_C** Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer");

	ADino_Character_BP_DivingFlyer_C_Get_DefaultDivingFlyer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Default != nullptr)
		*Default = params.Default;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_Character_BP_DivingFlyer_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV");

	ADino_Character_BP_DivingFlyer_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ADino_Character_BP_DivingFlyer_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit");

	ADino_Character_BP_DivingFlyer_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer
// ()
// Parameters:
// bool                           bLocallyCarried                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::HasLocallyCarriedPlayer(bool* bLocallyCarried)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer");

	ADino_Character_BP_DivingFlyer_C_HasLocallyCarriedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocallyCarried != nullptr)
		*bLocallyCarried = params.bLocallyCarried;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals
// ()

void ADino_Character_BP_DivingFlyer_C::DebugDiveVals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals");

	ADino_Character_BP_DivingFlyer_C_DebugDiveVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADino_Character_BP_DivingFlyer_C::GetCurrentAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration");

	ADino_Character_BP_DivingFlyer_C_GetCurrentAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript
// ()

void ADino_Character_BP_DivingFlyer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript");

	ADino_Character_BP_DivingFlyer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive
// ()
// Parameters:
// bool                           bPlayAbortAnim                 (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::AbortDive(bool bPlayAbortAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive");

	ADino_Character_BP_DivingFlyer_C_AbortDive_Params params;
	params.bPlayAbortAnim = bPlayAbortAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb
// ()

void ADino_Character_BP_DivingFlyer_C::DiveBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb");

	ADino_Character_BP_DivingFlyer_C_DiveBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake
// ()
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::OwningClientDiveBombCameraShake(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake");

	ADino_Character_BP_DivingFlyer_C_OwningClientDiveBombCameraShake_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive
// ()
// Parameters:
// struct FRotator                MeshRotation                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Multi_LandFromDive(const struct FRotator& MeshRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive");

	ADino_Character_BP_DivingFlyer_C_Multi_LandFromDive_Params params;
	params.MeshRotation = MeshRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving
// ()
// Parameters:
// bool                           newDiving                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::Server_SetIsDiving(bool newDiving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving");

	ADino_Character_BP_DivingFlyer_C_Server_SetIsDiving_Params params;
	params.newDiving = newDiving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick");

	ADino_Character_BP_DivingFlyer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_DivingFlyer_C::ExecuteUbergraph_Dino_Character_BP_DivingFlyer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer");

	ADino_Character_BP_DivingFlyer_C_ExecuteUbergraph_Dino_Character_BP_DivingFlyer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
