#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Crab_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Crab_Character_BP.Crab_Character_BP_C
// 0x0570 (0x27F8 - 0x2288)
class ACrab_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_CaveCrab_C* DinoCharacterStatus_BP_CaveCrab_C1;                       // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SoundToPlayOnGrab;                                        // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SoundToPlayOnRelease;                                     // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SoundToPlayOnThrow;                                       // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                startThrowAnim;                                           // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowAnim;                                                // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrabThrowAimLimit;                                        // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowFwdStrengthMax;                                      // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              throwUpStrengthMin;                                       // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              throwUpStrengthMax;                                       // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePCThrow;                                              // 0x22C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22C9(0x0003) MISSED OFFSET
	float                                              ThrowStaminaCost;                                         // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGrabTracing;                                           // 0x22D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22D1(0x0003) MISSED OFFSET
	int                                                GrabTraceIndex;                                           // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastGrabTraceCenter;                                      // 0x22D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22E4(0x0004) MISSED OFFSET
	class APrimalCharacter*                            CharToGrabTest;                                           // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabTraceRadius;                                          // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharToGrabTestHitLoc;                                     // 0x22F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraSmashDamage;                                         // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2304(0x0004) MISSED OFFSET
	class UParticleSystem*                             SingleSmashParticle;                                      // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DoubleSmashParticle;                                      // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DoubleSmashTimeAllowance;                                 // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UAnimMontage*                                SwimJumpAnim;                                             // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrabSwimJumpZVelocity;                                    // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrabTravelIndex;                                          // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrabSwimJumpStaminaCost;                                  // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2334(0x0004) MISSED OFFSET
	class UAnimMontage*                                GroundJumpAnim;                                           // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrabIdle;                                             // 0x2340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2341(0x0007) MISSED OFFSET
	double                                             LastClawAttackAttemptTime;                                // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               throwTraceHit;                                            // 0x2350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2351(0x0003) MISSED OFFSET
	struct FVector                                     ThrowTraceLoc;                                            // 0x2354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousRightGrabbedChar;                                 // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousLeftGrabbedChar;                                  // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrownCharactersApexTravelTime;                           // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowTowardCenterBias;                                    // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TPVCameraThrowOffsetMultiplier;                           // 0x2378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usingThrowOffset;                                         // 0x2384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsThrowing;                                              // 0x2385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x2386(0x0002) MISSED OFFSET
	float                                              JumpHoldTimeAllowance;                                    // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsThrowJumping;                                           // 0x238C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x238D(0x0003) MISSED OFFSET
	float                                              ThrowJumpForceMult;                                       // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceLength;                                              // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastServerFrameTime;                                      // 0x2398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CrabGroundLandParticle;                                   // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CrabUnderwaterLandParticle;                               // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldToGrabTimeAllowance;                                  // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHoldingGrab;                                            // 0x23B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpInstant;                                              // 0x23B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThrowInstant;                                             // 0x23B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x23B7(0x0001) MISSED OFFSET
	float                                              JumpHorizontalDistanceMin;                                // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpVerticalDistanceMin;                                  // 0x23BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               TorporHeadBoneNames;                                      // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TorporDamageMultiplier;                                   // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x23D4(0x0004) MISSED OFFSET
	double                                             JumpLaunchTime;                                           // 0x23D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JumpRotationTargetDir;                                    // 0x23E0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToAllowArrestMovement;                                // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowArrestMovement;                                     // 0x23F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x23F1(0x0007) MISSED OFFSET
	TArray<struct FName>                               CustomTagBlackList;                                       // 0x23F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2409(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x240A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Retrieve_Any_Grabbable_Character_FoundCharacter; // 0x240B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x240C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_isHoldingJump;                         // 0x240D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsHolding;                             // 0x240E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ToggleAction;                          // 0x240F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x2412(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2414(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2421(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x2424(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x2430(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x243C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x243D(0x0003) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_ParticleSystem;                        // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_StartLoc;                              // 0x2448(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2454(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2460(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x246C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2478(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingle_NEW_OutHit;                      // 0x2488(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingle_NEW_ReturnValue;                 // 0x2510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2511(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2514(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x2520(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x252C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x2538(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x2544(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x2550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x2560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x2568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x2570(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x2574(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x2575(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2576(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue2;               // 0x2578(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x2584(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2590(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromXZ_ReturnValue;                       // 0x259C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x25A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Select_ReturnValue;                                // 0x25B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x25B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x25B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x25BA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue3;                  // 0x25BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x25C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x25C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x25CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x25CB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x25CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x25D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x25E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x25F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x25FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2601(0x0003) MISSED OFFSET
	int                                                CallFunc_Conv_ByteToInt_ReturnValue2;                     // 0x2604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewPreventMovement;                    // 0x2609(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x260A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x260B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_ModifyCurrentStatusValue_ReturnValue;            // 0x260C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_AimLoc2;                               // 0x2610(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AimHit2;                               // 0x261C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_JumpInstant;                           // 0x261D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ThrowInstant;                          // 0x261E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ForceImmediateClear;                   // 0x261F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x2620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x2621(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetDefaultObject_ReturnValue;                    // 0x2628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ACrab_Character_BP_C*                        K2Node_DynamicCast_AsCrab_Character_BP_C;                 // 0x2630(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2638(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0x2639(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x263A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_AimLoc;                                // 0x263C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AimHit;                                // 0x2648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x2649(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue;                    // 0x264A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x264B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCarryingCharacterSecondary_OutputPin;          // 0x264C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0x264D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x264E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrabSubmerged_ReturnValue;                     // 0x264F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x2650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2659(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x265C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x2660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2661(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCarryingCharacterSecondary_OutputPin2;         // 0x2662(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x2663(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrabSubmerged_ReturnValue2;                    // 0x2669(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x266A(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x266C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x2670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2671(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2672(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x2673(0x0005) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrabSubmerged_ReturnValue3;                    // 0x2680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2682(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2683(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2684(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable5;                       // 0x269C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable5;                             // 0x269D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x269E(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x26A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrabSubmerged_ReturnValue4;                    // 0x26AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x26AD(0x0003) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue3;                               // 0x26B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x26B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable6;                             // 0x26B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_buttonHeld2;                           // 0x26BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_buttonHeld;                            // 0x26BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_SelectInt_ReturnValue;                           // 0x26BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_SelectInt_ReturnValue2;                          // 0x26C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue2;                          // 0x26C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue3;                          // 0x26C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue4;                          // 0x26C6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x1];                                       // 0x26C7(0x0001) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x26C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x26D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x26D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x26D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x26DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x26DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable6;                       // 0x26DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x26DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue4;                   // 0x26DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable7;                             // 0x26DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable7;                       // 0x26E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x26E1(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x26E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_WasBullet;                             // 0x26E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x26E9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x26EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x26F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x2704(0x0004) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue4;                               // 0x2708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x2710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x2711(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x2720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x2721(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x2724(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x2728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2729(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x272A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMontagePlaying_ReturnValue2;                   // 0x272B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x272C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x272D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Should_Stop_Jump_Rotation_Return_Value;          // 0x272E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x272F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x2730(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x273C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x273D(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x2740(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x2744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x2748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Shortest_Angle_Distance_Difference;              // 0x274C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue9;                           // 0x2750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2751(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x2754(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2758(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x275C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x2768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x2769(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x2778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x277C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x277D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x277E(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x2780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2788(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x278C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2799(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x279C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x27A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x27A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue10;                          // 0x27A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x27A9(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x27AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x27B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x27B1(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x27B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x27B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x27B9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x27BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x27C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x27CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x27CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x27CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrabSubmerged_ReturnValue5;                    // 0x27CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x27D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x27D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x1];                                       // 0x27D3(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x27D4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData44[0x4];                                       // 0x27E4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x27E8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Crab_Character_BP.Crab_Character_BP_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	struct FName BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void Should_Stop_Jump_Rotation(bool* Return_Value);
	bool STATIC_BPShouldCancelDoAttack(int* AttackIndex);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void ImpulseTowardTarget(bool IsApex);
	void Shortest_Angle_Distance(float AngleCurrent, float AngleTarget, float* Difference);
	void StopThrowOrReleaseGrab(int index, bool* ReleasedCharacter);
	bool BPHandleOnStopFire();
	bool BPHandleOnStopTargeting();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	int BPAdjustAttackIndex(int* AttackIndex);
	void ProcessThrow();
	void ProcessJump();
	bool BP_InterceptMoveForward(float* AxisValue);
	bool BP_InterceptMoveRight(float* AxisValue);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void Crab_Adjust_Attack_Index(int InputPin, int* RetAttackIndex);
	bool HasSecondaryCarriedChar();
	void IsCarryingCharacterSecondary(bool* OutputPin);
	void GetCarriedCharacterSecondary(class APrimalCharacter** OutputPin);
	void LaunchAtTracePoint();
	struct FVector GetClampedLookDir(bool LimitLowerPitch);
	void STATIC_ThrowTrace();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool IsCrabSubmerged();
	void SlamIfDoubleClicking(int CurrentAttackIndex);
	void PlayGrabbedIdle(bool IsMoving);
	void BPTimerServer();
	void GrabFoundCharacter();
	bool Is_Better_Grab_Target(class AActor* NewTarget, const struct FVector& NewTargHitLoc);
	void Find_Proper_Grab_Target(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar);
	void Check_Proper_Can_Carry(class APrimalCharacter* TestActor, bool* CanCarry);
	void Throw_Grabbed_Characters();
	void Retrieve_Any_Grabbable_Character(bool* FoundCharacter);
	struct FVector GetGrabClawLocation();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPCharacterSleeped();
	void BPTimerNonDedicated();
	void BPDoAttack(int* AttackIndex);
	void Server_StopThrow();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void SharedCanAttack(int AttackIndex, bool* CanAttack);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	struct FVector GetLaunchDirection(class AActor* CalcActor);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void UserConstructionScript();
	void InpActEvt_Crouch_K2Node_InputActionEvent_166();
	void InpActEvt_Crouch_K2Node_InputActionEvent_165();
	void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164();
	void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163();
	void Request_Tertiary_Pressed(bool IsHolding, bool ToggleAction);
	void Request_Jump_Response(bool isHoldingJump);
	void AnimNotify_StartGrabLeftTracing();
	void AnimNotify_EndGrabTracing();
	void TraceGrab();
	void AnimNotify_StartGrabRightTracing();
	void AnimNotify_ReleaseGrabbedCharacters();
	void Multi_SwimUp();
	void SwimUp();
	void SwimJump();
	void AnimNotify_MidGrabTrace();
	void AnimNotify_GroundPoundLeft();
	void PlayTracedVFX(class UParticleSystem* ParticleSystem, const struct FVector& StartLoc);
	void AnimNotify_GroundPoundRight();
	void Server_DropCharacters();
	void Multi_SetPreventMovement(bool NewPreventMovement);
	void DelayedClearThrowing();
	void Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant, bool ThrowInstant);
	void StartThrowIdle();
	void ClearThrow(bool ForceImmediateClear);
	void Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit);
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void DelayedPress();
	void UpdateAllJumpRotation();
	void UpdateJumpRotation();
	void AnimNotify_CrabLand();
	void ServerRequestRightAttack(bool ButtonHeld);
	void ServerRequestLeftAttack(bool ButtonHeld);
	void DelayedRightAttack();
	void DelayedLeftAttack();
	void Server_DropRight();
	void Server_DropLeft();
	void ServerRequestDoubleSmash();
	void DelayedThrowPress();
	void AIWaterJump();
	void Multi_HurtResponse(bool WasBullet, const struct FVector& Location, const struct FRotator& Rotation);
	void ClearTorporHit();
	void TorporHit();
	void ServerArrestMovement();
	void ResetArrestMovement();
	void ExecuteUbergraph_Crab_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
