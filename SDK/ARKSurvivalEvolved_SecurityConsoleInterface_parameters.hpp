#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityConsoleInterface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.ActivateCamera
struct USecurityConsoleInterface_C_ActivateCamera_Params
{
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateConsoleName
struct USecurityConsoleInterface_C_UpdateConsoleName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleData
struct USecurityConsoleInterface_C_GetConsoleData_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               CanAddCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.CanAddCamera
struct USecurityConsoleInterface_C_CanAddCamera_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetConsoleID
struct USecurityConsoleInterface_C_GetConsoleID_Params
{
	float                                              ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.UpdateCameraRotation
struct USecurityConsoleInterface_C_UpdateCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraData
struct USecurityConsoleInterface_C_GetCameraData_Params
{
	TArray<class APrimalStructure*>                    Cameras;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.SetCurrentCamera
struct USecurityConsoleInterface_C_SetCurrentCamera_Params
{
	int                                                CameraIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.GetCameraLocation
struct USecurityConsoleInterface_C_GetCameraLocation_Params
{
	struct FVector                                     CameraViewPoint;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.RemoveCamera
struct USecurityConsoleInterface_C_RemoveCamera_Params
{
	class APrimalStructure*                            CameraToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityConsoleInterface.SecurityConsoleInterface_C.AddNewCamera
struct USecurityConsoleInterface_C_AddNewCamera_Params
{
	class APrimalStructure*                            NewStructure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
