#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekHoverSkiff_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C
// 0x1798 (0x3A00 - 0x2268)
class ATekHoverSkiff_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    DamageParticleComp_Smoke_Right;                           // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DamageParticleComp_Smoke_Left;                            // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DamageParticleComp_Critical;                              // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DamageSoundComp_Critical;                                 // 0x2280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             DamageSoundComp_Smoke;                                    // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             RepairSoundComp;                                          // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PawnMeshBox;                                              // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        HeadlightConeMesh_Right;                                  // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        HeadlightConeMesh_Left;                                   // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HoverSound_Idle;                                          // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Right_Side_3;                              // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Strafe_Right;                         // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Right_Side_2;                              // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Strafe_Front_Right;                   // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Right_Front;                               // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Strafe_Front_Left;                    // 0x22E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Left_Front;                                // 0x22E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Left_Side_3;                               // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Strafe_Left;                          // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StrafeThruster_Left_Side_2;                               // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BeamLockEnergyFieldParticles;                             // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Headlight_LightComp;                                      // 0x2310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Front_Left;                           // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Front_Left;                                 // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Front_Right;                          // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Front_Right;                                // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Center_Intense;                             // 0x2338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WingTrail_Right;                                          // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WingTrail_Left;                                           // 0x2348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Center;                               // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Center;                                     // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Back_Right;                                 // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterActiveSound_Back;                                 // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Back_Left;                                  // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Front_Right_Intense;                        // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HoverThruster_Front_Left_Intense;                         // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PlatformSaddleBuildArea;                                  // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BeamSound;                                                // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BeamTargetingParticleComp;                                // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BeamParticleComp;                                         // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BeamTurretMesh;                                           // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_HoverSkiff_C* DinoCharacterStatus_BP_HoverSkiff_C1;                     // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InvisibleSaddle;                                          // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlyUp;                                                   // 0x23C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x23C1(0x0003) MISSED OFFSET
	struct FName                                       BeamSocketName;                                           // 0x23C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_EndPoint;                          // 0x23CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamMaxLength;                                            // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_Beam;                                   // 0x23D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamRadius;                                               // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentBeamEndPoint;                                      // 0x23E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x23F4(0x0004) MISSED OFFSET
	double                                             LastBeamEndTraceTime;                                     // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FuelItemClass;                                            // 0x2400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                CurrentHoverState;                                        // 0x2408(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                PreviousHoverState;                                       // 0x2409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x240A(0x0002) MISSED OFFSET
	float                                              TargetHoverHeight_HoverLimit;                             // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTargetHoverHeight;                                 // 0x2410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              maxBeamYaw;                                               // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minBeamYaw;                                               // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minBeamPitch;                                             // 0x241C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxBeamPitch;                                             // 0x2420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2424(0x0004) MISSED OFFSET
	double                                             LastTimeSentInputToServer;                                // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentBeamLength;                                        // 0x2430(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHoverFloorZ;                                       // 0x2434(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamMovementSpeed;                                        // 0x2438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamRetractSpeed;                                         // 0x243C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastChangedBeamLengthTime;                                // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AlternateFuelItemClasses;                                 // 0x2448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FuelCost_Hovering;                                        // 0x2458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelUnitPercent;                                   // 0x245C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	double                                             LastTickTime;                                             // 0x2460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceSkiffDescend;                                       // 0x2468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x2469(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CurrentlyBeamGrabbingChar;                                // 0x2470(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastBeamTurretAimRotation;                                // 0x2478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurretRotationInterpSpeed_Client;                         // 0x2484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastNonBlockedBeamLength;                                 // 0x2488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Current;                                        // 0x248C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_NoTarget;                                       // 0x249C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x24AC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              characterBlackList;                                       // 0x24B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentFuelUnitsInInventory;                              // 0x24C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bDebugSkiff_TractorBeam;                                  // 0x24C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x24C5(0x0003) MISSED OFFSET
	struct FName                                       PreBeamSocketName;                                        // 0x24C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GrabbedByBeamBuff;                                        // 0x24D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AttachedToBeamBuff;                                       // 0x24D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              beamMinLength;                                            // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Locked_Friendly;                                // 0x24E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHoldingLeftMouse;                                      // 0x24F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x24F5(0x0003) MISSED OFFSET
	float                                              HoverVelocityAntiGravityMult;                             // 0x24F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffTerminalVelocity;                                    // 0x24FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_InfiniteFuel;                                      // 0x2500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2501(0x0007) MISSED OFFSET
	double                                             LastCameraTransitionStartTime;                            // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPVCameraInterpSpeedMult_BeamActiveStateChanged;          // 0x2510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPVCameraInterpSpeedDuration_BeamActiveStateChanged;      // 0x2514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_MovingTowardsCamera;                // 0x2518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CrosshairAlphas;                                          // 0x251C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeamCameraViewTargetOffset;                               // 0x2528(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentCameraViewTargetOffset;                            // 0x2534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Default;                            // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 CurrentBeamState;                                         // 0x2544(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 PreviousBeamState;                                        // 0x2545(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2546(0x0002) MISSED OFFSET
	float                                              BeamStateChangeDuration_Closing;                          // 0x2548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamStateChangeDuration_Activating;                       // 0x254C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastForceUpdateAimedActorsTime;                           // 0x2550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowForceUpdateAimedActorsInterval;                      // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x255C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Montage_Turret_Open;                                      // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Montage_Turret_Close;                                     // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffWantsToLand;                                        // 0x2570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2571(0x0003) MISSED OFFSET
	float                                              TargetHoverHeight_Min;                                    // 0x2574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastHoverTraceTime;                                       // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_Hovering;                         // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHoverTraceInterval;                                // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTrulyLanding;                                          // 0x258C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x258D(0x0003) MISSED OFFSET
	float                                              AllowSkiffLanding_UnderHoverHeight;                       // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowSkiffLanding_Under2DVelocity;                        // 0x2594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverZVelocityDampingRate_Down;                      // 0x2598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightChangeSpeed_Up;                                // 0x259C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SkiffHitVFX;                                              // 0x25A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverDampingHeightRange;                             // 0x25A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffLandingVelocity_DampingRate;                         // 0x25AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTakeoffTime;                                          // 0x25B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PostTakeoffHoverStartDelay;                               // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoHoverFloorZ;                                            // 0x25BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SkiffImpactAnim;                                          // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrustersActive;                                         // 0x25C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x25C9(0x0003) MISSED OFFSET
	float                                              RearThrusters_MaxScale;                                   // 0x25CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverThrusters_IntensityRatio;                            // 0x25D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverJetBottomScaleRange;                                 // 0x25D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverJetThrustersScaleRange;                              // 0x25DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RearThrusters_CurrentScale;                               // 0x25E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BottomBackThruster_CurrentScale;                          // 0x25E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightChangeSpeed_Down;                              // 0x25EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RearThrusters_MaxScale_Running;                           // 0x25F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHoverHeightRatio;                                     // 0x25F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Blocked;                                        // 0x25F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_Color;                             // 0x2608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_Noise;                             // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffMovementInputs_Current;                              // 0x2618(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffMovementInputs_LastReplicated;                       // 0x2624(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventUsingTractorBeam;                                 // 0x2630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMoveBeamWithEveryone;                               // 0x2631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeamCameraLocked;                                        // 0x2632(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x2633(0x0001) MISSED OFFSET
	int                                                LastMoveInputFrame_Forward;                               // 0x2634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastMoveInputFrame_Right;                                 // 0x2638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResetMovementInputsAfterNumInactiveFrames;                // 0x263C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldAutoActivateBeam;                                  // 0x2640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2641(0x0003) MISSED OFFSET
	float                                              BeamStateChangeDuration_Opening;                          // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeamCameraActive;                                        // 0x2648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffFirePressed;                                        // 0x2649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffTargetingPressed;                                   // 0x264A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x264B(0x0001) MISSED OFFSET
	struct FVector2D                                   ThrusterHoverControlScales;                               // 0x264C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidHoverThrusterBurst;                                   // 0x2654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x2655(0x0003) MISSED OFFSET
	class UParticleSystem*                             EngineBurstParticle;                                      // 0x2658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamGrabbedCharParticle;                                  // 0x2660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CrashingParticles;                                        // 0x2668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CrashingParticlesSocketName;                              // 0x2670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedCrashingParticles;                                 // 0x2678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCrashingHealth;                                    // 0x2680(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCrashingHealth;                                        // 0x2684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionRadius;                                     // 0x2688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Pawns_Inner;                         // 0x268C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CrashExplosionDamageType;                                 // 0x2690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionImpulse_Inner;                              // 0x2698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingMaxAllowedDuration;                               // 0x269C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 CurrentMurderer_Instigator;                               // 0x26A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SkiffCrashingState;                                       // 0x26A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentMurderer_DamageCauser;                             // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TargetingBeamTriLifeRanges;                               // 0x26B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingRollRotationSpeed;                                // 0x26C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashingTerminalVelocity;                                 // 0x26C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CrashingThrusterParticleTemplate;                         // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_CurrentDamage;                         // 0x26D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_Interval;                              // 0x26D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             SkiffDamageTracker_LastDamageTime;                        // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_Threshold_BeamingChar;                 // 0x26E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTracker_Threshold_CarriedChar;                 // 0x26E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamCarrying_Mult;                               // 0x26E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x26EC(0x0004) MISSED OFFSET
	struct FHUDElement                                 HudElement_CameraLocked;                                  // 0x26F0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BeamFuelConsumptionRate_BaseDragWeight;                   // 0x2840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamFuelConsumptionRate_Current;                          // 0x2844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BeamFuelConsumptionRateRanges;                            // 0x2848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamFuelConsumptionRate_MultIncreasePerStruggle;          // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x2854(0x0004) MISSED OFFSET
	struct FHUDElement                                 HudElement_Fuel;                                          // 0x2858(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_BeamGrab;                                      // 0x29A8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AllowedBeamEndTraceInterval;                              // 0x2AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamActive;                                      // 0x2AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamGrabbingChar_Default;                        // 0x2B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_Beam_BaseCharCapsuleVolume;                      // 0x2B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamCarryingChar_Default;                        // 0x2B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamCarryingChar_BaseVolume;                     // 0x2B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamLockCharLocationPadding;                              // 0x2B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FullTankFuelAmount;                                       // 0x2B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamCarryingChar_Default_Friendly;               // 0x2B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_Hovering_RunMult;                                // 0x2B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FuelCost_BeamCarrying_VolumeMultRanges;                   // 0x2B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SkiffHitVFX_ScaleRanges;                                  // 0x2B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowSkiffHitVfxAboveSpeed;                               // 0x2B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurretRotationInterpSpeed_Client_Grabbed;                 // 0x2B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveBeamChar_MaxRelativeForward;                          // 0x2B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamTargetingParticlesParamName_TriLife;                  // 0x2B3C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamParticleNoise_MaxIntensity;                           // 0x2B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_TargetTangent;                     // 0x2B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BeamParticlesTangentScaleRanges;                          // 0x2B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_SourceTangent;                     // 0x2B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringAcceleration;                  // 0x2B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SkiffLandingVelocity_Range;                               // 0x2B64(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetHoverHeight_Default;                                // 0x2B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingAcceleration;                   // 0x2B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentBeamBlocker_Normal;                                // 0x2B74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentBeamBlocker_Location;                              // 0x2B80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x2B8C(0x0004) MISSED OFFSET
	double                                             LastNoBeamBlockerTime;                                    // 0x2B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedBeamBlockedTime;                                   // 0x2B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ModifyFlySpeed_BaseCharCapsuleVolume;                     // 0x2B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyMaxSpeedMult_BeamingChar;                              // 0x2BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamCameraZPadding;                                       // 0x2BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCameraRelativeZ;                                      // 0x2BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetHoverHeight_Max;                                    // 0x2BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FuelCost_Flying_Range;                                    // 0x2BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastHoverFoundGroundTime;                                 // 0x2BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedNoGroundTimeBeforeFreeFall;                        // 0x2BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_Hovering;                                          // 0x2BC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x2BC5(0x0003) MISSED OFFSET
	double                                             LastStartFreeFallTime;                                    // 0x2BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallUseSphereGroundTraceDuration;                     // 0x2BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceSlowHoverTraceIntervalBelowVelocity;                 // 0x2BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_NotMoving;                        // 0x2BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverTraceInterval_Landing;                               // 0x2BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x2BE4(0x0004) MISSED OFFSET
	struct FHUDElement                                 HudElement_Fuel_CurrentElement;                           // 0x2BE8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HudElement_FuelConsumeRate;                               // 0x2D38(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentFuelConsumeMult;                                   // 0x2E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelConsumeMultMax;                                // 0x2E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElementValueScale;                                        // 0x2E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_FreeFall;                                        // 0x2E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffFlyingVelocityDampingRate;                           // 0x2E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x2E9C(0x0004) MISSED OFFSET
	class UParticleSystem*                             SkiffFailedTakeoffThrusterParticleTemplate;               // 0x2EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedFailTakeoffInterval;                               // 0x2EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2EAC(0x0004) MISSED OFFSET
	double                                             LastFailedTakeoffTime;                                    // 0x2EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHeadlightsOn;                                            // 0x2EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x2EB9(0x0007) MISSED OFFSET
	TArray<struct FVector>                             HoverIK_TraceStartOffsets;                                // 0x2EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HoverIK_ExtraTraceDistance_Down;                          // 0x2ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_Skiff_IK;                                          // 0x2ED4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x2ED5(0x0003) MISSED OFFSET
	struct FVector2D                                   HeadlightIntensityLerpSpeeds;                             // 0x2ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverIK_ExtraTraceDistance_Up;                            // 0x2EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x2EE4(0x0004) MISSED OFFSET
	TArray<struct FName>                               GroundParticlesTraceSocketNames;                          // 0x2EE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GroundParticlesTraceDistance_Default;                     // 0x2EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x2EFC(0x0004) MISSED OFFSET
	double                                             LastGroundParticlesTraceTime;                             // 0x2F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Default;                          // 0x2F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Water;                            // 0x2F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Snow;                             // 0x2F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             GroundParticlesTemplate_Lava;                             // 0x2F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundParticlesAllowedTraceInterval;                      // 0x2F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x2F2C(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SpawnedGroundParticles;                                   // 0x2F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DeathsplosionEmitterClass;                                // 0x2F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugEnvironmentalVFX;                                   // 0x2F48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2F49(0x0003) MISSED OFFSET
	float                                              GroundParticlesTraceDistance_RearThruster_Normal;         // 0x2F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundParticlesTraceDistance_RearThruster_Running;        // 0x2F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x2F54(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    SpawnedBeamCaptureParticles_Begin;                        // 0x2F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamCaptureParticleTemplate_Begin;                        // 0x2F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamCaptureParticle_DefaultSphereDiameter;                // 0x2F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamCaptureParticle_MinScale;                             // 0x2F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedBeamCaptureParticles_End;                          // 0x2F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamCaptureParticleTemplate_End;                          // 0x2F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnedBeamLockMeshComp;                                  // 0x2F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BeamLockCharMeshMaterialParent;                           // 0x2F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpawnedBeamLockCharMeshMID;                               // 0x2F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Color;                      // 0x2F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Ratio;                      // 0x2FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamColorInterpSpeed;                                     // 0x2FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamColorInterpSpeed_Blocked;                             // 0x2FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToFreeFall;                                         // 0x2FB0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2FB1(0x0003) MISSED OFFSET
	struct FName                                       BeamParticlesParamName_TargetStrength;                    // 0x2FB4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamParticlesParamName_SourceStrength;                    // 0x2FBC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x2FC4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SpawnedHeadlightConeMID;                                  // 0x2FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Headlights_MaxIntensity;                                  // 0x2FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadlightConeMeshParamName_Alpha;                         // 0x2FD4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamGrabParticlesParamName_SphereScale_Sphere;            // 0x2FDC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockFieldParticlesParamName_Color;                    // 0x2FE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundParticlesParamName_Orientation;                     // 0x2FEC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x2FF4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              LavaDamageTypes;                                          // 0x2FF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BeamEndPointInterpSpeed_CarriedChar;                      // 0x3008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamEndPointInterpSpeed_BeamGrabbingChar;                 // 0x300C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastValidBeamCharLocation;                                // 0x3010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x301C(0x0004) MISSED OFFSET
	double                                             LastBeamBlockedStartTime;                                 // 0x3020(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamBlockerTraceCapsuleRadiusMult;                        // 0x3028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Structures_Inner;                    // 0x302C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Pawns_FalloffMax;                    // 0x3030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionDamage_Structures_FalloffMax;               // 0x3034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionImpulse_FalloffMax;                         // 0x3038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrashExplosionInnerRadiusMeshBoundsMult;                  // 0x303C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Crashing;                                           // 0x3040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x3041(0x0003) MISSED OFFSET
	struct FVector2D                                   BasedCharCameraInterpSpeedRange;                          // 0x3044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_Landed;                                 // 0x304C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_Crashing;                               // 0x3058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Crashing;                           // 0x3064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_Hovering;                    // 0x3068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_Flying;                      // 0x3074(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffCameraOffset_HoverState_FreeFall;                    // 0x3080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_LookingForGround;                   // 0x308C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Hovering;                           // 0x3090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasedCharCameraInterpSpeedMult;                           // 0x3094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasedCharCameraInterpSpeedMult_Fast;                      // 0x3098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x309C(0x0004) MISSED OFFSET
	double                                             LastSkiffTargetingPressedTime;                            // 0x30A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredInputHoldTime_StartReeling;                       // 0x30A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundParticlesParamName_SpawnRate;                       // 0x30AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GroundParticlesSpawnRateRanges;                           // 0x30B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundParticlesParamName_SpawnVelocity;                   // 0x30BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadStartFlyingUpRequiredLandPressedTime;              // 0x30C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkiffReplicatedAcceleration;                              // 0x30C8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasSkiffDemolished;                                      // 0x30D4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x30D5(0x0003) MISSED OFFSET
	float                                              CrashDamage;                                              // 0x30D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RiderUnboardSocketName;                                   // 0x30DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HoverTraceIntervalRange_Flying;                           // 0x30E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_Flying_MaxFlyHeight;                             // 0x30EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingRotationRateMult;                                   // 0x30F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMaxSpeedMult;                                       // 0x30F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Flying;                             // 0x30F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x30FC(0x0004) MISSED OFFSET
	class UClass*                                      SkiffHudWidgetClass;                                      // 0x3100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 SpawnedSkiffHudWidget;                                    // 0x3108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseHUDWidgetDelay;                                      // 0x3110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSkiffWidgetHUD;                                       // 0x3114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x3115(0x0003) MISSED OFFSET
	float                                              BeamRetractSpeed_RunMult;                                 // 0x3118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamMovementSpeed_RunMult;                                // 0x311C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamRetracting_Enemy_RunMult;                    // 0x3120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamMoving_RunMult;                              // 0x3124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelCost_BeamRetracting_Friendly_RunMult;                 // 0x3128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x312C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            CurrentBeamHighlightedChar;                               // 0x3130(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamFlashDuration;                                        // 0x3138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBeamFlashing;                                          // 0x313C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x313D(0x0003) MISSED OFFSET
	struct FName                                       BeamTargetingParticlesParamName_EndPoint;                 // 0x3140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 HudElement_Altimeter;                                     // 0x3148(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSkiffWantsToRun;                                         // 0x3298(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x3299(0x0003) MISSED OFFSET
	float                                              StrafeThrustersScaleInterpSpeed;                          // 0x329C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafeThrusterVfxScale_RunMult;                           // 0x32A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafeThrusterVfxScale_Base;                              // 0x32A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowHoverTraceHitsBelowUpAngleDelta;                     // 0x32A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x32AC(0x0004) MISSED OFFSET
	class USoundCue*                                   SFX_ThrusterActivated_Hover;                              // 0x32B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_ThrusterActivated_Movement;                           // 0x32B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Demolished;                                // 0x32C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Landed;                          // 0x32C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Midair;                          // 0x32D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffDeath_Destroyed_Crashed;                         // 0x32D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_SkiffImpact;                                          // 0x32E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_TakeoffThrustersSound_Success;                        // 0x32E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_TakeoffThrustersSound_Fail;                           // 0x32F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SFX_BeamLoop_Searching;                                   // 0x32F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SFX_BeamLoop_GrabbingChar;                                // 0x3300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SFX_BeamLoop_ManipulatingChar;                            // 0x3308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SFX_BeamLoop_CharDocked;                                  // 0x3310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_Beam_Fire_Success;                                    // 0x3318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_Beam_Fire_Fail;                                       // 0x3320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_WingTransform;                                        // 0x3328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_Beam_ReleaseChar;                                     // 0x3330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_BeamTurret_Open;                                      // 0x3338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SFX_BeamTurret_Close;                                     // 0x3340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWingsDown;                                               // 0x3348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidRearThrusterBurst_Start;                              // 0x3349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidRearThrusterBurst_Run;                                // 0x334A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x1];                                       // 0x334B(0x0001) MISSED OFFSET
	float                                              HoverThrustersScaleInterpSpeed;                           // 0x334C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_HoverSkiffThrusterData>      CurrentThrustersData;                                     // 0x3350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BackThrustersScaleInterpSpeed;                            // 0x3360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x3364(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    SpawnedDinoLandingIndicator;                              // 0x3368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DinoLandingIndicatorParticleTemplate;                     // 0x3370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverStrengthRatioExponent;                               // 0x3378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringAcceleration_RunMult;          // 0x337C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingAcceleration_RunMult;           // 0x3380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalVelocityFuelMult_Up;                              // 0x3384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalVelocityFuelMult_Down;                            // 0x3388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_MAX_BeamCamera;       // 0x338C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingVelocity_MAX_BeamCamera;        // 0x3390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidBeamCharLoc;                                     // 0x3394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x3395(0x0003) MISSED OFFSET
	float                                              CameraInterpSpeedMult_CarriedChar;                        // 0x3398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoDropIndicatorBaseScaleDistFromCamera;                 // 0x339C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoDropIndicator_MaxArcTraceDist;                        // 0x33A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Retracting_Enemy;                               // 0x33A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Retracting_Friendly;                            // 0x33B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Idle;                                           // 0x33C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Manipulating;                                   // 0x33D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeamColor_Locked_Enemy;                                   // 0x33E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HideThrusterWhenBeamCameraWithinRadius;                   // 0x33F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffLandingHeightRatioCurveExponent;                     // 0x33F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredFuel_ForTakeoff;                                  // 0x33FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredFuel_ForBeamGrab_Enemy;                           // 0x3400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredFuel_ForBeamGrab_Friendly;                        // 0x3404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsConsumingFuel;                                         // 0x3408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x3409(0x0003) MISSED OFFSET
	struct FName                                       AllowRidingWithinRadiusSocketName;                        // 0x340C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredRiderDistFromSeatToMount;                         // 0x3414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasCameraReachedBeamZ;                                   // 0x3418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x3419(0x0003) MISSED OFFSET
	float                                              BeamCameraTraceRadius;                                    // 0x341C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedBeamCaptureParticles_Middle;                       // 0x3420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamCaptureParticleTemplate_Middle;                       // 0x3428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamGrabParticlesParamName_SphereScale_Glow;              // 0x3430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeamGrabParticles_SphereScaleStartSize_Glow;              // 0x3438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeamGrabParticles_SphereScaleStartSize_Sphere;            // 0x3444(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastBeamCharRelativeLocation;                             // 0x3450(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasInitCarriedChar;                                      // 0x345C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x345D(0x0003) MISSED OFFSET
	float                                              BeamRetractSpeed_Players;                                 // 0x3460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamRetractSpeed_RunMult_Players;                         // 0x3464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastUpdatedBeamCharFrame;                                 // 0x3468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDeathDropInventoryLifetime;                          // 0x346C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              SkiffWhitelistedBuffClasses;                              // 0x3470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSkiffRepairModeActive;                                   // 0x3480(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x3481(0x0003) MISSED OFFSET
	float                                              AutoRepair_MaxRepairHealthPercentage;                     // 0x3484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairCostToHealthMult;                        // 0x3488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_Hover;                     // 0x348C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_Landed;                    // 0x3490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RepairFuelCost_Tick_RepairMode;                // 0x3494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAutoRepairFuelCost;                                // 0x3498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_HUD_TextOffsetY;                               // 0x349C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_HUD_DrawScale;                                 // 0x34A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x34A4(0x0004) MISSED OFFSET
	class FString                                      AutoRepair_HUD_MultiUseString_Activate;                   // 0x34A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_MultiUseString_Deactivate;                 // 0x34B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AutoRepair_HUD_CriticalHealthThreshold;                   // 0x34C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRepair_RequiredFuelForRepairMode;                     // 0x34CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSkiffRepairModeActivateTime;                          // 0x34D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSkiffRepairModeDeactivateTime;                        // 0x34D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventTakeoffPostRepairModeInterval;                     // 0x34E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairModeWarmUpInterval;                                 // 0x34E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      AutoRepair_HUD_FloatingTextString_CriticalDamage;         // 0x34E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_SomeDamage;             // 0x34F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_RepairModeActive;       // 0x3508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_ActivatingRepairMode;   // 0x3518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AutoRepair_HUD_FloatingTextString_DeactivatingRepairMode; // 0x3528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AutoRepair_HUD_RepairTextPaddingY;                        // 0x3538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AutoRepair_HUD_FloatingTextColor_RepairMode;              // 0x353C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x354C(0x0004) MISSED OFFSET
	TArray<float>                                      FuelSubstituteItemConversionRates;                        // 0x3550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TakeoffBasedDragWeightLimit;                              // 0x3560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedFlyingVelocityDeltaTime;                        // 0x3564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSkiff_PrintFlyingVelocity;                          // 0x3568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x3569(0x0003) MISSED OFFSET
	struct FRotator                                    BeamCharStartRotOffset;                                   // 0x356C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 SpawnedAttachedToBeamBuff;                                // 0x3578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFinishedTakeoff;                                      // 0x3580(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x3581(0x0003) MISSED OFFSET
	struct FRotator                                    CachedLandedSkiffRootRotationOffset;                      // 0x3584(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class APrimalBuff*                                 SpawnedAutoRepairBuff;                                    // 0x3590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RepairModeClientBuffClass;                                // 0x3598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFX_HealthPercentage_StartBelow;                     // 0x35A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFX_HealthPercentage_Low;                            // 0x35A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageFX_HealthPercentage_Critical;                       // 0x35A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x4];                                       // 0x35AC(0x0004) MISSED OFFSET
	class UParticleSystem*                             DamageFX_Spark_Particles;                                 // 0x35B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DamageFX_Spark_Sound;                                     // 0x35B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DamageFX_Critical_Particles;                              // 0x35C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   DamageFX_Critical_Sound;                                  // 0x35C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDamageFxTime;                                         // 0x35D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFxInterval;                                        // 0x35D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x4];                                       // 0x35DC(0x0004) MISSED OFFSET
	TArray<struct FName>                               DamageFX_SparkSocketNames;                                // 0x35E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   DamageFX_ParticleSpawnIntervalMaxRange;                   // 0x35F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_SparkSpawnRateRange;                             // 0x35F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_FlameSpawnRateRange;                             // 0x3600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_SparkSpawnRateParamName;                         // 0x3608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_FireSpawnRateParamName;                          // 0x3610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_ParticleSpawnIntervalMinRange;                   // 0x3618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_Smoke_SizeRange;                                 // 0x3620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_SmokeSizeParamName;                              // 0x3628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkiffAboveWater;                                         // 0x3630(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x3631(0x0003) MISSED OFFSET
	float                                              TargetHoverHeight_Min_AboveWater;                         // 0x3634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedBeamCharOffset;                                     // 0x3638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x363C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            LastCachedOffsetBeamChar;                                 // 0x3640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRepairHealthPerSec;                                // 0x3648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x364C(0x0004) MISSED OFFSET
	double                                             LastGamepadLandInputPressedTime;                          // 0x3650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingInputDoubleTapWindow;                              // 0x3658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x365C(0x0004) MISSED OFFSET
	class UClass*                                      LastConsumedAltFuelItemClass;                             // 0x3660(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTotalAltFuel;                                      // 0x3668(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x366C(0x0004) MISSED OFFSET
	class USoundBase*                                  HeadlightSFX_On;                                          // 0x3670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HeadlightSFX_Off;                                         // 0x3678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingRepairSound;                                      // 0x3680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x3681(0x0007) MISSED OFFSET
	TArray<float>                                      RepairSound_VolumesByState;                               // 0x3688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RepairSound_PitchesByState;                               // 0x3698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   DamageFX_SparkSound_VolumeRange;                          // 0x36A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_SparkSound_PitchRange;                           // 0x36B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_Crashing_HeavyDamageSound_VolumeAndPitch;        // 0x36B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageFxActive_Severe;                                   // 0x36C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData65[0x3];                                       // 0x36C1(0x0003) MISSED OFFSET
	struct FVector2D                                   DamageFX_HeavyDamageSound_VolumeRange;                    // 0x36C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_HeavyDamageSound_PitchRange;                     // 0x36CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageFxActive_Smoke;                                    // 0x36D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x36D5(0x0003) MISSED OFFSET
	struct FVector2D                                   DamageFX_SmokeSound_VolumeRange;                          // 0x36D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DamageFX_SmokeSound_PitchRange;                           // 0x36E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_PulseSpeed;                // 0x36E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_RepairColorStrength;       // 0x36F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageMaterialOverlayParamName_RepairColor;               // 0x36F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        DamageMaterialOverlayParam_RepairColorsPerState;          // 0x3700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageMaterialOverlayParam_RepairColorStrengthPerState;   // 0x3710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DamageMaterialOverlayParam_PulseSpeedPerState;            // 0x3720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DamageMaterialOverlayParam_InterpSpeed_RepairColor;       // 0x3730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMaterialOverlayParam_InterpSpeed_RepairColorStrength;// 0x3734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMaterialOverlayParam_InterpSpeed_PulseSpeed;        // 0x3738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData67[0x4];                                       // 0x373C(0x0004) MISSED OFFSET
	class USoundBase*                                  DamageFX_FullRepairCompleteSound;                         // 0x3740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFX_CriticalDamageSocketName;                        // 0x3748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CurrentAutoRepairState;                                   // 0x3750(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x3751(0x0007) MISSED OFFSET
	double                                             LastSkiffDamagedTime;                                     // 0x3758(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffAutoRepair_PreventForTimeAfterDamage;                // 0x3760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData69[0x4];                                       // 0x3764(0x0004) MISSED OFFSET
	class FString                                      AutoRepair_HUD_FloatingTextString_TakingDamage;           // 0x3768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                AutoRepair_HUD_FloatingTextColor_TakingDamage;            // 0x3778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffDamageTimeUpdateRequiresDamageAmount;                // 0x3788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeadlightMultiUseIndex;                                   // 0x378C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairModeMultiUseIndex;                                  // 0x3790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastSkiffMoving;                                         // 0x3794(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x3795(0x0003) MISSED OFFSET
	struct FVector                                     NudgeImpulse;                                             // 0x3798(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData71[0x4];                                       // 0x37A4(0x0004) MISSED OFFSET
	double                                             LastNudgeTime;                                            // 0x37A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastLandedIKLocation;                                     // 0x37B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              HoverSlopeCheck_MaxSimTime;                               // 0x37BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HoverSlopeCheck_TotalNumSlices;                           // 0x37C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_SliceLength;                              // 0x37C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_AdditionalTraceZ;                         // 0x37C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentAverageSlopeDeltaRatio;            // 0x37CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugSkiff_HoverSlopeCheck;                              // 0x37D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x37D1(0x0003) MISSED OFFSET
	int                                                HoverSlopeCheck_CurrNumHits;                              // 0x37D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentHitPercent;                        // 0x37D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_CurrentAverageZ;                          // 0x37DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HoverSlopeCheck_CurrentAverageNormal;                     // 0x37E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHoverSlopeCheck_CurrentFoundExtremeSlope;                // 0x37EC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData73[0x3];                                       // 0x37ED(0x0003) MISSED OFFSET
	float                                              HoverHeightControl_RaisingVelocity_MAX;                   // 0x37F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_MAX;                  // 0x37F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_MAX_RunMult;          // 0x37F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingVelocity_MAX_RunMult;           // 0x37FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_RaisingVelocity_FlyingMult;            // 0x3800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverHeightControl_LoweringVelocity_FlyingMult;           // 0x3804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_MinDeltaWeight;                           // 0x3808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverSlopeCheck_DeltaWeightCurveExponent;                 // 0x380C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiffHoverZVelocityDampingRate_Up;                        // 0x3810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_TryLand;                                    // 0x3814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_Nudge;                                      // 0x3818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedNudgeInterval;                                     // 0x381C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentSkiffRootRotOffset_IK;                             // 0x3820(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FRotator                                    CurrentSkiffRootRotOffset_Hover;                          // 0x382C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UClass*                                      BeamDamageTypeClass;                                      // 0x3838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x3840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x3841(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x3850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 K2Node_CustomEvent_NewState4;                             // 0x3851(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 K2Node_CustomEvent_PreviousState2;                        // 0x3852(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 K2Node_CustomEvent_NewState3;                             // 0x3853(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x3854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x3855(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x3856(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseBeam_bCanUse;                              // 0x3857(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanSendInputRPC_bResult;                         // 0x3858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bLanding;                              // 0x3859(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x385A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x385B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x385C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFly;                                  // 0x385D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x2];                                       // 0x385E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_MoveInputs;                            // 0x3860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x386C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bLocked;                               // 0x386D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x386E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x386F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x3870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x3871(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanSendInputRPC_bResult2;                        // 0x3872(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x1];                                       // 0x3873(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_GrabRelativeLocation;                  // 0x3874(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x3880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3881(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3882(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x3883(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanSendInputRPC_bResult3;                        // 0x3884(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_ByteByte_ReturnValue;               // 0x3885(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x3886(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsCameraLocked;                        // 0x3887(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_ByteByte_ReturnValue;                  // 0x3888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x3889(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x388A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x388B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed2;                             // 0x388C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCharBeamFriendly_bResult;                      // 0x388D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x388E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x388F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x3890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x3894(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x3898(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x389C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x389D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x38A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x38AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed;                              // 0x38AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue9;                           // 0x38AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFromImpact;                           // 0x38AF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x38B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue10;                          // 0x38B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x38B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue11;                          // 0x38B3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue12;                          // 0x38B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x38B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x38B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue2;                   // 0x38B7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue13;                          // 0x38B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x38B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x2];                                       // 0x38BA(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x38BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bRelativeSpace;                        // 0x38C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x7];                                       // 0x38C9(0x0007) MISSED OFFSET
	class FString                                      K2Node_Event_InputName;                                   // 0x38D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_NewState2;                             // 0x38E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_PreviousState;                         // 0x38E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x38E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchString_CmpSuccess;                           // 0x38E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffHoverState>                K2Node_CustomEvent_newState;                              // 0x38E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue14;                          // 0x38E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x38E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowSkiffBeamInputs_bAllow;                     // 0x38E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue15;                          // 0x38E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x38E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x38EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x38EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_UpdateSyncedFuelAmount_bWasChanged;              // 0x38EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x38ED(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x38F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_WantsToFlyUp_bResult;                            // 0x38F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x38F9(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x3900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x3908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x3910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanActivateBeamCamera_bResult;                   // 0x3911(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x3912(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x5];                                       // 0x3913(0x0005) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetCurrentBeamChar_Pure_Char;                    // 0x3918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x3920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue16;                          // 0x3921(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x3922(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryBeamGrab_bSuccess;                            // 0x3923(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue17;                          // 0x3924(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryBeamGrab_bSuccess2;                           // 0x3925(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSuccess2;                             // 0x3926(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanSendInputRPC_bResult4;                        // 0x3927(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x3928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x3929(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x2];                                       // 0x392A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Get_Beam_Start_Point_LaserStartPoint;            // 0x392C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_BeamEndPoint_LaserEndPoint;                  // 0x3938(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_R;                                    // 0x3944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_G;                                    // 0x3948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_B;                                    // 0x394C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakColor_A;                                    // 0x3950(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x3954(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x3960(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x396C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            CallFunc_GetCurrentBeamChar_Pure_Char2;                   // 0x3978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x3980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x3981(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetCurrentBeamChar_Pure_Char3;                   // 0x3988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x3990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x3991(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetCurrentBeamChar_Pure_Char4;                   // 0x3998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x39A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue3;                   // 0x39A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x39A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBeamActive_bResult;                            // 0x39A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_DoubleDouble_ReturnValue;                // 0x39A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseBeam_bCanUse2;                             // 0x39A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanSendInputRPC_bResult5;                        // 0x39A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x1];                                       // 0x39A7(0x0001) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetCurrentBeamChar_Pure_Char5;                   // 0x39A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x39B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSuccess;                              // 0x39B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGameInputAllowed_ReturnValue;                  // 0x39B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x1];                                       // 0x39B3(0x0001) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x39B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x39B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewState;                             // 0x39B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue18;                          // 0x39BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x39BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue4;                   // 0x39BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x39BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x2];                                       // 0x39BE(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Percent;                               // 0x39C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue19;                          // 0x39C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x39C5(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x39C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x39D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x39D1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x39D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x39E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue17;                       // 0x39E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFlying_ReturnValue;                            // 0x39E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewFlight;                             // 0x39E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue20;                          // 0x39E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue21;                          // 0x39E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x2];                                       // 0x39E6(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Set_Item_RefProperty;                      // 0x39E8(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x39F0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSkiff_Character_BP.TekHoverSkiff_Character_BP_C");
		return ptr;
	}


	void safely_release_carried_character();
	void STATIC_Get_Closest_Beam_Location_Not_Blocked(const struct FVector& End, struct FVector* Location);
	void ModifySkiffHorizontalInputs(const struct FVector& Input, struct FVector* NewInput);
	void GetCurrentHoverFloorZ(bool bUseAverage, bool* bValidFloor, float* FloorZ);
	void GetHoverSlopeDeltaRatio_PURE(bool bAdjustWithMax, float* Ratio);
	void GetHoverSlopeDeltaRatio(bool bAdjustWithMax, float* Ratio);
	void DoHoverSlopeCheck();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void IsSkiffRepairModeCooldownActive(bool* bResult, bool* bIsPost, float* RemainingTime);
	void IsSkiffRepairDisabledFromDamage(bool* bResult, float* RemainingTime);
	bool BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode);
	bool BPOnStopJump();
	bool BPOnStartJump();
	void BPNotifyToggleHUD(bool* bHudHidden);
	void CalculateTotalAlternateFuel(float* TotalAltFuel);
	void STATIC_GetRepairModeHudMessage(class FString* Message, struct FLinearColor* Color);
	void Tick_ManageDamageFX();
	void NetSetCachedLandedRootRotationOffset(const struct FRotator& NewOffset);
	void BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor);
	void BP_OnBasedPawnAddedNotify(class AActor** AddedActor);
	void GetFuelConversionRateForClass(class UClass* ForClass, float* Rate);
	void OnSkiffRepairModeStateChanged(bool bNewState);
	void NetSetSkiffRepairModeActive(bool bNewActive);
	void CanSkiffUseRepairMode(bool bForStart, bool* bResult);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Get_Repair_Mode_Hud_Message_PURE(class FString* Message, struct FLinearColor* Color);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Tick_ManageAutoRepair();
	bool BP_ForceAllowAddBuff(class UClass** BuffClass);
	void BlueprintPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void IsCharAttachedToSkiffMesh(class APrimalCharacter* forChar, bool* bResult);
	bool STATIC_BP_OverrideCarriedCharacterTransform(class APrimalCharacter** ForCarriedChar);
	void DestroySkiffHudWidget(bool bDestroyNow);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void GetBeamCameraCeilingZ(float* CeilingZ);
	void CanFireBeam(bool* bResult);
	void ConsumeFuel(float amount, bool MulticastFuel);
	void HasEnoughFuel(float RequiredFuel, bool* bResult);
	void TryRefillCurrentFuelUnit(bool* bSuccess);
	void HasAnyFuel(bool* bResult, float* CurrentFuel);
	void BPInventoryItemDropped(class UObject** InventoryItemObject);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void OnSkiffInventoryUpdated(class UPrimalItem* UpdatedItem);
	void BPSetupTamed(bool* bWasJustTamed);
	void DisableLevelUps();
	void BSetupDinoTameable();
	void STATIC_Tick_ShowDropDinoIndicator();
	void STATIC_SetupSkiffThrusters();
	void GetSkiffAcceleration(struct FVector* NewParam);
	void Tick_UpdateSkiffThruster(int DataIntex, struct FStruct_HoverSkiffThrusterData* WithThrusterData);
	void Tick_UpdateBeamSFX();
	void IsValidHoverTraceHit(struct FHitResult* ForHit, bool* bResult);
	void IsSkiffRunning(bool* bResult);
	void DoesSkiffWantToRun(bool* bResult);
	void BP_OnSetRunning(bool* bNewIsRunning);
	void GetCurrentBeamChar_(class APrimalCharacter** Char);
	void OnTriedBeamGrab(bool bSuccess);
	void AttachCharToBeam(class APrimalCharacter* CharToAttach, bool* bSuccess);
	void TryBeamGrab(bool* bSuccess);
	void ResetBeam();
	void CanActivateBeamCamera(bool* bResult);
	void OnReceiveSkiff2dMovementInput(float InputAxisVal, bool bRight, bool* bShouldIntercept);
	void CanUseHeadlights(bool* bResult);
	bool BPCanBeBaseForCharacter(class APawn** Pawn);
	struct FVector BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter);
	struct FVector BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	void CanHover(bool bForStart, bool* bResult);
	void BP_OnTamedOrderReceived(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void WantsToFlyUp(bool* bResult);
	bool BP_ShouldDisableBasedCharactersCameraInterpolation(class APrimalCharacter** ForBasedChar);
	void UpdateBeamCharManipulation();
	void Tick_CheckSkiffInputs();
	void UpdateSyncedFuelAmount(bool* bWasChanged);
	void GetSkiffBlockersTraceIgnoreActors(TArray<class AActor*>* IgnoreActors);
	void Tick_ManageSkiffCamera();
	void BP_OverrideBasedCharactersCameraInterpSpeed(class APrimalCharacter** ForBasedChar, float* DefaultTPVCameraSpeedInterpMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed);
	void IsPhysicsVolumeLava(class APhysicsVolume* CheckVolume, bool* bIsLava);
	void CanSkiffTryToTrulyLand(const struct FVector& WithFlyingVelocity, bool* bResult);
	void BP_OnStartLandFailed(int* ReasonIndex);
	void ResetSkiffInputs();
	void InitHeadlights();
	void ActivateSkiffBeamVfxByState(TEnumAsByte<E_HoverSkiffBeamState> NewState);
	void STATIC_Tick_ManageBeamFX(bool bForceClearAll);
	void GetCurrentBeamChar_Pure(class APrimalCharacter** Char);
	void GetEnvironmentalParticleTraceDistance(const struct FName& ForSocketName, float* traceDist);
	void ReceiveDestroyed();
	void Tick_ManageHoverGroundFX();
	void Tick_UpdateHeadlights();
	void SetHeadlightsOn(bool On);
	void ToggleHeadlights();
	void OnSkiffFailedTakeoff();
	void AllowSkiffBeamInputs(bool* bAllow);
	void SetTargetHoverHeight(float NewHeight);
	void UpdateSkiffHoverState();
	void OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState);
	void NetSetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState);
	float BP_GetCustomModifier_MaxSpeed();
	void TraceForBeamCharBlockers();
	void GetMinHoverHeight(float* MinHeight);
	void IsSkiffChangingHoverHeight(bool* bResult);
	void GetBeamCharGrabOffsetZ(float* OffsetZ);
	void OnBeamStartedGrabbingChar();
	bool BP_CanFly();
	void UpdateBeamEndPoint();
	void Tick_UpdateBeam();
	void Tick_ManageFuel();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void OnBeamCharStruggle();
	void OnBeamCharBreakFree();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	float BP_OverrideTerminalVelocity();
	void STATIC_DoThrusterEngineBurst(class UParticleSystem* OverrideBurstParticle, bool bPreventAutoScaling, class USoundCue* OverrideBurstSound, const struct FVector2D& OverrideVolumeAndPitch, TArray<class UParticleSystemComponent*>* ForThrusterParticles);
	void STATIC_KillSkiff();
	void OnSkiffCrash(bool bFromImpact);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void Tick_Crashing();
	void OnSkiffStartedCrashing();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void SetBeamCameraActive(bool bActive);
	void OnBeamStartMoving();
	void OnBeamStartRetracting();
	void OnBeamTurretOpened();
	void OnStartOpeningBeam(bool bReset);
	void UpdateOwningClientReplicatedInputs();
	void SetSkiffMovementInputAxisValue(int Axis, float Newval);
	void OnBeamLocked();
	void GetBeamEndPointRelative(struct FVector* LaserEndPoint);
	void GetBeamStartPointRelative(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint);
	void OnBeamGrabbedChar(const struct FVector& GrabbedCharLocation);
	bool BPAllowCarryCharacter(class APrimalCharacter** checkCharacter);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void IsBeamBeingManipulated(bool* IsBeamMoving);
	bool BP_InterceptMoveRight(float* AxisValue);
	bool BP_InterceptMoveForward(float* AxisValue);
	void IsMovingAllyWithBeam(bool* bResult);
	struct FVector BPModifyRightDirectionInput(struct FVector* directionInput);
	bool BPShouldLimitRightDirection();
	bool BP_AllowWalkableSlopeOverride(class UPrimitiveComponent** ForComponent);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void STATIC_Tick_ManageThrusterFX();
	void STATIC_SetThrustersActive(bool bNewActive);
	void OnSkiffSetFlight(bool bFly);
	void BPOnSetFlight(bool* bFly);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void STATIC_DoSkiffHoverTraces(bool bForceTraces);
	void OnLanded(struct FHitResult* Hit);
	void OnSkiffLandingStageChanged(bool bLanding);
	void BP_OnStartLandingNotify();
	void IsCharBeamFriendly(class APrimalCharacter* forChar, bool* bResult);
	void OnStartClosingBeamTurret();
	void CanSendInputRPC(bool* bResult);
	void OnSkiffBeamStateChanged(TEnumAsByte<E_HoverSkiffBeamState> NewState, TEnumAsByte<E_HoverSkiffBeamState> PreviousState);
	void NetSetSkiffBeamState(TEnumAsByte<E_HoverSkiffBeamState> NewState);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void IsRetractBeamPressed(bool* bResult);
	void IsShootBeamPressed(bool* bResult);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	float BP_GetCustomModifier_RotationRate();
	struct FVector STATIC_BPOverrideFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	struct FLinearColor BPGetCrosshairColor();
	void IsBeamTurretOpening(bool* bResult);
	void IsBeamActive(bool bIncludeActivating, bool* bResult);
	void Is_Beam_Moving(bool* IsBeamMoving);
	void IsBeamRetracting(bool* bResult);
	void CanBeamLock(bool* bResult);
	void Tick_BeamSearch();
	void Can_Instantly_Grab_Character(class APrimalCharacter* Character, bool* CanInstantlyGrab);
	void CanMoveBeam(bool bForStart, bool* bResult);
	void Get_Beam_StartPointExternal(bool bAdjustForCarriedChar, struct FVector* BeamStartPoint);
	void GetBeamEndPoint_External(struct FVector* BeamEndPoint);
	void Update_Beam_Visuals();
	void CanLookForTargets(bool* canLook);
	void CanUseBeam(bool bForStart, bool* bCanUse);
	bool BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void GetCharacterAttachedToBeam(class APrimalCharacter** theChar, bool* bHasCharAttached);
	void SetForceSkiffDescend(bool Enable);
	void STATIC_SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace, bool bReplicate);
	void STATIC_TraceForBeamEndPoint(struct FVector* NewBeamEnd, bool* bHitObstacle);
	void Tick_ManipulateBeam();
	void Get_BeamEndPoint(struct FVector* LaserEndPoint);
	void Update_Beam_Particles_End_Point();
	void Find_BeamTarget(class APrimalCharacter** foundPawn);
	void StopHovering();
	void SetTimerIntervals(bool Fast);
	bool BPShouldLimitForwardDirection();
	struct FVector BPModifyForwardDirectionInput(struct FVector* directionInput);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void Update_Beam_BoneRotation(const struct FVector& NewEndPoint, bool Reset, const struct FRotator& ResetRotation);
	void STATIC_Get_Beam_Start_Point(bool bAdjustForCarriedChar, struct FVector* LaserStartPoint);
	void OnBeamStartSearching();
	void CalculateBeamViewTracePoints(bool bUseCurrentBeamLength, struct FVector* ViewStart, struct FVector* ViewEnd);
	void ClearAllBeamChars(bool bOnlyClearBeamingChar);
	void CanBeamGrabCharacter(class APrimalCharacter* forChar, bool bPreventTraces, bool* bResult);
	void BPTimerServer();
	void BPTimerNonDedicated();
	void OnStartActivatingBeam();
	void OnCloseBeamTurret();
	void UserConstructionScript();
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue);
	void InterceptInputEvent(class FString* InputName);
	void Server_RequestBraking();
	void ReceiveBeginPlay();
	void BPUnstasis();
	void Multi_OnSkiffBeamStateChanged(TEnumAsByte<E_HoverSkiffBeamState> NewState, TEnumAsByte<E_HoverSkiffBeamState> PreviousState);
	void Server_SetSkiffBeamState(TEnumAsByte<E_HoverSkiffBeamState> NewState);
	void Timer_DoActivateBeam();
	void Timer_DoDeactivateBeam();
	void Multi_OnStartSkiffLanding(bool bLanding);
	void Multi_OnSkiffSetFlight(bool bFly);
	void Server_SyncMovementInputs(const struct FVector& MoveInputs);
	void Server_SetBeamCameraLockState(bool bLocked);
	void Multi_OnBeamGrabCharacter(const struct FVector& GrabRelativeLocation);
	void Timer_DoOpenBeam();
	void Multi_ToggleCameraLocked(bool IsCameraLocked);
	void Server_OnFireInputPressed(bool bPressed);
	void Server_OnTargetingInputPressed(bool bPressed);
	void Multi_OnSkiffStartedCrashing();
	void Multi_OnSkiffCrash(bool bFromImpact);
	void DestroySkiff();
	void CrashTimeout();
	void Multi_OnBeamStartGrabbingChar();
	void Multi_SetBeamCharLocation(const struct FVector& Location, bool bRelativeSpace);
	void Multi_OnSkiffHoverStateChanged(TEnumAsByte<E_HoverSkiffHoverState> NewState, TEnumAsByte<E_HoverSkiffHoverState> PreviousState);
	void Server_SetSkiffHoverState(TEnumAsByte<E_HoverSkiffHoverState> NewState);
	void Multi_OnSkiffFailedTakeoff();
	void Server_ToggleHeadlights();
	void Multi_ToggleHeadlights();
	void Server_TryBeamGrab();
	void Multi_OnTriedBeamGrab(bool bSuccess);
	void FlashBeam();
	void Server_OnTriedBeamGrab(bool bSuccess);
	void Multi_OnSkiffRepairModeStateChanged(bool bNewState);
	void Multi_SyncFuelPercent(float Percent);
	void Server_SetSkiffFlight(bool NewFlight);
	void Server_StartSkiffLanding();
	void ExecuteUbergraph_TekHoverSkiff_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
