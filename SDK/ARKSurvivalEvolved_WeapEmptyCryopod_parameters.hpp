#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapEmptyCryopod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass
struct AWeapEmptyCryopod_C_GetContainedDinoClass_Params
{
	struct FCustomItemData                             CustomItemData;                                           // (Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnedClass;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats
struct AWeapEmptyCryopod_C_Get_Character_StatsAsFloats_Params
{
	class APrimalDinoCharacter*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Stats;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess
struct AWeapEmptyCryopod_C_ReportSuccess_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData
struct AWeapEmptyCryopod_C_GetSaddleData_Params
{
	TArray<unsigned char>                              Bytes;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay
struct AWeapEmptyCryopod_C_ReceiveBeginPlay_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX
struct AWeapEmptyCryopod_C_UpdateContainsFX_Params
{
	bool                                               ForceOff;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon
struct AWeapEmptyCryopod_C_BPFiredWeapon_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture
struct AWeapEmptyCryopod_C_CanCapture_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Capture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon
struct AWeapEmptyCryopod_C_BPTryFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify
struct AWeapEmptyCryopod_C_BPStartEquippedNotify_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript
struct AWeapEmptyCryopod_C_UserConstructionScript_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture
struct AWeapEmptyCryopod_C_Capture_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest
struct AWeapEmptyCryopod_C_Ingest_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion
struct AWeapEmptyCryopod_C_StartIngestion_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation
struct AWeapEmptyCryopod_C_ClientPlayAnimation_Params
{
	bool                                               IncludeInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TPV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FPV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload
struct AWeapEmptyCryopod_C_Reload_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop
struct AWeapEmptyCryopod_C_StartCaptureLoop_Params
{
	class APrimalDinoCharacter*                        CapturingDino;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop
struct AWeapEmptyCryopod_C_EndCaptureLoop_Params
{
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess
struct AWeapEmptyCryopod_C_CaptureSuccess_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess
struct AWeapEmptyCryopod_C_DeploySuccess_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure
struct AWeapEmptyCryopod_C_DeployFailure_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod
struct AWeapEmptyCryopod_C_ExecuteUbergraph_WeapEmptyCryopod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
