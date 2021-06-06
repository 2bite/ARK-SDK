#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_SecurityCamera_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleData
struct AStructure_SecurityCamera_C_GetConsoleData_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               CanAddCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.CanAddCamera
struct AStructure_SecurityCamera_C_CanAddCamera_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleID
struct AStructure_SecurityCamera_C_GetConsoleID_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraData
struct AStructure_SecurityCamera_C_GetCameraData_Params
{
	TArray<class APrimalStructure*>                    Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCameraLocation
struct AStructure_SecurityCamera_C_GetCameraLocation_Params
{
	struct FVector                                     CameraViewPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateEffects
struct AStructure_SecurityCamera_C_UpdateEffects_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideDescriptiveName
struct AStructure_SecurityCamera_C_BPOverrideDescriptiveName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientUpdatePosition
struct AStructure_SecurityCamera_C_ClientUpdatePosition_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BlueprintDrawHUD
struct AStructure_SecurityCamera_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetConsoleFromID
struct AStructure_SecurityCamera_C_GetConsoleFromID_Params
{
	float                                              ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure*                            LinkedConsole;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPIsAllowedToBuild
struct AStructure_SecurityCamera_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetAdditionalComponentForDyePreview
struct AStructure_SecurityCamera_C_GetAdditionalComponentForDyePreview_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.GetCorrectedRotation
struct AStructure_SecurityCamera_C_GetCorrectedRotation_Params
{
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.PlacementTick
struct AStructure_SecurityCamera_C_PlacementTick_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveBeginPlay
struct AStructure_SecurityCamera_C_ReceiveBeginPlay_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPUnstasis
struct AStructure_SecurityCamera_C_BPUnstasis_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraPosition
struct AStructure_SecurityCamera_C_UpdateCameraPosition_Params
{
	bool                                               Animated;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPostInitializeComponents
struct AStructure_SecurityCamera_C_BPPostInitializeComponents_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.InitializeRotation
struct AStructure_SecurityCamera_C_InitializeRotation_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPlacedStructure
struct AStructure_SecurityCamera_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.PerformanceThrottledTick
struct AStructure_SecurityCamera_C_PerformanceThrottledTick_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnRep_CameraActive
struct AStructure_SecurityCamera_C_OnRep_CameraActive_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPHandleStructureEnabled
struct AStructure_SecurityCamera_C_BPHandleStructureEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPPreventStasis
struct AStructure_SecurityCamera_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.OnContainerRenamed
struct AStructure_SecurityCamera_C_OnContainerRenamed_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ReceiveDestroyed
struct AStructure_SecurityCamera_C_ReceiveDestroyed_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOnStructurePickup
struct AStructure_SecurityCamera_C_BPOnStructurePickup_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                NewlyPickedUpItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsQuickPickup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.RetrieveLinkedConsoleFromItem
struct AStructure_SecurityCamera_C_RetrieveLinkedConsoleFromItem_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LinkedConsole;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      CameraName;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               CanAdd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ConsoleName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPGetInfoFromConsumedItemForPlacedStructure
struct AStructure_SecurityCamera_C_BPGetInfoFromConsumedItemForPlacedStructure_Params
{
	class UPrimalItem**                                ItemToConsumed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPOverrideCantBuildReasonString
struct AStructure_SecurityCamera_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.BPCheckItemRequiementsToBuild
struct AStructure_SecurityCamera_C_BPCheckItemRequiementsToBuild_Params
{
	class UPrimalItem**                                ItemToConsumed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UserConstructionScript
struct AStructure_SecurityCamera_C_UserConstructionScript_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.AddNewCamera
struct AStructure_SecurityCamera_C_AddNewCamera_Params
{
	class APrimalStructure*                            NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.RemoveCamera
struct AStructure_SecurityCamera_C_RemoveCamera_Params
{
	class APrimalStructure*                            CameraToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.SetCurrentCamera
struct AStructure_SecurityCamera_C_SetCurrentCamera_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateCameraRotation
struct AStructure_SecurityCamera_C_UpdateCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientSetRotation
struct AStructure_SecurityCamera_C_ClientSetRotation_Params
{
	struct FRotator                                    NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ServerInitializeRotation
struct AStructure_SecurityCamera_C_ServerInitializeRotation_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.VerifyConsoleData
struct AStructure_SecurityCamera_C_VerifyConsoleData_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.UpdateConsoleName
struct AStructure_SecurityCamera_C_UpdateConsoleName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ActivateCamera
struct AStructure_SecurityCamera_C_ActivateCamera_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ClientCameraActivated
struct AStructure_SecurityCamera_C_ClientCameraActivated_Params
{
};

// Function Structure_SecurityCamera.Structure_SecurityCamera_C.ExecuteUbergraph_Structure_SecurityCamera
struct AStructure_SecurityCamera_C_ExecuteUbergraph_Structure_SecurityCamera_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
