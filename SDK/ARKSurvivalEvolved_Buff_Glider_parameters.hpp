#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateHighestZ
struct ABuff_Glider_C_ServerTick_UpdateHighestZ_Params
{
};

// Function Buff_Glider.Buff_Glider_C.ServerTick_ReduceDurability
struct ABuff_Glider_C_ServerTick_ReduceDurability_Params
{
};

// Function Buff_Glider.Buff_Glider_C.Tick_UpdatePlayerMesh
struct ABuff_Glider_C_Tick_UpdatePlayerMesh_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.UpdateIsPullingUp
struct ABuff_Glider_C_UpdateIsPullingUp_Params
{
};

// Function Buff_Glider.Buff_Glider_C.GetCurrentGliderRotationRate
struct ABuff_Glider_C_GetCurrentGliderRotationRate_Params
{
	struct FRotator                                    Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.UpdateSavedCameraView
struct ABuff_Glider_C_UpdateSavedCameraView_Params
{
};

// Function Buff_Glider.Buff_Glider_C.BPInitializedCharacterAnimScriptInstance
struct ABuff_Glider_C_BPInitializedCharacterAnimScriptInstance_Params
{
};

// Function Buff_Glider.Buff_Glider_C.BPCharacterDetach
struct ABuff_Glider_C_BPCharacterDetach_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateGliderSFX
struct ABuff_Glider_C_UpdateGliderSFX_Params
{
};

// Function Buff_Glider.Buff_Glider_C.ReceiveDestroyed
struct ABuff_Glider_C_ReceiveDestroyed_Params
{
};

// Function Buff_Glider.Buff_Glider_C.BPOverrideWeaponBob
struct ABuff_Glider_C_BPOverrideWeaponBob_Params
{
	struct FVector                                     InWeaponBob;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.CheckForGliderStuckOnWall
struct ABuff_Glider_C_CheckForGliderStuckOnWall_Params
{
	bool                                               CanKeepGliding;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio
struct ABuff_Glider_C_GetGlideSpeedRatio_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.BP_ModifyCharacterFOV
struct ABuff_Glider_C_BP_ModifyCharacterFOV_Params
{
	float*                                             inFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.ServerTick_GlideFalling
struct ABuff_Glider_C_ServerTick_GlideFalling_Params
{
};

// Function Buff_Glider.Buff_Glider_C.GetGliderMesh
struct ABuff_Glider_C_GetGliderMesh_Params
{
	bool                                               foundMesh;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      meshRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.AttachWingVFX
struct ABuff_Glider_C_AttachWingVFX_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateVelocityForVFX
struct ABuff_Glider_C_UpdateVelocityForVFX_Params
{
};

// Function Buff_Glider.Buff_Glider_C.StopUsingGlider
struct ABuff_Glider_C_StopUsingGlider_Params
{
};

// Function Buff_Glider.Buff_Glider_C.GetAngleDeltaBetweenVectors
struct ABuff_Glider_C_GetAngleDeltaBetweenVectors_Params
{
	struct FVector                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AroundAxis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              angleFromA_ToB;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.AllowPostProcessEffect
struct ABuff_Glider_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.GetBuffPostprocessIntensity
struct ABuff_Glider_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.BuffAdjustDamage
struct ABuff_Glider_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.AreRotatorsNearlyEqual
struct ABuff_Glider_C_AreRotatorsNearlyEqual_Params
{
	struct FRotator                                    rotA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    rotB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Error;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlideVelocity
struct ABuff_Glider_C_ServerTick_UpdateGlideVelocity_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_NonDedicated
struct ABuff_Glider_C_UpdateGliderByState_NonDedicated_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_ServerAndClient
struct ABuff_Glider_C_UpdateGliderByState_ServerAndClient_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_Server
struct ABuff_Glider_C_UpdateGliderByState_Server_Params
{
};

// Function Buff_Glider.Buff_Glider_C.OnRep_GliderState_Current
struct ABuff_Glider_C_OnRep_GliderState_Current_Params
{
};

// Function Buff_Glider.Buff_Glider_C.IsGliderActive
struct ABuff_Glider_C_IsGliderActive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio_Pure
struct ABuff_Glider_C_GetGlideSpeedRatio_Pure_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.GetDefaultOwningPlayer
struct ABuff_Glider_C_GetDefaultOwningPlayer_Params
{
	class AShooterCharacter*                           Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.IsPlayerGrounded
struct ABuff_Glider_C_IsPlayerGrounded_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.Can Use Glider
struct ABuff_Glider_C_Can_Use_Glider_Params
{
	bool                                               isToStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.BPOverrideCharacterNewFallVelocity
struct ABuff_Glider_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.Clamp LocationZ
struct ABuff_Glider_C_Clamp_LocationZ_Params
{
};

// Function Buff_Glider.Buff_Glider_C.UpdateGliderFX
struct ABuff_Glider_C_UpdateGliderFX_Params
{
};

// Function Buff_Glider.Buff_Glider_C.BPDeactivated
struct ABuff_Glider_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.Reset Owning PlayerVariables
struct ABuff_Glider_C_Reset_Owning_PlayerVariables_Params
{
};

// Function Buff_Glider.Buff_Glider_C.ClampPlayerVelocity
struct ABuff_Glider_C_ClampPlayerVelocity_Params
{
	float                                              MaxVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.NetSetCurrentGliderState
struct ABuff_Glider_C_NetSetCurrentGliderState_Params
{
	TEnumAsByte<E_GliderStates>                        NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.BuffTickServer
struct ABuff_Glider_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlidingRotation
struct ABuff_Glider_C_ServerTick_UpdateGlidingRotation_Params
{
};

// Function Buff_Glider.Buff_Glider_C.BuffTickClient
struct ABuff_Glider_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.ClientSetGlidingState
struct ABuff_Glider_C_ClientSetGlidingState_Params
{
	TEnumAsByte<E_GliderStates>                        NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.UserConstructionScript
struct ABuff_Glider_C_UserConstructionScript_Params
{
};

// Function Buff_Glider.Buff_Glider_C.InpActEvt_Jump_K2Node_InputActionEvent_96
struct ABuff_Glider_C_InpActEvt_Jump_K2Node_InputActionEvent_96_Params
{
};

// Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_95
struct ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_95_Params
{
};

// Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_94
struct ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_94_Params
{
};

// Function Buff_Glider.Buff_Glider_C.InpActEvt_RunToggle_K2Node_InputActionEvent_93
struct ABuff_Glider_C_InpActEvt_RunToggle_K2Node_InputActionEvent_93_Params
{
};

// Function Buff_Glider.Buff_Glider_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_48
struct ABuff_Glider_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_48_Params
{
};

// Function Buff_Glider.Buff_Glider_C.Server_RequestSetThrusterState
struct ABuff_Glider_C_Server_RequestSetThrusterState_Params
{
	TEnumAsByte<E_GliderStates>                        NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.ReceiveBeginPlay
struct ABuff_Glider_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Glider.Buff_Glider_C.Multi_GlideStart
struct ABuff_Glider_C_Multi_GlideStart_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newGlideMult;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.Client_SyncGlidingVars
struct ABuff_Glider_C_Client_SyncGlidingVars_Params
{
	struct FVector                                     NewVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Glider.Buff_Glider_C.OnPlayerCapsuleHit
struct ABuff_Glider_C_OnPlayerCapsuleHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Buff_Glider.Buff_Glider_C.InitGlider
struct ABuff_Glider_C_InitGlider_Params
{
};

// Function Buff_Glider.Buff_Glider_C.ExecuteUbergraph_Buff_Glider
struct ABuff_Glider_C_ExecuteUbergraph_Buff_Glider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
