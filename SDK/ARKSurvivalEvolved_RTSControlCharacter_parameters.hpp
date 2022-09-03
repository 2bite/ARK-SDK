#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RTSControlCharacter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI
struct ARTSControlCharacter_C_ToggleKeybindUI_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection
struct ARTSControlCharacter_C_UpdateSelection_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection
struct ARTSControlCharacter_C_RemoveClassFromSelection_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection
struct ARTSControlCharacter_C_RemoveGroupFromSelection_Params
{
	int                                                groupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup
struct ARTSControlCharacter_C_RemoveSelectionFromGroup_Params
{
	int                                                groupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation
struct ARTSControlCharacter_C_UpdateCursorLocation_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset
struct ARTSControlCharacter_C_CalcCursorOffset_Params
{
	bool                                               UseOffsets;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CursorRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              X_Offset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y_Offset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor
struct ARTSControlCharacter_C_DrawCursor_Params
{
	class AShooterHUD*                                 ShooterHUD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress
struct ARTSControlCharacter_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot
struct ARTSControlCharacter_C_BPOverrideHeldItemSlot_Params
{
	int*                                               ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot
struct ARTSControlCharacter_C_BPOverrideReleaseItemSlot_Params
{
	int*                                               ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot
struct ARTSControlCharacter_C_BPOverrideUseItemSlot_Params
{
	int*                                               ItemSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters
struct ARTSControlCharacter_C_TrimSelectedCharacters_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon
struct ARTSControlCharacter_C_IsValidRTSControlLocatioon_Params
{
	class UWorld*                                      TheWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterGameMode*                            TheGameMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ShooterPC;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor
struct ARTSControlCharacter_C_Get_ActorUnderCursor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed
struct ARTSControlCharacter_C_BPLocalUnpossessed_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis
struct ARTSControlCharacter_C_UnpossessThis_Params
{
	class AController*                                 ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed
struct ARTSControlCharacter_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse
struct ARTSControlCharacter_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen
struct ARTSControlCharacter_C_IsDinoOnScreen_Params
{
	class APrimalDinoCharacter*                        dinoChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnScreen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos
struct ARTSControlCharacter_C_SelectAllDinos_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection
struct ARTSControlCharacter_C_CenterCameraOnSelection_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed
struct ARTSControlCharacter_C_ReceiveDestroyed_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections
struct ARTSControlCharacter_C_ServerClearAllDinoSelections_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected
struct ARTSControlCharacter_C_ServerSetDinoSelected_Params
{
	class APrimalDinoCharacter*                        theDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters
struct ARTSControlCharacter_C_NetServerReceiveSelectedCharacters_Params
{
	TArray<class APrimalDinoCharacter*>                SelectedChars;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box
struct ARTSControlCharacter_C_Draw_Actor_Selection_Box_Params
{
	class APlayerController*                           thePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvas*                                     thecanvas;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  TheTargetChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DrawColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup
struct ARTSControlCharacter_C_UseDinoSelectionGroup_Params
{
	int                                                groupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor
struct ARTSControlCharacter_C_GetCurrentWorldPointUnderCursor_Params
{
	struct FVector                                     OutPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased
struct ARTSControlCharacter_C_SelectionReleased_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed
struct ARTSControlCharacter_C_SelectionPressed_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed
struct ARTSControlCharacter_C_OrderPressed_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor
struct ARTSControlCharacter_C_GetPointOrTargetUnderCursor_Params
{
	struct FVector                                     TargetPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TheTargetActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy
struct ARTSControlCharacter_C_BPLocalPossessedBy_Params
{
	class APlayerController**                          ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer
struct ARTSControlCharacter_C_UpdateLocalPlayer_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess
struct ARTSControlCharacter_C_IsDinoValidToPossess_Params
{
	class APrimalDinoCharacter*                        DinoToPossess;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor
struct ARTSControlCharacter_C_GetDinoUnderCursor_Params
{
	class APrimalDinoCharacter*                        OutDino;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick
struct ARTSControlCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD
struct ARTSControlCharacter_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget
struct ARTSControlCharacter_C_BPOverrideCameraViewTarget_Params
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

// Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript
struct ARTSControlCharacter_C_UserConstructionScript_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398
struct ARTSControlCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_398_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397
struct ARTSControlCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_397_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84
struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_84_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83
struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_83_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396
struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_396_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395
struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_395_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394
struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_394_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393
struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_393_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392
struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_392_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391
struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_391_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390
struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_390_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389
struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_389_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388
struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_388_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387
struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_387_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386
struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_386_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385
struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_385_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384
struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_384_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383
struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_383_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382
struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_382_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381
struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_381_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380
struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_380_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379
struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_379_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378
struct ARTSControlCharacter_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377
struct ARTSControlCharacter_C_InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376
struct ARTSControlCharacter_C_InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375
struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374
struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82
struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_82_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81
struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_81_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373
struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372
struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371
struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_371_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370
struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_370_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40
struct ARTSControlCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52
struct ARTSControlCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115
struct ARTSControlCharacter_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc
struct ARTSControlCharacter_C_NetServerSetLoc_Params
{
	struct FVector                                     viewLoc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo
struct ARTSControlCharacter_C_NetServerRequestedDinoMoveTo_Params
{
	class APrimalDinoCharacter*                        forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MoveToLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget
struct ARTSControlCharacter_C_NetServerRequestedDinoTarget_Params
{
	class APrimalDinoCharacter*                        forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      attackTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold
struct ARTSControlCharacter_C_ServerDinosStopAndHold_Params
{
	TArray<class APrimalDinoCharacter*>                Dinos;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup
struct ARTSControlCharacter_C_SetDinoGroup_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.RequestExit
struct ARTSControlCharacter_C_RequestExit_Params
{
	TArray<struct FDinoSelectionGroup>                 Groups;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111
struct ARTSControlCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118
struct ARTSControlCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132
struct ARTSControlCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_132_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163
struct ARTSControlCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_163_Params
{
	float                                              AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent
struct ARTSControlCharacter_C_ClientSetSelectionsEvent_Params
{
	TArray<struct FDinoSelectionGroup>                 Groups;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APrimalDinoCharacter*>                Selected;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent
struct ARTSControlCharacter_C_SetGroupsOnServerEvent_Params
{
	TArray<struct FDinoSelectionGroup>                 Groups;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter
struct ARTSControlCharacter_C_ExecuteUbergraph_RTSControlCharacter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
