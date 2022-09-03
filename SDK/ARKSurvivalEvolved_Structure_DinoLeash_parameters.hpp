#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_DinoLeash_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPServerHandleNetExecCommand
struct AStructure_DinoLeash_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.CheckTeamAndSetVisualVisibility
struct AStructure_DinoLeash_C_CheckTeamAndSetVisualVisibility_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_ShowArea
struct AStructure_DinoLeash_C_OnRep_ShowArea_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad
struct AStructure_DinoLeash_C_UpdateTetherAfterLoad_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame
struct AStructure_DinoLeash_C_BPPostLoadedFromSaveGame_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage
struct AStructure_DinoLeash_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility
struct AStructure_DinoLeash_C_UpdateVisibility_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay
struct AStructure_DinoLeash_C_ReceiveBeginPlay_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis
struct AStructure_DinoLeash_C_BPUnstasis_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active
struct AStructure_DinoLeash_C_Get_Is_Active_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated
struct AStructure_DinoLeash_C_BPContainerDeactivated_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated
struct AStructure_DinoLeash_C_BPContainerActivated_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD
struct AStructure_DinoLeash_C_BlueprintDrawPreviewHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius
struct AStructure_DinoLeash_C_GetMaximumAllowedRadius_Params
{
	float                                              MaxRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSetting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius
struct AStructure_DinoLeash_C_TetherDinosInRadius_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius
struct AStructure_DinoLeash_C_SetEffectRadius_Params
{
	float                                              EffectRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius
struct AStructure_DinoLeash_C_OnRep_EffectRadius_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse
struct AStructure_DinoLeash_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild
struct AStructure_DinoLeash_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure
struct AStructure_DinoLeash_C_BPPlacedStructure_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.Activate
struct AStructure_DinoLeash_C_Activate_Params
{
	bool                                               Activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated
struct AStructure_DinoLeash_C_OnRep_Activated_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse
struct AStructure_DinoLeash_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries
struct AStructure_DinoLeash_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript
struct AStructure_DinoLeash_C_UserConstructionScript_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino
struct AStructure_DinoLeash_C_AddTetherToDino_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event
struct AStructure_DinoLeash_C_MovementTetherEvent__DelegateSignature_Event_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TetherObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino
struct AStructure_DinoLeash_C_RemoveTetherFromDino_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
struct AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature
struct AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.ServerRequest_ToggleShowarea
struct AStructure_DinoLeash_C_ServerRequest_ToggleShowarea_Params
{
};

// Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash
struct AStructure_DinoLeash_C_ExecuteUbergraph_Structure_DinoLeash_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
