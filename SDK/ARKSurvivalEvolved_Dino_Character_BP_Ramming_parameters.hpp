#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Ramming_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString
struct ADino_Character_BP_Ramming_C_ToString_Params
{
	class FString                                      CallerName;                                               // (Parm, ZeroConstructor)
	class FString                                      DebugText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider
struct ADino_Character_BP_Ramming_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled
struct ADino_Character_BP_Ramming_C_GetStructureDamageScaled_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VelocityAlpha;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax
struct ADino_Character_BP_Ramming_C_GetRammingSpeedMax_Params
{
	float                                              MaxSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam
struct ADino_Character_BP_Ramming_C_CanTickStartedRam_Params
{
	bool                                               Tick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue
struct ADino_Character_BP_Ramming_C_DrainStatusValue_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasRemainingValue;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact
struct ADino_Character_BP_Ramming_C_DoRamImpact_Params
{
	bool                                               HitSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack
struct ADino_Character_BP_Ramming_C_CanStartRamAttack_Params
{
	bool                                               AllowedToRam;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration
struct ADino_Character_BP_Ramming_C_Calculate_Ram_Duration_Params
{
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick
struct ADino_Character_BP_Ramming_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended
struct ADino_Character_BP_Ramming_C_Handle_Ram_Ended_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started
struct ADino_Character_BP_Ramming_C_Handle_Ram_Started_Params
{
	float                                              RamBuildupTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RamDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState
struct ADino_Character_BP_Ramming_C_GetRamState_Params
{
	bool                                               InRamBuildup;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RamBuildupTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               InRamming;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup
struct ADino_Character_BP_Ramming_C_Stop_Ram_Attack_Buildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup
struct ADino_Character_BP_Ramming_C_Start_Ram_Attack_Buildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript
struct ADino_Character_BP_Ramming_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup
struct ADino_Character_BP_Ramming_C_ServerStopRamBuildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup
struct ADino_Character_BP_Ramming_C_ServerStartRamBuildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted
struct ADino_Character_BP_Ramming_C_OnRamStarted_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded
struct ADino_Character_BP_Ramming_C_OnRamEnded_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded
struct ADino_Character_BP_Ramming_C_ClientOnRamEnded_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly
struct ADino_Character_BP_Ramming_C_OnRamEndedEarly_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded
struct ADino_Character_BP_Ramming_C_Private__RamEnded_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature
struct ADino_Character_BP_Ramming_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event
struct ADino_Character_BP_Ramming_C_OnComponentBeginOverlap_Event_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly
struct ADino_Character_BP_Ramming_C_ServerRequestRamEndEarly_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup
struct ADino_Character_BP_Ramming_C_ServerCancelRamBuildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup
struct ADino_Character_BP_Ramming_C_CancelRamBuildup_Params
{
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam
struct ADino_Character_BP_Ramming_C_MultiStartRam_Params
{
	float                                              BuildUpDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming
struct ADino_Character_BP_Ramming_C_ExecuteUbergraph_Dino_Character_BP_Ramming_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
