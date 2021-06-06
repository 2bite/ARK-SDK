#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Balloon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_Balloon.StorageBox_Balloon_C.BlueprintDrawHUD
struct AStorageBox_Balloon_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostInitializeComponents
struct AStorageBox_Balloon_C_BPPostInitializeComponents_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostLoadedFromSaveGame
struct AStorageBox_Balloon_C_BPPostLoadedFromSaveGame_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.GetBasedWeight
struct AStorageBox_Balloon_C_GetBasedWeight_Params
{
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.HasClearance
struct AStorageBox_Balloon_C_HasClearance_Params
{
	bool                                               Clearance;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.Set Optimal Cruising Altitude
struct AStorageBox_Balloon_C_Set_Optimal_Cruising_Altitude_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ChangeBalloonSize
struct AStorageBox_Balloon_C_ChangeBalloonSize_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPOverrideCantBuildReasonString
struct AStorageBox_Balloon_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPIsAllowedToBuildEx
struct AStorageBox_Balloon_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPreventPlacingOnFloorStructure
struct AStorageBox_Balloon_C_BPPreventPlacingOnFloorStructure_Params
{
	struct FPlacementData                              theOutPlacementData;                                      // (Parm, OutParm, ReferenceParm)
	class APrimalStructure**                           FloorStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.CheckOptimalZDistance
struct AStorageBox_Balloon_C_CheckOptimalZDistance_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.GetInventoryWeight
struct AStorageBox_Balloon_C_GetInventoryWeight_Params
{
	float                                              InvWeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.SetBalloonSpeed
struct AStorageBox_Balloon_C_SetBalloonSpeed_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.CalcLandingVector
struct AStorageBox_Balloon_C_CalcLandingVector_Params
{
	int                                                coord1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                coord2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.OnRep_LocationString
struct AStorageBox_Balloon_C_OnRep_LocationString_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPClientDoMultiUse
struct AStorageBox_Balloon_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPAdjustDamage
struct AStorageBox_Balloon_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceivePointDamage
struct AStorageBox_Balloon_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPTryMultiUse
struct AStorageBox_Balloon_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BPGetMultiUseEntries
struct AStorageBox_Balloon_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.UserConstructionScript
struct AStorageBox_Balloon_C_UserConstructionScript_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon
struct AStorageBox_Balloon_C_DeployItemBalloon_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BalloonLiftoff
struct AStorageBox_Balloon_C_BalloonLiftoff_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.DetachBalloon
struct AStorageBox_Balloon_C_DetachBalloon_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.SetFlightTravel
struct AStorageBox_Balloon_C_SetFlightTravel_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.GetNextTravelPoint
struct AStorageBox_Balloon_C_GetNextTravelPoint_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.On_SetLocation
struct AStorageBox_Balloon_C_On_SetLocation_Params
{
	bool                                               bIsSet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon_Debug
struct AStorageBox_Balloon_C_DeployItemBalloon_Debug_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ROC_OnLand
struct AStorageBox_Balloon_C_ROC_OnLand_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ClearFlight
struct AStorageBox_Balloon_C_ClearFlight_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.RandomizeSway
struct AStorageBox_Balloon_C_RandomizeSway_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.DrawOnClient
struct AStorageBox_Balloon_C_DrawOnClient_Params
{
	struct FVector                                     VectorToDraw;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsServer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.DraweShit
struct AStorageBox_Balloon_C_DraweShit_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveTick
struct AStorageBox_Balloon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveBeginPlay
struct AStorageBox_Balloon_C_ReceiveBeginPlay_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.StopDeflation
struct AStorageBox_Balloon_C_StopDeflation_Params
{
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature
struct AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature
struct AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function StorageBox_Balloon.StorageBox_Balloon_C.ExecuteUbergraph_StorageBox_Balloon
struct AStorageBox_Balloon_C_ExecuteUbergraph_StorageBox_Balloon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
