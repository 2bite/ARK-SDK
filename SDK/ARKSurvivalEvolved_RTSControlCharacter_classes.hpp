#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RTSControlCharacter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RTSControlCharacter.RTSControlCharacter_C
// 0x04B8 (0x2718 - 0x2260)
class ARTSControlCharacter_C : public APrimalDinoCharacter
{
public:
	float                                              MoveSpeed;                                                // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2264(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    TheOriginalController;                                    // 0x2268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseMoveSpeedX;                                          // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MouseScreenPercentage;                                    // 0x2274(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseMoveSpeedY;                                          // 0x227C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeReplicatedPosition;                               // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseCameraPanSpeedMin;                                   // 0x2288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseCameraPanSpeedMax;                                   // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMinZ;                                               // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMaxZ;                                               // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSmoothZoomSpeed;                                    // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZoomStepAmountMin;                                  // 0x229C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZoomStepAmountMax;                                  // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x22A4(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                SelectedCharacters;                                       // 0x22A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture2D*                                  SelectionIcon;                                            // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LastOrderedEffect;                                        // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DragBoxStartWorldPoint;                                   // 0x22C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAbsoluteMaxZ;                                       // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FollowEmitter;                                            // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSelectionBoundsRadiusMultiplier;                       // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSelectionBoundsRadiusMultiplier;                       // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSelectionBoundsRadius;                                 // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSelectionBoundsRadius;                                 // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDinoSelectionGroup>                 SelectionGroups;                                          // 0x22F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     PressedGroupKeyTime;                                      // 0x2300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsShiftHeld;                                             // 0x2310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2311(0x0007) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                LastReplicatedSelectedCharacters;                         // 0x2318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalDinoCharacter*>                ServerReceivedSelectedCharacters;                         // 0x2328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                LastDinoGroupIndexHeld;                                   // 0x2338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamZCharacterOffsetMin;                                   // 0x233C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamZCharacterOffsetMax;                                   // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2344(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        TheOriginalDino;                                          // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRangeFromOwnerPlayerChar;                              // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyCoreStructureCheckRadius;                            // 0x2354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumSelectableDinos;                                    // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	double                                             LastTimeShowMouseCursor;                                  // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachToOwner;                                           // 0x2368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2369(0x0007) MISSED OFFSET
	TArray<double>                                     GroupKeyDoubleClickTime;                                  // 0x2370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DoubleClickThreshold;                                     // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2384(0x0004) MISSED OFFSET
	class USoundWave*                                  MoveToSound;                                              // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  AttackSound;                                              // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  FollowSound;                                              // 0x2398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  CancelOrderSound;                                         // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  SetGroupSound;                                            // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  SelectGroupSound;                                         // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LeftMouseDoubleClickTime;                                 // 0x23B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsControlHeld;                                           // 0x23C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGamepadLB_Held;                                        // 0x23C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGamepadRB_Held;                                        // 0x23C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x23C3(0x0005) MISSED OFFSET
	class UExoSuitRtsGamepadHUD_C*                     KeybindHelpUI;                                            // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_Default;                                           // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_Add;                                               // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_Remove;                                            // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_MoveTo;                                            // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_Follow;                                            // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_Attack;                                            // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  Cursor_MapEdge;                                           // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CursorSize;                                               // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsForceClosing;                                          // 0x240C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x240D(0x0003) MISSED OFFSET
	TArray<struct FDinoSelectionGroup>                 K2Node_CustomEvent_Groups;                                // 0x2410(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue7;                         // 0x2428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue6;                         // 0x242C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue2;                // 0x2431(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2432(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2434(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x2440(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2444(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue5;                         // 0x244C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2450(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_ViewLoc;                               // 0x2454(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ForCharacter2;                         // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_MoveToLoc;                             // 0x2470(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDinoValidToPossess_IsValid;                    // 0x247C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x247D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2480(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x248C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x2490(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2494(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2498(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x249C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x24A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x24A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x24A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x24AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x24B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x24BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue2;                // 0x24C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue3;                // 0x24C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x24CA(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ForCharacter;                          // 0x24D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_AttackTarget;                          // 0x24D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x24E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDinoValidToPossess_IsValid2;                   // 0x24E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x24E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x24E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x24E4(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                K2Node_CustomEvent_Dinos;                                 // 0x24E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bEnable;                               // 0x24F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24F9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x24FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2500(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x2501(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item;                                  // 0x2508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2512(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x2513(0x0005) MISSED OFFSET
	TArray<struct FDinoSelectionGroup>                 K2Node_CustomEvent_Groups3;                               // 0x2518(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2529(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2538(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2544(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2551(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X3;                                  // 0x2554(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x2558(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x255C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x2560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2568(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X4;                                  // 0x2574(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y4;                                  // 0x2578(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z4;                                  // 0x257C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x2580(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue4;                // 0x258C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x258D(0x0003) MISSED OFFSET
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x2590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowTribeGroupPermission_ReturnValue;           // 0x2594(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x2595(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x259C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x25A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x25A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x25AC(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x25B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x25B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x25B9(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x25BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x25C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x25C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x25C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0x25CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue5;                         // 0x25D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue5;                // 0x25E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue6;                // 0x25E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x25E6(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x25E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x25EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue6;                         // 0x25F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue7;                // 0x25FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x25FD(0x0003) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue4;                         // 0x2600(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue3;                         // 0x2604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue2;                         // 0x2608(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x260C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x2618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x2620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_DoubleDouble_ReturnValue;              // 0x2628(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x2629(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHud_ReturnValue;                       // 0x2630(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2638(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2639(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x263A(0x0002) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue;                           // 0x263C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2641(0x0003) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue2;                          // 0x2644(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FDinoSelectionGroup>                 K2Node_CustomEvent_Groups2;                               // 0x2648(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APrimalDinoCharacter*>                K2Node_CustomEvent_Selected;                              // 0x2658(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2669(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x2670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_GetRidingDino_ReturnValue;                       // 0x2678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x2680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x2681(0x0007) MISSED OFFSET
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x2688(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_BPServerHandleNetExecCommand_ReturnValue;        // 0x26C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x26C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x26CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x26CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x26CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x26CD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x26D0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x26E0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x26F0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	double                                             CallFunc_Array_Set_Item_RefProperty;                      // 0x2700(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereTraceSingleForObjects_ActorsToIgnore2_RefProperty;// 0x2708(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RTSControlCharacter.RTSControlCharacter_C");
		return ptr;
	}


	void ToggleKeybindUI();
	void UpdateSelection(class APrimalDinoCharacter* Dino);
	void RemoveClassFromSelection();
	void RemoveGroupFromSelection(int groupIndex);
	void RemoveSelectionFromGroup(int groupIndex);
	void UpdateCursorLocation(float AxisValue, bool IsX);
	void CalcCursorOffset(bool* UseOffsets, float* CursorRotation, float* X_Offset, float* Y_Offset);
	void DrawCursor(class AShooterHUD* ShooterHUD, float X, float Y);
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void BPOverrideHeldItemSlot(int* ItemSlot);
	void BPOverrideReleaseItemSlot(int* ItemSlot);
	void BPOverrideUseItemSlot(int* ItemSlot);
	void TrimSelectedCharacters();
	void IsValidRTSControlLocatioon(class UWorld* TheWorld, const struct FVector& AtLoc, class AShooterGameMode* TheGameMode, class AShooterPlayerController* ShooterPC, bool* bIsValid);
	void STATIC_Get_ActorUnderCursor(class AActor** TargetActor);
	void BPLocalUnpossessed();
	void UnpossessThis(class AController* ForController);
	void ReceivePossessed(class AController** NewController);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void IsDinoOnScreen(class APrimalDinoCharacter* dinoChar, bool* bOnScreen);
	void SelectAllDinos();
	void CenterCameraOnSelection();
	void ReceiveDestroyed();
	void ServerClearAllDinoSelections();
	void ServerSetDinoSelected(class APrimalDinoCharacter* theDino, bool bSelected);
	void NetServerReceiveSelectedCharacters(TArray<class APrimalDinoCharacter*>* SelectedChars);
	void Draw_Actor_Selection_Box(class APlayerController* thePC, class UCanvas* thecanvas, class ACharacter* TheTargetChar, const struct FLinearColor& DrawColor);
	void UseDinoSelectionGroup(int groupIndex, bool bPressed);
	void GetCurrentWorldPointUnderCursor(struct FVector* OutPoint);
	void SelectionReleased();
	void SelectionPressed();
	void STATIC_OrderPressed();
	void GetPointOrTargetUnderCursor(struct FVector* TargetPoint, class AActor** TheTargetActor);
	void BPLocalPossessedBy(class APlayerController** ByController);
	void STATIC_UpdateLocalPlayer();
	void IsDinoValidToPossess(class APrimalDinoCharacter* DinoToPossess, bool* IsValid);
	void GetDinoUnderCursor(class APrimalDinoCharacter** OutDino);
	void ReceiveTick(float* DeltaSeconds);
	void STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void UserConstructionScript();
	void InpActEvt_ZoomIn_K2Node_InputActionEvent_298();
	void InpActEvt_ZoomOut_K2Node_InputActionEvent_297();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_64();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_63();
	void InpActEvt_UseItem1_K2Node_InputActionEvent_296();
	void InpActEvt_UseItem1_K2Node_InputActionEvent_295();
	void InpActEvt_UseItem2_K2Node_InputActionEvent_294();
	void InpActEvt_UseItem2_K2Node_InputActionEvent_293();
	void InpActEvt_UseItem3_K2Node_InputActionEvent_292();
	void InpActEvt_UseItem3_K2Node_InputActionEvent_291();
	void InpActEvt_UseItem4_K2Node_InputActionEvent_290();
	void InpActEvt_UseItem4_K2Node_InputActionEvent_289();
	void InpActEvt_UseItem5_K2Node_InputActionEvent_288();
	void InpActEvt_UseItem5_K2Node_InputActionEvent_287();
	void InpActEvt_UseItem6_K2Node_InputActionEvent_286();
	void InpActEvt_UseItem6_K2Node_InputActionEvent_285();
	void InpActEvt_UseItem7_K2Node_InputActionEvent_284();
	void InpActEvt_UseItem7_K2Node_InputActionEvent_283();
	void InpActEvt_UseItem8_K2Node_InputActionEvent_282();
	void InpActEvt_UseItem8_K2Node_InputActionEvent_281();
	void InpActEvt_UseItem9_K2Node_InputActionEvent_280();
	void InpActEvt_UseItem9_K2Node_InputActionEvent_279();
	void InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_278();
	void InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_277();
	void InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_276();
	void InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_275();
	void InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_274();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_62();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_61();
	void InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_273();
	void InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_272();
	void InpActEvt_UseItem10_K2Node_InputActionEvent_271();
	void InpActEvt_UseItem10_K2Node_InputActionEvent_270();
	void InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_269();
	void InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_268();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_267();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_266();
	void InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_265();
	void InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_264();
	void InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_263();
	void InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_262();
	void InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_261();
	void InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_260();
	void InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_259();
	void InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_258();
	void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_257();
	void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_256();
	void InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_255();
	void InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_254();
	void InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_253();
	void InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_252();
	void InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_251();
	void InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_250();
	void InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_249();
	void InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_248();
	void InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_247();
	void InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_246();
	void InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_245();
	void InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_244();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52(float AxisValue);
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115(float AxisValue);
	void NetServerSetLoc(const struct FVector& ViewLoc);
	void NetServerRequestedDinoMoveTo(class APrimalDinoCharacter* forCharacter, const struct FVector& MoveToLoc);
	void NetServerRequestedDinoTarget(class APrimalDinoCharacter* forCharacter, class AActor* attackTarget);
	void ServerDinosStopAndHold(bool bEnable, TArray<class APrimalDinoCharacter*>* Dinos);
	void SetDinoGroup();
	void RequestExit(TArray<struct FDinoSelectionGroup>* Groups);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_132(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_163(float AxisValue);
	void ClientSetSelectionsEvent(TArray<struct FDinoSelectionGroup>* Groups, TArray<class APrimalDinoCharacter*>* Selected);
	void SetGroupsOnServerEvent(TArray<struct FDinoSelectionGroup>* Groups);
	void ExecuteUbergraph_RTSControlCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
