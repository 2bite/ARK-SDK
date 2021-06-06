#pragma once

// ARKSurvivalEvolved (329.9) SDK

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

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_298
struct ARTSControlCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_298_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_297
struct ARTSControlCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_297_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_64
struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_64_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_63
struct ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_63_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_296
struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_296_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_295
struct ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_295_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_294
struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_294_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_293
struct ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_293_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_292
struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_292_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_291
struct ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_291_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_290
struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_290_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_289
struct ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_289_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_288
struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_288_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_287
struct ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_287_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_286
struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_286_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_285
struct ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_285_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_284
struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_284_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_283
struct ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_283_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_282
struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_282_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_281
struct ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_281_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_280
struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_280_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_279
struct ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_279_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_278
struct ARTSControlCharacter_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_278_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_277
struct ARTSControlCharacter_C_InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_277_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_276
struct ARTSControlCharacter_C_InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_276_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_275
struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_275_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_274
struct ARTSControlCharacter_C_InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_274_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_62
struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_62_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_61
struct ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_61_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_273
struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_273_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_272
struct ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_272_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_271
struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_271_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_270
struct ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_270_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_269
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_269_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_268
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_268_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_267
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_267_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_266
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_266_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_265
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_265_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_264
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_264_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_263
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_263_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_262
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_262_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_261
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_261_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_260
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_260_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_259
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_259_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_258
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_258_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_257
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_257_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_256
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_256_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_255
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_255_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_254
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_254_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_253
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_253_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_252
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_252_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_251
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_251_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_250
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_250_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_249
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_249_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_248
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_248_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_247
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_247_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_246
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_246_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_245
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_245_Params
{
};

// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_244
struct ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_244_Params
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
	struct FVector                                     ViewLoc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
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
