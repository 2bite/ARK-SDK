#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalStructure_TekBridge_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Assign Platform Materials
struct APrimalStructure_TekBridge_C_Assign_Platform_Materials_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPRefreshedStructureColors
struct APrimalStructure_TekBridge_C_BPRefreshedStructureColors_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.SetupSnaps
struct APrimalStructure_TekBridge_C_SetupSnaps_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlayDying
struct APrimalStructure_TekBridge_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideTargetLocation
struct APrimalStructure_TekBridge_C_BPOverrideTargetLocation_Params
{
	struct FVector                                     attackPos;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.CalculatePlacementRotation
struct APrimalStructure_TekBridge_C_CalculatePlacementRotation_Params
{
	class AController*                                 PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlacementData                              PlacementData;                                            // (Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverridePlacementRotation
struct APrimalStructure_TekBridge_C_BPOverridePlacementRotation_Params
{
	struct FVector*                                    ViewPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   ViewRot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPIsAllowedToBuildEx
struct APrimalStructure_TekBridge_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestForEnemyStructures
struct APrimalStructure_TekBridge_C_TestForEnemyStructures_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Placer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooClose;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPreventUsingAsFloorForStructure
struct APrimalStructure_TekBridge_C_BPPreventUsingAsFloorForStructure_Params
{
	struct FPlacementData                              theOutPlacementData;                                      // (Parm, OutParm, ReferenceParm)
	class APrimalStructure**                           StructureToPlaceOnMe;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPConsumeUsePinCode
struct APrimalStructure_TekBridge_C_BPConsumeUsePinCode_Params
{
	class AActor**                                     FromKeypadActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               appledPinCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsActivating;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPCanBeActivated
struct APrimalStructure_TekBridge_C_BPCanBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerDeactivated
struct APrimalStructure_TekBridge_C_BPContainerDeactivated_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPContainerActivated
struct APrimalStructure_TekBridge_C_BPContainerActivated_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.DeactivationComplete
struct APrimalStructure_TekBridge_C_DeactivationComplete_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientMaterialUpdate
struct APrimalStructure_TekBridge_C_ClientMaterialUpdate_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientCompleteActivation
struct APrimalStructure_TekBridge_C_ClientCompleteActivation_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ReceiveBeginPlay
struct APrimalStructure_TekBridge_C_ReceiveBeginPlay_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UpdateVisibility
struct APrimalStructure_TekBridge_C_UpdateVisibility_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideUILocation
struct APrimalStructure_TekBridge_C_BPOverrideUILocation_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPOverrideSnappedFromTransform
struct APrimalStructure_TekBridge_C_BPOverrideSnappedFromTransform_Params
{
	class APrimalStructure**                           ParentStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ParentSnapFromIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ParentSnapFromName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    UnsnappedPlacementPos;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UnsnappedPlacementRot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SnappedPlacementPos;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   SnappedPlacementRot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SnapToIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SnapToName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bForceInvalidateSnap;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushBlockers
struct APrimalStructure_TekBridge_C_PushBlockers_Params
{
	class APrimalCharacter*                            BlockingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activating
struct APrimalStructure_TekBridge_C_OnRep_Activating_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TryActivate
struct APrimalStructure_TekBridge_C_TryActivate_Params
{
	bool                                               ActivateBridge;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.Activate
struct APrimalStructure_TekBridge_C_Activate_Params
{
	bool                                               ActivateBridge;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPGetMultiUseEntries
struct APrimalStructure_TekBridge_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPTryMultiUse
struct APrimalStructure_TekBridge_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.IsBlocked
struct APrimalStructure_TekBridge_C_IsBlocked_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckLanding;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_Activated
struct APrimalStructure_TekBridge_C_OnRep_Activated_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.OnRep_LandingPosition
struct APrimalStructure_TekBridge_C_OnRep_LandingPosition_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PreviewLanding
struct APrimalStructure_TekBridge_C_PreviewLanding_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.TestExtension
struct APrimalStructure_TekBridge_C_TestExtension_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            SnapTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChoosingRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Good;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Placement;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPPlacedStructure
struct APrimalStructure_TekBridge_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.BPBeginPreview
struct APrimalStructure_TekBridge_C_BPBeginPreview_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExtendBridge
struct APrimalStructure_TekBridge_C_ExtendBridge_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.UserConstructionScript
struct APrimalStructure_TekBridge_C_UserConstructionScript_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationTick
struct APrimalStructure_TekBridge_C_ActivationTick_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.PushImpact
struct APrimalStructure_TekBridge_C_PushImpact_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ActivationFailed
struct APrimalStructure_TekBridge_C_ActivationFailed_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ClientIsPlaced
struct APrimalStructure_TekBridge_C_ClientIsPlaced_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.MaterialUpdate
struct APrimalStructure_TekBridge_C_MaterialUpdate_Params
{
};

// Function PrimalStructure_TekBridge.PrimalStructure_TekBridge_C.ExecuteUbergraph_PrimalStructure_TekBridge
struct APrimalStructure_TekBridge_C_ExecuteUbergraph_PrimalStructure_TekBridge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
