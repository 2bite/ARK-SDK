#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Machinegun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.clear rider
struct ABuff_TekStrider_Machinegun_C_clear_rider_Params
{
	class AShooterCharacter**                          prev_rider;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Disable Awaiting Player Loc
struct ABuff_TekStrider_Machinegun_C_Disable_Awaiting_Player_Loc_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPServerHandleNetExecCommand
struct ABuff_TekStrider_Machinegun_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.fire shots
struct ABuff_TekStrider_Machinegun_C_fire_shots_Params
{
	bool                                               hit_something;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      hit_target;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  hit_info;                                                 // (Parm)
	struct FVector                                     hit_spot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     from_spot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickServer
struct ABuff_TekStrider_Machinegun_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPGetHUDElements
struct ABuff_TekStrider_Machinegun_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.target is within angle
struct ABuff_TekStrider_Machinegun_C_target_is_within_angle_Params
{
	class APrimalDinoCharacter*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Strider Firing Duration
struct ABuff_TekStrider_Machinegun_C_Strider_Firing_Duration_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Shot Cooldown
struct ABuff_TekStrider_Machinegun_C_Wild_Shot_Cooldown_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Dino Deactivate
struct ABuff_TekStrider_Machinegun_C_Wild_Dino_Deactivate_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Can Fire
struct ABuff_TekStrider_Machinegun_C_Can_Fire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.spawn shot vfx
struct ABuff_TekStrider_Machinegun_C_spawn_shot_vfx_Params
{
	bool                                               hit_something;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hit_loc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.trace for blocking stuff between here and target
struct ABuff_TekStrider_Machinegun_C_trace_for_blocking_stuff_between_here_and_target_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.TriggerReleased
struct ABuff_TekStrider_Machinegun_C_TriggerReleased_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Trigger
struct ABuff_TekStrider_Machinegun_C_Trigger_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Get Beam Origin and End
struct ABuff_TekStrider_Machinegun_C_Get_Beam_Origin_and_End_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.GetBeamImpact
struct ABuff_TekStrider_Machinegun_C_GetBeamImpact_Params
{
	struct FVector                                     BeamStart;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamImpact;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HitSomething_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  hit_info;                                                 // (Parm, OutParm)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.IsAIControlled?
struct ABuff_TekStrider_Machinegun_C_IsAIControlled__Params
{
	bool                                               IsAI_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Update Beam Impact Location
struct ABuff_TekStrider_Machinegun_C_Update_Beam_Impact_Location_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPSetupForInstigator
struct ABuff_TekStrider_Machinegun_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickClient
struct ABuff_TekStrider_Machinegun_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Visual Beam Origin
struct ABuff_TekStrider_Machinegun_C_Visual_Beam_Origin_Params
{
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.UserConstructionScript
struct ABuff_TekStrider_Machinegun_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_ActivateBeam
struct ABuff_TekStrider_Machinegun_C_Multicast_ActivateBeam_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_DeactivateBeam
struct ABuff_TekStrider_Machinegun_C_Multicast_DeactivateBeam_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ValidatePlayerBeamOnServer
struct ABuff_TekStrider_Machinegun_C_ValidatePlayerBeamOnServer_Params
{
	struct FVector                                     ImpactPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation
struct ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_Params
{
	struct FVector                                     BeamImpactLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hit_something;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation_SecondGun
struct ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_SecondGun_Params
{
	struct FVector                                     BeamImpactLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hit_something;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Request Player Shot Loc
struct ABuff_TekStrider_Machinegun_C_Request_Player_Shot_Loc_Params
{
};

// Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ExecuteUbergraph_Buff_TekStrider_Machinegun
struct ABuff_TekStrider_Machinegun_C_ExecuteUbergraph_Buff_TekStrider_Machinegun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
