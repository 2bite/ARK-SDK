#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Cruise_Missile_MaintainCameraClient_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPHandleOnStartFire
struct ABuff_Cruise_Missile_MaintainCameraClient_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPPreventFirstPerson
struct ABuff_Cruise_Missile_MaintainCameraClient_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.BPOverrideCameraViewTarget
struct ABuff_Cruise_Missile_MaintainCameraClient_C_BPOverrideCameraViewTarget_Params
{
	struct FName*                                      CurrentCameraMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DesiredCameraLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DesiredCameraRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DesiredFOV;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraLocation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraRotation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCameraFOV;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.UserConstructionScript
struct ABuff_Cruise_Missile_MaintainCameraClient_C_UserConstructionScript_Params
{
};

// Function Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C.ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient
struct ABuff_Cruise_Missile_MaintainCameraClient_C_ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
