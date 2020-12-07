#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_Shield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization
struct ABuff_MekBackpack_Shield_C_OnSyncColorization_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound
struct ABuff_MekBackpack_Shield_C_PlayShieldSound_Params
{
	int                                                SoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData
struct ABuff_MekBackpack_Shield_C_GetBackpackSaveData_Params
{
	struct FMekBackpackData                            Data;                                                     // (Parm, OutParm)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData
struct ABuff_MekBackpack_Shield_C_RestoreBackpackSaveData_Params
{
	struct FMekBackpackData*                           SaveData;                                                 // (Parm)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams
struct ABuff_MekBackpack_Shield_C_SetShieldShellMaterialParams_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveMin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IOR;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay
struct ABuff_MekBackpack_Shield_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient
struct ABuff_MekBackpack_Shield_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated
struct ABuff_MekBackpack_Shield_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus
struct ABuff_MekBackpack_Shield_C_GetShieldStatus_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff
struct ABuff_MekBackpack_Shield_C_EnsureCharacterHasShieldBuff_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack
struct ABuff_MekBackpack_Shield_C_CanActivateBackpack_Params
{
	bool                                               CanActivate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FailureMessage;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover
struct ABuff_MekBackpack_Shield_C_AllowMekHover_Params
{
	bool                                               CanHover;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer
struct ABuff_MekBackpack_Shield_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive
struct ABuff_MekBackpack_Shield_C_IsBackpackActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated
struct ABuff_MekBackpack_Shield_C_OnBackpackActivated_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated
struct ABuff_MekBackpack_Shield_C_OnBackpackDeactivated_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript
struct ABuff_MekBackpack_Shield_C_UserConstructionScript_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc
struct ABuff_MekBackpack_Shield_C_ShieldDropTimeline__FinishedFunc_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc
struct ABuff_MekBackpack_Shield_C_ShieldDropTimeline__UpdateFunc_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc
struct ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__FinishedFunc_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc
struct ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__UpdateFunc_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield
struct ABuff_MekBackpack_Shield_C_MultiDropShield_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature
struct ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature
struct ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach
struct ABuff_MekBackpack_Shield_C_OnShieldAttach_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach
struct ABuff_MekBackpack_Shield_C_MultiOnShieldDetach_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield
struct ABuff_MekBackpack_Shield_C_MultiRetractShield_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy
struct ABuff_MekBackpack_Shield_C_MultiAutoDeploy_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization
struct ABuff_MekBackpack_Shield_C_SyncColorization_Params
{
};

// Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield
struct ABuff_MekBackpack_Shield_C_ExecuteUbergraph_Buff_MekBackpack_Shield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
