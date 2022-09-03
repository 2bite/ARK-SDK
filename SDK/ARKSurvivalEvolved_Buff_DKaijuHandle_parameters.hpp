#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKaijuHandle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPOverrideCameraViewTarget
struct ABuff_DKaijuHandle_C_BPOverrideCameraViewTarget_Params
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

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BuffTickServer
struct ABuff_DKaijuHandle_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPCheckPreventInput
struct ABuff_DKaijuHandle_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPPreventFirstPerson
struct ABuff_DKaijuHandle_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.PlayHandleAnim
struct ABuff_DKaijuHandle_C_PlayHandleAnim_Params
{
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.UserConstructionScript
struct ABuff_DKaijuHandle_C_UserConstructionScript_Params
{
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ReceiveBeginPlay
struct ABuff_DKaijuHandle_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.BPDeactivated
struct ABuff_DKaijuHandle_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.Multi_UpdateRotation
struct ABuff_DKaijuHandle_C_Multi_UpdateRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DKaijuHandle.Buff_DKaijuHandle_C.ExecuteUbergraph_Buff_DKaijuHandle
struct ABuff_DKaijuHandle_C_ExecuteUbergraph_Buff_DKaijuHandle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
