#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTekSecurityConsole_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleData
struct AStructureTekSecurityConsole_C_GetConsoleData_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               CanAddCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanAddCamera
struct AStructureTekSecurityConsole_C_CanAddCamera_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetConsoleID
struct AStructureTekSecurityConsole_C_GetConsoleID_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraData
struct AStructureTekSecurityConsole_C_GetCameraData_Params
{
	TArray<class APrimalStructure*>                    Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraLocation
struct AStructureTekSecurityConsole_C_GetCameraLocation_Params
{
	struct FVector                                     CameraViewPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.GetCameraName
struct AStructureTekSecurityConsole_C_GetCameraName_Params
{
	struct FRemoteCameraData                           RemoteCameraData;                                         // (Parm, OutParm, ReferenceParm)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnContainerRenamed
struct AStructureTekSecurityConsole_C_OnContainerRenamed_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerActivated
struct AStructureTekSecurityConsole_C_BPContainerActivated_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.CanCameraBeAdded
struct AStructureTekSecurityConsole_C_CanCameraBeAdded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyCameraList
struct AStructureTekSecurityConsole_C_VerifyCameraList_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPlacedStructure
struct AStructureTekSecurityConsole_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.OnStructurePlacementRefreshed
struct AStructureTekSecurityConsole_C_OnStructurePlacementRefreshed_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.VerifyActiveCamera
struct AStructureTekSecurityConsole_C_VerifyActiveCamera_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveDestroyed
struct AStructureTekSecurityConsole_C_ReceiveDestroyed_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPUnstasis
struct AStructureTekSecurityConsole_C_BPUnstasis_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveLinkedCamera
struct AStructureTekSecurityConsole_C_RemoveLinkedCamera_Params
{
	class APrimalStructure*                            Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ReceiveBeginPlay
struct AStructureTekSecurityConsole_C_ReceiveBeginPlay_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddCamera
struct AStructureTekSecurityConsole_C_AddCamera_Params
{
	class APrimalStructure*                            NewCamera;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPPreventStasis
struct AStructureTekSecurityConsole_C_BPPreventStasis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPContainerDeactivated
struct AStructureTekSecurityConsole_C_BPContainerDeactivated_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPClientDoMultiUse
struct AStructureTekSecurityConsole_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPGetMultiUseEntries
struct AStructureTekSecurityConsole_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.BPTryMultiUse
struct AStructureTekSecurityConsole_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UserConstructionScript
struct AStructureTekSecurityConsole_C_UserConstructionScript_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.SetCurrentCamera
struct AStructureTekSecurityConsole_C_SetCurrentCamera_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateCameraRotation
struct AStructureTekSecurityConsole_C_UpdateCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.UpdateConsoleName
struct AStructureTekSecurityConsole_C_UpdateConsoleName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ActivateCamera
struct AStructureTekSecurityConsole_C_ActivateCamera_Params
{
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.AddNewCamera
struct AStructureTekSecurityConsole_C_AddNewCamera_Params
{
	class APrimalStructure*                            NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.RemoveCamera
struct AStructureTekSecurityConsole_C_RemoveCamera_Params
{
	class APrimalStructure*                            CameraToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientAddCamera
struct AStructureTekSecurityConsole_C_ClientAddCamera_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ClientRemoveCamera
struct AStructureTekSecurityConsole_C_ClientRemoveCamera_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StructureTekSecurityConsole.StructureTekSecurityConsole_C.ExecuteUbergraph_StructureTekSecurityConsole
struct AStructureTekSecurityConsole_C_ExecuteUbergraph_StructureTekSecurityConsole_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
