#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_DivingFlyer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnDiveCrash
struct ADino_Character_BP_DivingFlyer_C_OnDiveCrash_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HitComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPForceTurretFastTargeting
struct ADino_Character_BP_DivingFlyer_C_BPForceTurretFastTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReturnDivingFlyerToZeroPitchRotation
struct ADino_Character_BP_DivingFlyer_C_ReturnDivingFlyerToZeroPitchRotation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReduceDiverStamina
struct ADino_Character_BP_DivingFlyer_C_ReduceDiverStamina_Params
{
	float                                              cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnStartLandingNotify
struct ADino_Character_BP_DivingFlyer_C_BP_OnStartLandingNotify_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio
struct ADino_Character_BP_DivingFlyer_C_Get_Diving_Velocity_Mult_Ratio_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Max
struct ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Max_Params
{
	float                                              MaxVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio
struct ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Ratio_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum
struct ADino_Character_BP_DivingFlyer_C_Has_Diving_Momentum_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UpdateDivingFX
struct ADino_Character_BP_DivingFlyer_C_UpdateDivingFX_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ResetDivingVars
struct ADino_Character_BP_DivingFlyer_C_ResetDivingVars_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Is Diver Moving Forward
struct ADino_Character_BP_DivingFlyer_C_Is_Diver_Moving_Forward_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetDefaultMaxFlySpeed
struct ADino_Character_BP_DivingFlyer_C_GetDefaultMaxFlySpeed_Params
{
	float                                              MaxFlySpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Required VelocityToStart
struct ADino_Character_BP_DivingFlyer_C_Get_Diving_Required_VelocityToStart_Params
{
	float                                              _float;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasEnoughStaminaToDive
struct ADino_Character_BP_DivingFlyer_C_HasEnoughStaminaToDive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_OnSetRunning
struct ADino_Character_BP_DivingFlyer_C_BP_OnSetRunning_Params
{
	bool*                                              bNewIsRunning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_RotationRate
struct ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BP_GetCustomModifier_MaxSpeed
struct ADino_Character_BP_DivingFlyer_C_BP_GetCustomModifier_MaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifyClearRider
struct ADino_Character_BP_DivingFlyer_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.IsDiving
struct ADino_Character_BP_DivingFlyer_C_IsDiving_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Has Diving Momentum_Pure
struct ADino_Character_BP_DivingFlyer_C_Has_Diving_Momentum_Pure_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPOnMovementModeChangedNotify
struct ADino_Character_BP_DivingFlyer_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity Ratio_Pure
struct ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_Ratio_Pure_Params
{
	float                                              Ratio;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Flyer Dive Velocity MaxPure
struct ADino_Character_BP_DivingFlyer_C_Get_Flyer_Dive_Velocity_MaxPure_Params
{
	float                                              MaxVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.CanFlyerDive
struct ADino_Character_BP_DivingFlyer_C_CanFlyerDive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AllowDiving
struct ADino_Character_BP_DivingFlyer_C_AllowDiving_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Tick
struct ADino_Character_BP_DivingFlyer_C_Diving_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Stop
struct ADino_Character_BP_DivingFlyer_C_Diving_Stop_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Diving_Start
struct ADino_Character_BP_DivingFlyer_C_Diving_Start_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Set Is Diving
struct ADino_Character_BP_DivingFlyer_C_Set_Is_Diving_Params
{
	bool                                               newDiving;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OnRep_bIsDiving
struct ADino_Character_BP_DivingFlyer_C_OnRep_bIsDiving_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Interp Diver Mesh
struct ADino_Character_BP_DivingFlyer_C_Interp_Diver_Mesh_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get Diving Velocity Mult Ratio_Pure
struct ADino_Character_BP_DivingFlyer_C_Get_Diving_Velocity_Mult_Ratio_Pure_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPNotifySetRider
struct ADino_Character_BP_DivingFlyer_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPTimerNonDedicated
struct ADino_Character_BP_DivingFlyer_C_BPTimerNonDedicated_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Get DefaultDivingFlyer
struct ADino_Character_BP_DivingFlyer_C_Get_DefaultDivingFlyer_Params
{
	class ADino_Character_BP_DivingFlyer_C*            Default;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.BPModifyFOV
struct ADino_Character_BP_DivingFlyer_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveHit
struct ADino_Character_BP_DivingFlyer_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.HasLocallyCarriedPlayer
struct ADino_Character_BP_DivingFlyer_C_HasLocallyCarriedPlayer_Params
{
	bool                                               bLocallyCarried;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DebugDiveVals
struct ADino_Character_BP_DivingFlyer_C_DebugDiveVals_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.GetCurrentAcceleration
struct ADino_Character_BP_DivingFlyer_C_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.UserConstructionScript
struct ADino_Character_BP_DivingFlyer_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.AbortDive
struct ADino_Character_BP_DivingFlyer_C_AbortDive_Params
{
	bool                                               bPlayAbortAnim;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.DiveBomb
struct ADino_Character_BP_DivingFlyer_C_DiveBomb_Params
{
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.OwningClientDiveBombCameraShake
struct ADino_Character_BP_DivingFlyer_C_OwningClientDiveBombCameraShake_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Multi_LandFromDive
struct ADino_Character_BP_DivingFlyer_C_Multi_LandFromDive_Params
{
	struct FRotator                                    MeshRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.Server_SetIsDiving
struct ADino_Character_BP_DivingFlyer_C_Server_SetIsDiving_Params
{
	bool                                               newDiving;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ReceiveTick
struct ADino_Character_BP_DivingFlyer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C.ExecuteUbergraph_Dino_Character_BP_DivingFlyer
struct ADino_Character_BP_DivingFlyer_C_ExecuteUbergraph_Dino_Character_BP_DivingFlyer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
