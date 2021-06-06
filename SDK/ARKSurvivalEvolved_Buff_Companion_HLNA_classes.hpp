#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Companion_HLNA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C
// 0x55C0 (0x66B0 - 0x10F0)
class ABuff_Companion_HLNA_C : public ABuff_Companion_BaseBP_C
{
public:
	class UParticleSystemComponent*                    ParticleSystemThrustersLeftRight;                         // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemThrustersIdle;                              // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemThrustersFwd;                               // 0x1100(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemBubbles;                                    // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Scanning_ParticleSystemComponent;                         // 0x1110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MeshBodyLocation;                                         // 0x1118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ScanAudioComponent;                                       // 0x1120(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fixed_orientation_timeline__Direction_1331766D43686C4FC74B1F9D034C7ED3;// 0x1128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1129(0x0007) MISSED OFFSET
	class UTimelineComponent*                          fixed_orientation_timeline;                               // 0x1130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    delay_before_intro_shatter__Direction_E2C184154AA60B3BAA9DAA849D72EE0D;// 0x1138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1139(0x0007) MISSED OFFSET
	class UTimelineComponent*                          delay_before_intro_shatter;                               // 0x1140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_7E09B6D84A707742267EED9CB48F51B6;   // 0x1148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1149(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x1150(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_6_NewTrack_0_66D724D5415E024F5AE7A1A7BA932F52;   // 0x1158(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_6__Direction_66D724D5415E024F5AE7A1A7BA932F52;   // 0x115C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x115D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_7;                                               // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_NewTrack_0_6B52F643432B23481CC770B9B5C2A90D;   // 0x1168(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_6B52F643432B23481CC770B9B5C2A90D;   // 0x116C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x116D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x1170(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_F5DEB8A64FF6E9F1FAFF80A6D2E2EACA;   // 0x1178(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1179(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x1180(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_1_FE1D884C42EF8A6DE37907BD43FB246E;   // 0x1188(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_FE1D884C42EF8A6DE37907BD43FB246E;   // 0x118C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x118D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x1190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_alpha_71C86B7A4C8EAD62EBB76CA47B61F709;        // 0x1198(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_71C86B7A4C8EAD62EBB76CA47B61F709;   // 0x119C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x119D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x11A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProjectFromScreenPercents_Focused;                        // 0x11A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectFromScreenDist_Focused;                            // 0x11B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Idle;                                             // 0x11B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Focused;                                          // 0x11B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrTargetZOffset;                                        // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetZ_Idle;                                             // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetZ_Focused;                                          // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastOrbitNormal;                                          // 0x11C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AcceptableOrbitAngleRange_Current;                        // 0x11D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AcceptableOrbitAngleRange;                                // 0x11DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerOrbitRadius;                                        // 0x11E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeOfScreenAngle;                                        // 0x11E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TestMeshRotOffset;                                        // 0x11EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitOffsetFromPlayerZ;                                   // 0x11F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPlayerLocation;                                       // 0x11FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PretendCompanionWorldLoc;                                 // 0x1208(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastPlayerRotation;                                       // 0x1214(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagDistance;                                  // 0x1220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagDistance_AttachedToCamera;                 // 0x1224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerVelocityLag_BaseSpeed;                              // 0x1228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCompanionRootWorldZ;                               // 0x122C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultEventLocationInterpSpeed;                          // 0x1230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFakeVelocityOffset;                                   // 0x1234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagInterpSpeed;                               // 0x1240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ProjectFromScreenPercents_Monologue;                      // 0x1244(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectFromScreenDist_Monologue;                          // 0x124C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerOrbitRadius_MonologueTPV;                           // 0x1250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastProjectedRelativeLoc;                                 // 0x1254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverProjectionInterpSpeed;                               // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastMeshLocation;                                         // 0x1264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MeshVelocity;                                             // 0x1270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x127C(0x0004) MISSED OFFSET
	class UAnimMontage*                                EquipMontage;                                             // 0x1280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEarsDown;                                                // 0x1288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1289(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Salute;                               // 0x1290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Sorry;                                // 0x12A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Thank;                                // 0x12B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Wave;                                 // 0x12C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Laugh;                                // 0x12D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Yes;                                  // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_No;                                   // 0x12F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Taunt;                                // 0x1300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Cheer;                                // 0x1310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Friendly;                             // 0x1320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           EmoteSounds_Unlockable;                                   // 0x1330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Turkey;                               // 0x1340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Snowball;                             // 0x1350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Heart;                                // 0x1360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Evil;                                 // 0x1370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_LightenUp;                            // 0x1380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Flex_2;                               // 0x1390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Flex_3;                               // 0x13A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                PlayerDiedMontage;                                        // 0x13B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitDirInterpSpeed;                                      // 0x13B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRelativeOffset;                                     // 0x13BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRelLocFPV_InterpSpeed;                              // 0x13C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Monologue;                                        // 0x13CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PretendCompanionWorldLocInterpSpeed;                      // 0x13D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Idle;                                            // 0x13D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Focused;                                         // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Monologue;                                       // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Focused_FPV;                                     // 0x13E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Focused_FPV;                                      // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockHLNaSphereRadius_FPV;                                // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHLNA_CompactMode;                                        // 0x13EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x13ED(0x0003) MISSED OFFSET
	double                                             LastWantsToCompactTime;                                   // 0x13F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToCompact;                                          // 0x13F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x13F9(0x0003) MISSED OFFSET
	float                                              TimeAfterReactionEndsToCompact;                           // 0x13FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CompactVFX_In;                                            // 0x1400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompactSFX_In;                                            // 0x1408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompactSFX_Out;                                           // 0x1410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CompactVFX_Out;                                           // 0x1418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCompact;                                               // 0x1420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1421(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_SayHello;                                        // 0x1428(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsPreparingMassTeleport;                                 // 0x14C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x14C9(0x0007) MISSED OFFSET
	double                                             LastMassTeleportStartTime;                                // 0x14D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportTriggersAfterTime;                            // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportChargeDuration;                               // 0x14DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    CurrentMassTeleportChars;                                 // 0x14E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MassTeleportGroundTraceHalfHeight;                        // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportAreaRadius;                                   // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MassTeleport_MaxCharCount;                                // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MassTeleport_MaxPlayerCount;                              // 0x14FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTeleportDestination                        CurrentTeleportDestination;                               // 0x1500(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     MassTeleportStartLocation;                                // 0x1528(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedTeleportWaitTime;                               // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleport_TargetLocOffsetZ;                            // 0x1538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanMonologueWithinOrbitRadiusMult;                        // 0x153C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                last_selected_desired_teleportation_direction_index;      // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                last_selected_desired_teleportation_region;               // 0x1544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_teleport;                                           // 0x1548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x1549(0x0007) MISSED OFFSET
	class UParticleSystem*                             VFX_BeamToChars;                                          // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            TeleportingCharsVFX;                                      // 0x1558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             VFX_TeleportFailed;                                       // 0x1568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TeleportFailed;                                     // 0x1570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VFX_TeleportTriggered;                                    // 0x1578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CleanUpVfxDuration;                                       // 0x1580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1584(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Teleport_Sphere_Emitter_Reference;                        // 0x1588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Idle_MIN;                             // 0x1590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Idle_MAX;                             // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_FlyingToPoint;                        // 0x1598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Focused;                              // 0x159C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed;                                           // 0x15A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Monologue;                            // 0x15A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_OrbitingPoint;                        // 0x15A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_ADS;                                  // 0x15AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Focused_FPV;                          // 0x15B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitDirInterpSpeed_ADS;                                  // 0x15B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Focused;                                   // 0x15B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Monologue;                                 // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleport_TeleportDuration;                            // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Custom;                               // 0x15C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Custom;                                    // 0x15C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTeleportLocationInterpSpeed;                      // 0x15CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_StartScan;                              // 0x15D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Finished_Scan_Dispatcher;                                 // 0x1670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      HexagonTradeTemplate;                                     // 0x1680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalUI*                                   CurrentTradeUI;                                           // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShopOpen;                                               // 0x1690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x1691(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            HLNA_Materials_for_Fresnel_or_Other_Purpose;              // 0x1698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       AbleToBePurchased;                                        // 0x16A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Teleport_Begin;                                  // 0x16B8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_JustAboutToTeleport;                    // 0x1758(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Seconds_Before_Teleport_When_Reaction_Plays;              // 0x17F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x17FC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_CancelledTeleport;                      // 0x1800(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PostTeleport;                           // 0x18A0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Hexagon_Absorb_Anim;                                      // 0x1940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_time_played_absorb_anim;                             // 0x1948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MassTeleportVfxActorClass;                                // 0x1950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PostMassTeleportVfxActorClass;                            // 0x1958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Detatched_Riding_Dino_Interp_Speed;                       // 0x1960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1964(0x0004) MISSED OFFSET
	class USoundBase*                                  ScanOnSFX;                                                // 0x1968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Scan_Loop_Duration;                               // 0x1970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1974(0x0004) MISSED OFFSET
	class USoundBase*                                  ScanLoopSFX;                                              // 0x1978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ScanOffSFX;                                               // 0x1980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Scan_Loop_VFX_Duration;                           // 0x1988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x198C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Default_Scan_Finish_Reaction;                             // 0x1990(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Player_Died_Reaction;                                     // 0x1A30(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Begin_Play_Reaction;                                      // 0x1AD0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Leech;                                      // 0x1B70(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Psychadelic;                                // 0x1C10(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Grappled_By_Spider;                         // 0x1CB0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Bolad;                                      // 0x1D50(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Frozen;                                     // 0x1DF0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_On_Fire;                                    // 0x1E90(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Handcuffed;                         // 0x1F30(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Starving;                           // 0x1FD0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Thirsty;                            // 0x2070(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_No_Air;                             // 0x2110(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Low_Stamina;                        // 0x21B0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Almost_Unconscious;                 // 0x2250(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Low_Health;                         // 0x22F0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Asleep;                             // 0x2390(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_IndoorsAfterHavingBeenGone;         // 0x2430(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Starving;                       // 0x24D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Thirsty;                        // 0x2570(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_No_Air;                         // 0x2610(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_LowStamina;                     // 0x26B0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Almost_Unconscious;             // 0x2750(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Low_Health;                     // 0x27F0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Interval_to_check_for_various_possible_world_reactions;   // 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Outside_Recently_Reaction_Check;                 // 0x2894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Inside_Recently_Reaction_Check;                  // 0x2895(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x2896(0x0002) MISSED OFFSET
	struct FVector                                     Recent_Inside_Location_for_Travel_Reaction;               // 0x2898(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x28A4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_PlayerStatus_Traveling;                          // 0x28A8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              distance_to_check_whether_the_player_is_traveling_from_the_last_indoors_location;// 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity_at_which_the_boost_reaction_plays;               // 0x294C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_PlayerStatus_BoostLaunch;                        // 0x2950(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                              Leech_Buff_Class_Names;                                   // 0x29F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Psychadelic_Buff_Class_Names;                             // 0x2A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Poison_Buff_Class_Names;                                  // 0x2A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Grappled_Buff_Class_Names;                                // 0x2A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Bola_d_Buff_Class_Names;                                  // 0x2A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Frozen_Buff_Class_Names;                                  // 0x2A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Enflamed_Buff_Class_Names;                                // 0x2A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              XP_Buff_Class_Names;                                      // 0x2A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_BonusXP;                            // 0x2A70(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Checked_Buffs_Once_During_This_Reaction_Period;       // 0x2B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x2B11(0x0007) MISSED OFFSET
	double                                             Last_Time_Try_Check_FIre_Reaction;                        // 0x2B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Combat_FriendlyFire;                             // 0x2B20(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Combat_DamagedEnemy;                             // 0x2BC0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Combat_KilledEnemy;                              // 0x2C60(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               debug_enable_immediate_reactions;                         // 0x2D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2D01(0x0003) MISSED OFFSET
	float                                              Recent_Damage_Taken;                                      // 0x2D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Threshold_Before_Reacting_To_Heavy_Damage_Taken;   // 0x2D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2D0C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Combat_TookHeavyDamage;                          // 0x2D10(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Last_Checked_Health;                                      // 0x2DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x2DB4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Combat_DamagedCreatureAlmostDead;                // 0x2DB8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              target_health_reaction_will_play_if_target_has_max_health_above_this_value;// 0x2E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              target_health_reaction_will_play_if_target_gets_current_health_under_this_value;// 0x2E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last_Time_Played_Monologue;                               // 0x2E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Currently_In_Face_Speed_Monologue;                        // 0x2E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_increment_threshold_lowest;       // 0x2E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_increment_threshold_low;          // 0x2E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_lowest_increment;                 // 0x2E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_low_increment;                    // 0x2E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_med_increment;                    // 0x2E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                reaction_timer_settings_min_seconds;                      // 0x2E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                reaction_timer_settings_max_seconds;                      // 0x2E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_min_value;                // 0x2E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_max_value;                // 0x2E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_increment;                // 0x2E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmoteParticleScale;                                       // 0x2E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EmoteRotationOffset;                                      // 0x2E98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2EA4(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     Emote_HLNAParticles;                                      // 0x2EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    EmoteComponent;                                           // 0x2EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentEyeMouthOpacity;                                   // 0x2EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeMouthOpacityInterpSpeed;                               // 0x2EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_To_Hide_Eye_During_Emote;                            // 0x2EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_flashing_from_hexagons;                                // 0x2ECC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2ECD(0x0003) MISSED OFFSET
	TArray<struct FHLNALocalizedAudioEntry>            HLNA_localized_emote_audio;                               // 0x2ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Poop;                                            // 0x2EE0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_EquippedLowDurabilityWeapon;                // 0x2F80(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             Last_time_tried_to_react_to_equipping_a_low_durability_weapon;// 0x3020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstThatchStructure;                // 0x3028(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstJumpPad;                        // 0x30C8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstOceanPlatform;                  // 0x3168(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstPressurePlate;                  // 0x3208(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstFishingNet;                     // 0x32A8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstMiningDrill;                    // 0x3348(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstShoulderCannon;                 // 0x33E8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekGrenadeLauncher;             // 0x3488(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekCruiseMissile;               // 0x3528(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekAlarm;                       // 0x35C8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekClaws;                       // 0x3668(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstHoverSkiff;                     // 0x3708(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstBigTurtle;                        // 0x37A8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstBogSpider;                        // 0x3848(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstSpaceWhale;                       // 0x38E8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstLavaLizard;                       // 0x3988(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstShapeShifter;                     // 0x3A28(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstRex;                              // 0x3AC8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstRaptor;                           // 0x3B68(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstDodo;                             // 0x3C08(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedCarnivore;                             // 0x3CA8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedHerbivore;                             // 0x3D48(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPlayingInitialSpawnIntroAnim;                           // 0x3DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x3DE9(0x0003) MISSED OFFSET
	struct FVector                                     Initial_Spawn_Intro_Anim_Loc_Offset;                      // 0x3DEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Intro_World_Rig_Class;                                    // 0x3DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Intro_VR_World_Actor_Class;                               // 0x3E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x8];                                       // 0x3E08(0x0008) MISSED OFFSET
	struct UObject_FTransform                          Intro_World_Rig_Transform_Offset;                         // 0x3E10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_Anim_Timeout;                                       // 0x3E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x3E44(0x0004) MISSED OFFSET
	class AActor*                                      Intro_World_Rig_Ref;                                      // 0x3E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Intro_VR_World_Actor_Ref;                                 // 0x3E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Intro_HLNA_Anim;                                          // 0x3E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Off_Mount_Recently_Reaction_Check;               // 0x3E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x3E61(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Dino_RecentlyRodeOn;                             // 0x3E68(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_LeveledUp;                                  // 0x3F08(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_Died;                                       // 0x3FA8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Recent_Mount_Level_to_Check_For_Level_Up;                 // 0x4048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x404C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Previous_HLNA_Environmental_Reaction;                     // 0x4050(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Initial_Spawn_Anim;                            // 0x40F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x40F1(0x0003) MISSED OFFSET
	struct FVector                                     last_checked_player_location_for_idle_reaction;           // 0x40F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Swamp_Idle;                                      // 0x4100(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Lunar_Idle;                                      // 0x41A0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Ocean_Idle;                                      // 0x4240(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Arctic_Idle;                                     // 0x42E0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Volcanic_Idle;                                   // 0x4380(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Generic_Idle;                                    // 0x4420(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedTurret;                              // 0x44C0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedTeleporter;                          // 0x4560(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedReplicator;                          // 0x4600(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedSmithy;                              // 0x46A0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedCampfire;                            // 0x4740(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedGrill;                               // 0x47E0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Post_Initial_Spawn_HLNA_Reaction;              // 0x4880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x4881(0x0007) MISSED OFFSET
	class UClass*                                      HLNA_Teleport_Post_Process_Buff;                          // 0x4888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Dino_EnterSpaceWhaleBallTurret;                  // 0x4890(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      Space_Whale_Turret_Passenger_Buff;                        // 0x4930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Allowed_Time_Interval_To_Refresh_If_Items_Can_Be_Purchased;// 0x4940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x4944(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Dino_GiantTurtleSubmerged;                       // 0x4948(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      Giant_Turtle_Submerged_Buff;                              // 0x49E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Intro_Teleport_Sphere_Dynamic_Matierials;                 // 0x49F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              Intro_Teleport_Sphere_vfx_radius;                         // 0x4A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_VFX_Finish_Envelop_Duration;                        // 0x4A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_Delay_Before_Sphere_Unmask;                         // 0x4A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x4A14(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Intro_Teleport_Sphere_Dynamic_Matierial;                  // 0x4A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_force_set;                                             // 0x4A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x4A21(0x0003) MISSED OFFSET
	struct FRotator                                    post_intro_rotation_offset;                               // 0x4A24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_started_intro_shatter_vfx;                            // 0x4A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x4A31(0x0007) MISSED OFFSET
	class UClass*                                      punch_damage_type;                                        // 0x4A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_PlayerStatus_LevelUp;                            // 0x4A40(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    Intro_World_Rig_Socket_Rotation_Offset;                   // 0x4AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x4AEC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Respawn_HLNA_Anim;                                        // 0x4AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Respawn_World_Rig_Class;                                  // 0x4AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               spawn_anim_is_respawn;                                    // 0x4B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               biome_buffs;                                              // 0x4B01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x6];                                       // 0x4B02(0x0006) MISSED OFFSET
	class FString                                      CannotTeleportString;                                     // 0x4B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CannotTeleportReasonRaft;                                 // 0x4B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CannotTeleportReasonFish;                                 // 0x4B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HowToUnhideHLNAString;                                    // 0x4B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              BiomeBuffTags;                                            // 0x4B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              random_focus_vertical_offset;                             // 0x4B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              random_focus_rotation_angle;                              // 0x4B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              random_focus_height_offset_range;                         // 0x4B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              scan_orbit_randomize_interval;                            // 0x4B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_before_playing_scan_vfx;                            // 0x4B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x4B6C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Emote;                                           // 0x4B70(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        Emote_PlayerMontages;                                     // 0x4C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Poop;                                 // 0x4C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               should_be_idle;                                           // 0x4C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x4C31(0x0007) MISSED OFFSET
	class UParticleSystem*                             Scanning_VFX_particle_emitter;                            // 0x4C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystem*>                     vfx_to_disable_during_reactions;                          // 0x4C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               able_to_play_initial_movement_sfx;                        // 0x4C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x4C51(0x0003) MISSED OFFSET
	float                                              distance_threshold_for_fast_movement_speed;               // 0x4C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_medium_movement_speed;             // 0x4C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_slow_movement_speed;               // 0x4C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_resetting_ability_to_play_movement_speed;// 0x4C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x4C64(0x0004) MISSED OFFSET
	class USoundBase*                                  begin_fast_movement_sfx;                                  // 0x4C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  begin_medium_movement_sfx;                                // 0x4C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  begin_slow_movement_sfx;                                  // 0x4C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_first_respawn;                                         // 0x4C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x4C81(0x0003) MISSED OFFSET
	float                                              Multiuse_Hexagon_Gather_Refresh_Interval;                 // 0x4C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disable_ability_to_get_hexagons_from_refresh_pool_until_timer_starts;// 0x4C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x4C89(0x0003) MISSED OFFSET
	int                                                Multiuse_Hexagon_Gather_Pool_Gain_Amount;                 // 0x4C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_CollectHexagonsFromMultiusePool;                 // 0x4C90(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_CollectHexagonsFromMultiusePool_ManyHexagons;    // 0x4D30(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                amount_of_hexagons_at_which_HLNA_comments_that_you_have_a_bunch;// 0x4DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x4DD4(0x0004) MISSED OFFSET
	class FString                                      Collect_Hexagons_String;                                  // 0x4DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Completed_Missions;                               // 0x4DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Easy_Final_Boss;            // 0x4DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Med_Final_Boss;             // 0x4DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Hard_Final_Boss_MP;         // 0x4DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Missions_string;                                          // 0x4DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                total_number_of_missions;                                 // 0x4E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VR_mission_teleport_location;                             // 0x4E0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTeleportedCharacter>                SavedTeleportReturnLocations;                             // 0x4E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     NewVar;                                                   // 0x4E28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              current_desired_volume;                                   // 0x4E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Respawn_A;                                       // 0x4E38(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             current_audio_comp_reference;                             // 0x4ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHLNALocalizedAudioEntry                    Localized_Intro_Dialog;                                   // 0x4EE0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        StoredColors;                                             // 0x4EF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ColorNames;                                               // 0x4F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorNames;                                          // 0x4F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorizedColor;                                      // 0x4F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMissionType*                                Current_Intermediate_Final_Boss_Fight_Mission_Ref;        // 0x4F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMissionDispatcher*                          final_boss_fight_mission_dispatcher;                      // 0x4F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_currently_trying_to_TP_to_final_boss;                  // 0x4F40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x4F41(0x0007) MISSED OFFSET
	class APrimalCharacter*                            recently_selected_remote_character_to_draw_tool_tip_for;  // 0x4F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  On_Hexagon_Purchase_Sfx;                                  // 0x4F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  hexagon_collect_sfx;                                      // 0x4F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Focused_Selected_Remote_Target_Timeout_Time;              // 0x4F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hlna_focus_selected_remote_target_range;                  // 0x4F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_moving_towards_target_to_for_remote_tooltip;           // 0x4F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_currently_scan_looping;                                // 0x4F69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       hlna_mesh_channel;                                        // 0x4F6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_time_check_if_player_was_ADS;                        // 0x4F6B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_between_environmental_reactions;                     // 0x4F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                respawn_reaction_frequency;                               // 0x4F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                death_reaction_frequency;                                 // 0x4F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hello_reaction_chance;                                    // 0x4F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              volume_fade_multiplier;                                   // 0x4F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_movement_audio_volume;                                // 0x4F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x4F84(0x0004) MISSED OFFSET
	TArray<class FString>                              teleported_player_names;                                  // 0x4F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_VR_Mission_Available;                                  // 0x4F98(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x4F99(0x0007) MISSED OFFSET
	class FString                                      Cannot_Teleport_Seated_Characters_String;                 // 0x4FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxFinalBossTeleportDragWeight;                           // 0x4FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x4FB4(0x0004) MISSED OFFSET
	class FString                                      Cannot_Teleport_Large_Dinos_To_Final_Boss;                // 0x4FB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Story_Glitches;                                           // 0x4FC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               awaiting_set_of_initial_spawn_intro_anim;                 // 0x4FD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_colliding_with_something;                              // 0x4FD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x2];                                       // 0x4FDA(0x0002) MISSED OFFSET
	float                                              distance_from_target_where_hlna_should_move_to;           // 0x4FDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Cannot_Teleport_Players_On_Mission;                       // 0x4FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     Amount_to_launch_player_in_space_when_they_poop;          // 0x4FF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x4FFC(0x0004) MISSED OFFSET
	class FString                                      Simple_Sound_Loading;                                     // 0x5000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Simple_Loaded_Sound;                                      // 0x5010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_spawn_was_fast_travel;                               // 0x5018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x7];                                       // 0x5019(0x0007) MISSED OFFSET
	TArray<struct FCompanionReactionData>              Reactions_PostIntro_FirstSpawnLines;                      // 0x5020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Number_of_Missions_Needed_For_Hard_Final_Boss_SP;         // 0x5030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               only_finish_intro_once;                                   // 0x5034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x5035(0x0003) MISSED OFFSET
	class FString                                      post_intro_mission_alert_text;                            // 0x5038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Post_Intro_Mission_Alert_Title;                           // 0x5048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               next_async_loaded_audio_should_play_anim_texture;         // 0x5058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x5059(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Region_TP_VFX_Colors_By_Index;                            // 0x5060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Localized_Death_Audio_Sound_Waves;                        // 0x5070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                random_sound_wave_index;                                  // 0x5080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Awaiting_Displaying_Post_Intro_Mission_Alert;          // 0x5084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Awaiting_Displaying_Post_Intro_Remote_Targeting_Alert; // 0x5085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x2];                                       // 0x5086(0x0002) MISSED OFFSET
	struct FCompanionReactionData                      last_played_reaction;                                     // 0x5088(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      test_POI_glitch_fixing_reaction_used_to_check_if_hlna_is_currently_fixing_a_POI;// 0x5128(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      post_intro_hlna_remote_target_alert_title;                // 0x51C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       post_intro_hlna_remote_target_alert_text_before_key;      // 0x51D8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       post_intro_hlna_remote_target_alert_text_after_key;       // 0x5200(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              duration_to_display_post_intro_mission_alert;             // 0x5228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_display_post_intro_remote_target_alert;       // 0x522C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      current_playing_reaction;                                 // 0x5230(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      blank_reaction;                                           // 0x52D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               was_fixing_glitch;                                        // 0x5370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_check_was_ADS;                                       // 0x5371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x2];                                       // 0x5372(0x0002) MISSED OFFSET
	struct FVector                                     saved_initial_ADS_orbit_dir;                              // 0x5374(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  current_simple_async_loaded_anim_texture;                 // 0x5380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                max_dino_count_allowed_for_vr_teleport;                   // 0x5388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x538C(0x0004) MISSED OFFSET
	class FString                                      exceeding_max_tame_count_string;                          // 0x5390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                max_player_count_allowed_for_vr_teleport;                 // 0x53A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x53A4(0x0004) MISSED OFFSET
	class FString                                      exceeding_max_player_count_string;                        // 0x53A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cant_teleport_dead_tames_string;                          // 0x53B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cant_teleport_dead_players_string;                        // 0x53C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     Gen2IntroPreTeleportPosition;                             // 0x53D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     Gen2IntroTeleportPosition;                                // 0x53E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingGen2Intro;                                       // 0x53F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalGateHasCheckGen2Intro;                               // 0x53F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x6];                                       // 0x53F2(0x0006) MISSED OFFSET
	TArray<class FString>                              Teleport_Restricted_Maps;                                 // 0x53F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    SpawnedBeamParticleRef;                                   // 0x5408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SpawnedBeamEndPointActor;                                 // 0x5410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnedBeamEndPointOffset;                                // 0x5418(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x5424(0x0004) MISSED OFFSET
	TArray<struct FName>                               Gen2IntroDisableActionMappings;                           // 0x5428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      death_vfx;                                                // 0x5438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      death_vfx_manager;                                        // 0x5440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      ReactionGearCraftedFirstExoSuit;                          // 0x5448(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionGearCraftedFirstTekBow;                           // 0x54E8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionGearCraftedFirstTekPistol;                        // 0x5588(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionGearCraftedFirstTekCropPlot;                      // 0x5628(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionGearCraftedFirstHoversail;                        // 0x56C8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstTekStrider;                         // 0x5768(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstTekWyvern;                          // 0x5808(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstMaewing;                            // 0x58A8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstSpaceDolphin;                       // 0x5948(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstLionfishlion;                       // 0x59E8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      ReactionDinoTamedFirstBrainSlug;                          // 0x5A88(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               Gen2IntroPreTeleportLevels;                               // 0x5B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FName>                               Gen2IntroSafeZoneLevels;                                  // 0x5B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCompanionReactionData>              Gen2CompanionReactions_FirstSpawn;                        // 0x5B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Gen2CompanionReactionDelay_FirstSpawn;                    // 0x5B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Cosmetic_Hlna_Is_Playing_Explorer_Note;                   // 0x5B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x5B5D(0x0003) MISSED OFFSET
	float                                              delay_before_death_sfx_play;                              // 0x5B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HLNaBlockerRadius;                                        // 0x5B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HLNaRepulseOutOfBlockerRadiusSpeed;                       // 0x5B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x5B6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x5B6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x5B6E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x5B6F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x5B70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x5B74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x5B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x5B7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x5B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x5B81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x5B82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x1];                                       // 0x5B83(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x5B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x5B88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x5B8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x5B8D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x2];                                       // 0x5B8E(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x5B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x5B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x5B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x5B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x5BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x5BA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x5BA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x5BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable8;                          // 0x5BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x5BB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x5BB5(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue8;                         // 0x5BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue3;        // 0x5BBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x5BBD(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_WithPlayerLocation;                    // 0x5BC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMassTeleportState>                    K2Node_CustomEvent_EventState2;                           // 0x5BCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x5BCD(0x0003) MISSED OFFSET
	TArray<class APrimalCharacter*>                    K2Node_CustomEvent_NewTeleportCharsList;                  // 0x5BD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x5BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x5BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x5BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x4];                                       // 0x5BEC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x5BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x5BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x5BFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x5BFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x2];                                       // 0x5BFE(0x0002) MISSED OFFSET
	int                                                CallFunc_Abs_Int_ReturnValue;                             // 0x5C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x5C04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x5C05(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x5C08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x5C0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x3];                                       // 0x5C0D(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x5C10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMassTeleportState>                    K2Node_CustomEvent_EventState;                            // 0x5C14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x5C15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x5C16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x1];                                       // 0x5C17(0x0001) MISSED OFFSET
	struct FLinearColor                                K2Node_CustomEvent_Color;                                 // 0x5C18(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x5C28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x4];                                       // 0x5C2C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item;                                  // 0x5C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x5C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x5C39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x2];                                       // 0x5C3A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable9;                          // 0x5C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x5C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x5C41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x6];                                       // 0x5C42(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item2;                                 // 0x5C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x5C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x5C51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x6];                                       // 0x5C52(0x0006) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item3;                                 // 0x5C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue9;                         // 0x5C60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x5C64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x5C65(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x5C68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x4];                                       // 0x5C74(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x5C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x5C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x5C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x5C89(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x5C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x5C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x5CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x5CA1(0x0007) MISSED OFFSET
	class UPrimalUI*                                   CallFunc_BPShowUIScene_ReturnValue;                       // 0x5CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UHexagon_Trade_UI_C*                         K2Node_DynamicCast_AsHexagon_Trade_UI_C;                  // 0x5CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x5CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x3];                                       // 0x5CB9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayCompanionMontage_ReturnValue;                // 0x5CBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x5CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x5CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x5CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x3];                                       // 0x5CD1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x5CD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue;          // 0x5CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x5CD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x2];                                       // 0x5CDA(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x5CDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item4;                                 // 0x5CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x5CE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x5CE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x2];                                       // 0x5CEA(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x5CEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x5CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x5CF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x2];                                       // 0x5CF2(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x5CF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scan_Duration;                         // 0x5CF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x4];                                       // 0x5CFC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      K2Node_CustomEvent_Post_Scan_Reaction;                    // 0x5D00(0x00A0) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x5DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x5DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x7];                                       // 0x5DA9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x5DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x5DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x5DB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x5DBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x5];                                       // 0x5DBB(0x0005) MISSED OFFSET
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x5DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x5DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x5DC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x6];                                       // 0x5DCA(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x5DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x5DD8(0x0040) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter3;                   // 0x5E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x5E20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_dead2;                              // 0x5E21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x5E22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x5];                                       // 0x5E23(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x5E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x5E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x5E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_dead;                               // 0x5E39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x6];                                       // 0x5E3A(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x5E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x5E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x5E49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x5E4A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue4;        // 0x5E4B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x5E4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x5E4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x2];                                       // 0x5E4E(0x0002) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue;          // 0x5E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x5E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x5E59(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x5E5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x5E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x3];                                       // 0x5E61(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue10;                        // 0x5E64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue2;         // 0x5E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x5E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x5E71(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_ItemName;                              // 0x5E78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_SwitchString_CmpSuccess;                           // 0x5E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x7];                                       // 0x5E89(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter4;                   // 0x5E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x5E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x7];                                       // 0x5E99(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x5EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x5EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x5EA9(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x5EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x5EB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue5;        // 0x5EB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x6];                                      // 0x5EBA(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ridden_dino;                           // 0x5EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x5EC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x7];                                      // 0x5EC9(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      K2Node_CustomEvent_reaction;                              // 0x5ED0(0x00A0) (Transient, DuplicateTransient)
	bool                                               CallFunc_CanPlayEnvironmentalCompanionReaction_ReturnValue;// 0x5F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x7];                                      // 0x5F71(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x5F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable2;                                       // 0x5F80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x5F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item5;                                 // 0x5F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x5F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x5F91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue2;                   // 0x5F92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x1];                                      // 0x5F93(0x0001) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue11;                        // 0x5F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item6;                                 // 0x5F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x3];                                      // 0x5F99(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x5F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x5FA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x3];                                      // 0x5FA1(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Store_Item_Index;                      // 0x5FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_New_Index_Value;                       // 0x5FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x5FA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue19;                           // 0x5FAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x5];                                      // 0x5FAB(0x0005) MISSED OFFSET
	class UHexagon_Trade_UI_C*                         K2Node_DynamicCast_AsHexagon_Trade_UI_C2;                 // 0x5FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x5FB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x5FB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x5FBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x5FBB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x5FBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x5FC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x5FC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_rotation;                              // 0x5FD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x5FDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x5FDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x5FDE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x1];                                      // 0x5FDF(0x0001) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x5FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x5FE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x7];                                      // 0x5FE9(0x0007) MISSED OFFSET
	TArray<class USceneComponent*>                     CallFunc_GetChildrenComponents_Children;                  // 0x5FF0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x6000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x4];                                      // 0x6004(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_Array_Get_Item7;                                 // 0x6008(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x6010(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x7];                                      // 0x6011(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         K2Node_DynamicCast_AsPrimitiveComponent;                  // 0x6018(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x6020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x6021(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x2];                                      // 0x6022(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_ExtraCharacterLevel;                   // 0x6024(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x6028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x6030(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x6031(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x6032(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue20;                           // 0x6033(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue6;        // 0x6034(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue8;                  // 0x6035(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x2];                                      // 0x6036(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x6038(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x603C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue2;                // 0x603D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue3;                // 0x603E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue9;                  // 0x603F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue4;                // 0x6040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x3];                                      // 0x6041(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x6044(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue21;                           // 0x6050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue7;        // 0x6051(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x2];                                      // 0x6052(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x6054(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x6058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x605C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x6068(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x6074(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x6080(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x608C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x6098(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x60A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x60B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x3];                                      // 0x60B1(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x60B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x60B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x60BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x60C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue10;                 // 0x60C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue11;                 // 0x60C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue12;                 // 0x60C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue2;         // 0x60C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue3;         // 0x60C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x60C6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue13;                 // 0x60C7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x60C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x7];                                      // 0x60C9(0x0007) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue;                     // 0x60D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x60D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x4];                                      // 0x60E4(0x0004) MISSED OFFSET
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance;                 // 0x60E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x60F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x3];                                      // 0x60F1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x60F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FLocalizedSoundCueEntry>             K2Node_CustomEvent_Localized2;                            // 0x6100(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_play_anim_textures2;                   // 0x6110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x7];                                      // 0x6111(0x0007) MISSED OFFSET
	struct FLocalizedSoundCueEntry                     CallFunc_GetLocaleSpecificAudio_OutLocalizedAudio;        // 0x6118(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetLocaleSpecificAudio_ReturnValue;              // 0x6138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x7];                                      // 0x6139(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_AssetPath2;                            // 0x6140(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     K2Node_CustomEvent_LoadedAsset2;                          // 0x6150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundWave*                                  K2Node_DynamicCast_AsSoundWave;                           // 0x6158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x6160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x7];                                      // 0x6161(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue;                            // 0x6168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x6170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x7];                                      // 0x6171(0x0007) MISSED OFFSET
	class FString                                      CallFunc_FindLocalizedVersionOfFilename_ReturnValue;      // 0x6178(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x6188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x7];                                      // 0x6189(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x6190(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x61A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x4];                                      // 0x61AC(0x0004) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetMyPlayerHUD_ReturnValue;                      // 0x61B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue22;                           // 0x61B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue23;                           // 0x61B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x6];                                      // 0x61BA(0x0006) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue3;         // 0x61C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x61C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue24;                           // 0x61C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_ByteByte_ReturnValue;               // 0x61CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue8;        // 0x61CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue11;                      // 0x61CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item8;                                 // 0x61D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x61D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue25;                           // 0x61D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue14;                 // 0x61DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x1];                                      // 0x61DB(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue12;                      // 0x61DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue5;                     // 0x61E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x3];                                      // 0x61E1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue13;                      // 0x61E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x61E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x7];                                      // 0x61E9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item9;                                 // 0x61F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue26;                           // 0x61F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x3];                                      // 0x61F9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue14;                      // 0x61FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue6;                     // 0x6200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x3];                                      // 0x6201(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue15;                      // 0x6204(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue7;                     // 0x6208(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x7];                                      // 0x6209(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x6210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x6218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue27;                           // 0x6220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x3];                                      // 0x6221(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue16;                      // 0x6224(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue17;                      // 0x6228(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue28;                           // 0x622C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue8;                        // 0x622D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x2];                                      // 0x622E(0x0002) MISSED OFFSET
	struct FCompanionReactionData                      CallFunc_Array_Get_Item10;                                // 0x6230(0x00A0) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue29;                           // 0x62D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue9;        // 0x62D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x2];                                      // 0x62D2(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue18;                      // 0x62D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue8;                     // 0x62D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue30;                           // 0x62D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue31;                           // 0x62DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue32;                           // 0x62DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x62DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x62E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x62EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x62F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x62F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue33;                           // 0x6300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x6301(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x6302(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue5;                // 0x6303(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue34;                           // 0x6304(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x3];                                      // 0x6305(0x0003) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x6308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x6310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue35;                           // 0x6318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue36;                           // 0x6319(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData137[0x6];                                      // 0x631A(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue;          // 0x6320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue2;         // 0x6328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue37;                           // 0x6330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue38;                           // 0x6331(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x6332(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData138[0x1];                                      // 0x6333(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x6334(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_AddUnique_ReturnValue;                     // 0x6344(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x6348(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_AddUnique_ReturnValue2;                    // 0x6358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue39;                           // 0x635C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue10;       // 0x635D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData139[0x2];                                      // 0x635E(0x0002) MISSED OFFSET
	float                                              CallFunc_Ease_ReturnValue;                                // 0x6360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Ease_ReturnValue2;                               // 0x6364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue40;                           // 0x6368(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData140[0x3];                                      // 0x6369(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x636C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue11;       // 0x637C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x3];                                      // 0x637D(0x0003) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue2;                    // 0x6380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance2;                // 0x6388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x6390(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x7];                                      // 0x6391(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_AssetPath;                             // 0x6398(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     K2Node_CustomEvent_LoadedAsset;                           // 0x63A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetTwoLetterISOLanguageName_ReturnValue;         // 0x63B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_StriStri_ReturnValue;                   // 0x63C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData143[0x7];                                      // 0x63C1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetTwoLetterISOLanguageName_ReturnValue2;        // 0x63C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_StriStri_ReturnValue2;                  // 0x63D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData144[0x7];                                      // 0x63D9(0x0007) MISSED OFFSET
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> K2Node_CustomEvent_Localized;                             // 0x63E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_Play_Anim_Textures;                    // 0x63F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData145[0x7];                                      // 0x63F1(0x0007) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue3;                    // 0x63F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance3;                // 0x6400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x6408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData146[0x7];                                      // 0x6409(0x0007) MISSED OFFSET
	struct FLocalizedSoundWaveAnimTexturePairArrays    CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_OutLocalizedAudio;// 0x6410(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_FoundLocalizedSoundWavesForThisLanguage;// 0x6430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_ReturnValue;// 0x6431(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData147[0x2];                                      // 0x6432(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue19;                      // 0x6434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x6438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue9;                     // 0x643C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData148[0x3];                                      // 0x643D(0x0003) MISSED OFFSET
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x6440(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x6444(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData149[0x4];                                      // 0x6454(0x0004) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x6458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundWave*                                  K2Node_DynamicCast_AsSoundWave2;                          // 0x6460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x6468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData150[0x7];                                      // 0x6469(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue2;                           // 0x6470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x6478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData151[0x7];                                      // 0x6479(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue3;                           // 0x6480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x6488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x6489(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue;                     // 0x648A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData152[0x5];                                      // 0x648B(0x0005) MISSED OFFSET
	struct FSoundWaveAnimTexturePairs                  CallFunc_Array_Get_Item11;                                // 0x6490(0x0020) (Transient, DuplicateTransient)
	class FString                                      CallFunc_FindLocalizedVersionOfFilename_ReturnValue2;     // 0x64B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue4;                // 0x64C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData153[0x4];                                      // 0x64C4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_find_associated_anim_texture_from_localized_sound_wave_pairs_anim_texture_path;// 0x64C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x64D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue2;                    // 0x64D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData154[0x6];                                      // 0x64DA(0x0006) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue4;                    // 0x64E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance4;                // 0x64E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x64F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData155[0x7];                                      // 0x64F1(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_particleTemplate;                      // 0x64F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_EndPointActor;                         // 0x6500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Offset;                                // 0x6508(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue5;                // 0x6514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x6518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter5;                   // 0x6520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x6528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData156[0x3];                                      // 0x6529(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x652C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue;                 // 0x6538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData157[0x7];                                      // 0x6539(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue2;                           // 0x6540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter6;                   // 0x6548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast21_CastSuccess;                         // 0x6550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData158[0x7];                                      // 0x6551(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue3;                           // 0x6558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_SetActorLocation_ReturnValue2;                // 0x6560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData159[0x7];                                      // 0x6561(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter7;                   // 0x6568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast22_CastSuccess;                         // 0x6570(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData160[0x7];                                      // 0x6571(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue3;                 // 0x6578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x6580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast23_CastSuccess;                         // 0x6588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewValue2;                             // 0x6589(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewValue;                              // 0x658A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData161[0x5];                                      // 0x658B(0x0005) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x6590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x6598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast24_CastSuccess;                         // 0x65A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x65A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData162[0x6];                                      // 0x65A2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x65A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue4;                           // 0x65B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x65B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast25_CastSuccess;                         // 0x65C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData163[0x3];                                      // 0x65C1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue20;                      // 0x65C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue9;                        // 0x65C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData164[0x7];                                      // 0x65C9(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      CallFunc_Array_Get_Item12;                                // 0x65D0(0x00A0) (Transient, DuplicateTransient)
	TArray<struct FName>                               K2Node_MakeArray_Array;                                   // 0x6670(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue41;                           // 0x6680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue42;                           // 0x6681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue12;       // 0x6682(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue43;                           // 0x6683(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue13;       // 0x6684(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData165[0x3];                                      // 0x6685(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x6688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayCompanionMontage_ReturnValue2;               // 0x668C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue4;         // 0x6690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x6698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue44;                           // 0x6699(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x669A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x669B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData166[0x4];                                      // 0x669C(0x0004) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue5;         // 0x66A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue4;         // 0x66A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue2;                     // 0x66A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x66AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData167[0x1];                                      // 0x66AB(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Add_NewItem_RefProperty;                   // 0x66AC(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C");
		return ptr;
	}


	void IsPlayerControllingValidPrimalChar(bool* bResult);
	void call_finish_on_vr_world();
	void set_player_camera_manager_on_death_vfx_manager();
	void setup_intro_anim_masking();
	void destroy_intro_teleport_sphere();
	void spawn_post_mass_teleport_vfx(const struct FVector& Location);
	void spawn_mass_teleport_vfx();
	void Pass_Mass_Teleport_Event_to_Vfx_And_Destroy_ref(TEnumAsByte<EMassTeleportState> State);
	void cancel_mass_teleport_vfx();
	void pass_players_to_teleport_vfx(TArray<class FString>* teleporting_player_names);
	void UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset);
	void Pre_Teleport_Dismount();
	void unmount_teleporting_players(TArray<class APrimalCharacter*>* teleporting_players);
	void Notify_Players_That_They_Cant_Teleport_Unconsious_or_Dead_Dinos();
	void Notify_Players_That_They_Cant_Teleport_Unconsious_Or_Dead_Players();
	void Prevent_Glitch_Use_Sphere_Collision();
	void Notify_Players_That_They_Exceed_Final_Boss_player_Count();
	void STATIC_notify_players_that_they_exceed_final_boss_tame_count();
	void STATIC_find_associated_anim_texture_from_localized_sound_wave_pairs(const class FString& sound_wave_path, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Array, class FString* anim_texture_path);
	void Recently_Released_ADS();
	void begin_scan_random_location_orbit();
	void is_fixing_glitch(bool* is_fixing);
	void Check_if_You_Can_Play_Post_Intro_HLNA_Target_Alert_Message();
	void Show_Post_Intro_Mission_Alert_Message();
	void STATIC_Show_Post_Intro_HLNA_Target_Alert_Message();
	void STATIC_Reaction_Equals_Reaction(const struct FCompanionReactionData& reaction_1, const struct FCompanionReactionData& reaction_2, bool* is_equal);
	void set_up_aysnc_loaded_anim_texture(class UObject* InputPin, bool Eye_Only);
	void is_player_tpv_and_hlna_is_in_the_way(const struct FVector& loc_override, bool* is_in_the_way);
	void force_play_mission_alert(const class FString& Title, const class FString& Label, TEnumAsByte<EMissionAlertType> alert_type, float display_time, class UTexture2D* Icon);
	void Delay_to_Play_Hlna_Subtitles_Move_Out_Anim();
	void STATIC_create_dynamic_materials();
	void Clear_Async_Loaded_Audio();
	void Is_Player_On_Mission(class AShooterCharacter* Player, bool* Ret_Val, class AMissionType** active_mission);
	void is_player_on_mission_and_cant_teleport(class AShooterCharacter* InputPin, bool* Ret_Val);
	void STATIC_Notify_Player_That_They_Cannot_Teleport_Players_On_Mission();
	void Colliding_with_Something();
	void BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff);
	bool IsCompanionAbleToMonologue();
	void Awaiting_Set_Of_Initial_Spawn_Intro_Anim_Timer();
	void STATIC_Notify_Player_That_They_Cannot_Teleport_Large_Dinos_To_Final_Boss();
	void STATIC_Notify_Player_That_They_Cannot_Teleport_Players_On_Seated_Structures();
	void Temp_Keep_Movement_Volume_Up();
	void Set_Intro_sphere_Mask_Amount(float InputPin);
	void Move_Cuz_In_The_Way();
	void should_hlna_move_away_from_the_camera(bool* Return);
	void Is_Probably_Firing();
	void BPHandleOnStopFire(bool* bFromGamepad);
	void Restrict_Getting_In_Front_Of_Camera_During_Firing_Or_Ads();
	void StopCompanionEvent();
	void FocusOnRemoteTarget();
	void play_focused_scan_sfx_and_vfx();
	void Focused_Selected_Remote_Target_Timeout();
	void play_hexagon_sfx();
	void OnSpawnHexagons(float* OverrideCollectSFXVolume, bool* VFXImmediatelyAttracts);
	void OnMadeHexagonPurchase();
	void HLNa_Mass_Teleport_Trigger_to_VR_Boss_Battle_Flow_Test();
	void find_or_get_mission_dispatcher(class AMissionDispatcher** AsMissionDispatcher);
	void Remove_Cosmetic_HLNA();
	void STATIC_RefreshCompanionColorization();
	void start_boss_battle(class UClass* InputPin);
	void STATIC_start_mission_and_set_reverse_teleports();
	void STATIC_Set_Return_Teleport_Locations();
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Hard();
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Med();
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Easy();
	void sync_mission_complete_status();
	void Restrict_Sync_Mission_Complete_Status();
	void format_VR_boss_battle_teleport_multiuse_options(int Required_Missions, const class FString& Mission_Title, bool Requires_All_Story_Glitches, class FString* Appended_String, bool* Disabled);
	void Restricted_Timed_Hexagon_Collection();
	void restricted_time_since_last_played_movement_sounds();
	void Play_movement_sound(float Distance);
	void Randomly_pick_orbit_location();
	void Notify_Player_That_They_Cannot_Teleport_Fish();
	void STATIC_notify_player_that_they_cannot_teleport_rafts();
	void Play_HLNA_Respawn_Anim();
	void STATIC_play_spawn_anim(class UClass* anActorClass, class UAnimMontage* AnimToPlay);
	void Simple_Play_Localized_Audio_cue(bool Play_Anim_Textures, struct FHLNALocalizedAudioEntry* HLNALocalizedAudioEntry);
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void Set_All_Components_Custom_Depth_Stencil_Value(int stencil_Value, class AActor* Actor);
	bool CanPlayEnvironmentalCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
	void Server_Update_Purchasable_Items();
	void Restricted_Interval_For_Checking_Updated_Hex_Store_Purchasable_Items();
	void Play_HLNA_Initial_Spawn_Anim();
	void Companion_is_in_first_person_in_a_seat(bool* Result);
	void Finish_Intro_Anim();
	void NotifyHasTamedDino(class UClass** DinoClass);
	void NotifyItemCrafted(class UPrimalItem** anItem);
	void STATIC_Keep_Eye_Hidden_For_Emotes();
	void STATIC_BuffTickClient(float* DeltaTime);
	void Reset_Delay_Between_Environmental_Reactions();
	void Check_Recieve_Damage_For_Reactions();
	void Reset_Recent_Damage_Recieved();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_Play_World_Reaction(struct FCompanionReactionData* WithReactionData);
	void Interval_to_check_for_HLNA_world_reactions();
	void Restrict_Random_World_Reactions();
	void Check_Current_Status_of_various_things_to_react_to();
	void BPInventoryItemUsed(class UObject** InventoryItemObject);
	void BPDeactivated(class AActor** ForInstigator);
	void BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff);
	void BPNotifyExperienceGained(float* ActualExpGained, float* ExpectedExpGain, TEnumAsByte<EXPType>* ExpTypeGained);
	void BPInstigatorDied();
	void BPHandleOnStartFire(bool* bFromGamepad);
	void PlayJustAboutToTeleportReaction();
	void FinishedScanDispatcher(class AShooterCharacter* ShooterChar);
	void FinishedScan();
	void Play_Scan_Reactions(const struct FCompanionReactionData& Post_Scan_Reaction, float Override_Scan_Duration, float* Total_Reactions_Duration);
	void Clean_Up_Teleport_VFX();
	void On_Mass_Teleport_Event_VFX(TEnumAsByte<EMassTeleportState> Event);
	void STATIC_Find_Best_Teleport_Location(int selected_coordinate_direction_index, int region_index, class APlayerController* Player_Controller, bool only_test_if_theres_any_available, bool* Has_Found_Spot);
	void NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser);
	void Set_Best_Teleport_Spot_From_Sorted_Start_Points(TArray<class AActor*>* Array, bool* able_to_set_spot);
	void Get_Biome_Names(TArray<class FString>* OverridePlayerSpawnRegions);
	struct FVector GetCompanionWorldLocation();
	void GetCurrentOrbitRadius(float* Radius);
	void BPOnOwnerMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar);
	void OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState);
	void HLNaMassTeleport_Cancel();
	void CleanUpMassTeleport();
	void Tick_UpdateCompanionState(float* DeltaTime);
	bool STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Tick_SearchForMassTeleportChars(bool bIsFinalCheck);
	void BuffTickServer(float* DeltaTime);
	void STATIC_HLNaMassTeleport_Trigger();
	void HLNaMassTeleport_Start(int region_index, bool Teleport_To_VR_Boss_Battle_easy, bool Teleport_To_VR_Boss_Battle_med, bool Teleport_To_VR_Boss_Battle_hard, bool Teleport_To_VR_Boss_Battle_FLOW_TEST);
	void GetTeleportationDestinations(TArray<struct FTeleportDestination>* Destinations);
	void GetLookAtPlayerRotation(struct FRotator* Rotation);
	void GetAnimMoveVelocityAxes(struct FVector* VelocityAxes);
	void ShouldBeCompact(bool* Result);
	void Determine_Best_Teleport_Spot();
	void OnCompanionEventStarted(struct FCompanionEventData* StartingEventData);
	bool CanStartCompanionEvent(class AActor** EventActor, struct FCompanionEventData* WithEventData);
	void OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData);
	void SetCompactState(bool bNewCompactState);
	void STATIC_OnCompanionReactionStopped(int* UniqueID, struct FCompanionReactionData* StoppedReactionData);
	bool CanPlayCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
	void Tick_UpdateHLNaSounds(float DeltaTime);
	void Tick_CompactMode();
	void STATIC_IsCurrentEventMonalogue(bool* Result);
	void CalculateFakeVelocityLagOffset(float DeltaTime, struct FVector* VelocityLag);
	void CalculateHLNaHeightOffset(float DeltaTime, struct FVector* HeightOffset_Base, struct FVector* HeightOffset_WithBob, struct FVector* BobOffset);
	void IsAttachedToCamera(bool* bResult);
	void IsAttachedToPlayer(bool* bResult);
	void Tick_CompanionEvents(float* DeltaTime);
	bool IsCompanionReadyToMonologue();
	void STATIC_ConvertTargetRelOffsetToWorld(struct FVector* WorldLocation);
	void IsAttachedToCamera_Pure(bool* bResult);
	void STATIC_UpdateHLNaTargetRelLocFPV(const struct FVector& WithWorldLocation, float DeltaTime);
	void CalculateHLNaOrbitDir(float DeltaTime, struct FVector* OrbitDir);
	void GetScreenPercentageWorldLocation(const struct FVector2D& Percentage, float ProjectionDist, struct FVector* WorldLocation);
	void TickUpdateHLNaEventMovement(float DeltaTime);
	void CalculateHLNaTargetWorldRotation(struct FRotator* TargetWorldRotation);
	void CalculateHLNaTargetWorldLocation(float DeltaTime, struct FVector* TargetWorldLocation);
	void STATIC_OnPlayerDeath(class APrimalCharacter** DiedCharacter);
	void Tick_UpdateCompanionTransform(float* DeltaTime);
	void PlayParallelEmoteMontage(class UAnimMontage** PlayerEmote, bool* bSuccess);
	void OnPlayerPlayAnimation(class UAnimMontage** PlayedAnim, float* AnimDuration, struct FName* StartSectionName);
	void OnCompanionStateChanged();
	void SoftSetHLNaLocationRelative(const struct FVector& NewLocation);
	void STATIC_GetMeshRotationInterpSpeed(float* Speed);
	void SoftSetHLNaRotation(const struct FRotator& NewRotation);
	void GetPlayerVelocity(struct FVector* Velocity);
	void IsAttachedToPlayer_Pure(bool* bResult);
	void PretendWeAreInWorldSpace();
	void OnFoundPoI(class AActor** FoundPointActor, struct FPointOfInterestData_ForCompanion* FoundPointData);
	bool IsPlayerADS();
	void GetMeshLocationInterpSpeed(float* Speed);
	void GetPlayerOrbitOrigin(struct FVector* Origin);
	void InterpHLNaRootToOrigin(float DeltaTime);
	void SoftSetHLNaLocation(const struct FVector& NewLocation);
	void UpdateHLNaAttachment();
	bool IsPlayerLookingAtCompanion();
	void OnSpawnedForPlayer();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void delay_before_intro_shatter__FinishedFunc();
	void delay_before_intro_shatter__UpdateFunc();
	void fixed_orientation_timeline__FinishedFunc();
	void fixed_orientation_timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void Client_OnMassTeleportStarted(const struct FVector& WithPlayerLocation);
	void Client_OnMassTeleportEnded();
	void Client_OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState);
	void Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList);
	void update_teleporting_characters_vfx();
	void Multi_OnMassTeleportEvent(TEnumAsByte<EMassTeleportState> EventState);
	void Fresnel_Flash(const struct FLinearColor& Color);
	void Show_Hexagon_Conversion_Shop_on_Client();
	void post_teleport_reaction();
	void play_hexagon_absorb_anim();
	void Play_Scanning_SFX_and_VFX();
	void Play_Post_Scan_Reaction(float Scan_Duration, const struct FCompanionReactionData& Post_Scan_Reaction);
	void Delay_and_React_to_Shot_Event();
	void Server_React_To_Shot_Event();
	void try_play_friendly_fire_reaction(bool is_dead);
	void try_play_attacked_opponent_reaction(bool is_dead);
	void try_play_creature_almost_dead();
	void React_To_Equipping_Low_Durability_Weapon();
	void Client_ReactToCraftedItem(const class FString& ItemName);
	void Bind_Dino_Death_Reaction(class APrimalDinoCharacter* ridden_dino);
	void Try_HLNA_Environmental_Reaction(const struct FCompanionReactionData& reaction);
	void Ridden_Dino_Died_Reaction(class APrimalCharacter* DiedCharacter);
	void Update_Purchasable_Item_State_and_update_store_on_client(int Store_Item_Index, bool New_Index_Value);
	void Delay_and_Disable_Item_Visibility_In_Store();
	void intro_teleport_materials();
	void force_set_hlna_location_and_rotation(const struct FVector& Location, const struct FRotator& Rotation);
	void fade_away_intro_PP_mask();
	void PrimalCharacterNotifyLevelUp(int ExtraCharacterLevel);
	void React_To_Player_Level_Up();
	void delay_and_scan();
	void Tell_Client_To_React_With_Hlna_After_Respawn();
	void delay_start_VR_mission_easy();
	void delay_start_VR_mission_med();
	void delay_start_VR_mission_hard();
	void fade_in_audio_comp();
	void fade_out_audio_comp();
	void delay_start_vr_mission_flow_test();
	void move_hlna_to_focused_target_for_tooltip();
	void start_looping_scans();
	void stop_looping_scans();
	void keep_looping_scans();
	void Simple_Load_Async_Sound_Cue(bool Play_Anim_Textures, TArray<struct FLocalizedSoundCueEntry>* Localized);
	void AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset);
	void play_intro_reaction();
	void ignore_respawn_reaction();
	void prematurely_cancel_intro_stuff();
	void finished_loading_async_loaded_anim_texture(const class FString& AssetPath, class UObject* LoadedAsset);
	void Simple_Load_Async_Sound_Wave(bool Play_Anim_Textures, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Localized);
	void ResetHexTimer();
	void Multi_UpdateSpawnedBeamParticle(class UParticleSystem* ParticleTemplate, class AActor* EndPointActor, const struct FVector& Offset);
	void Server_HasStartedGen2Intro();
	void ClientGen2IntroFinished();
	void ClientGen2IntroStart();
	void LevelNotifyGen2IntroFinished();
	void NotifyServerIntroFinished();
	void LevelCheatSetGen2IntroPlaying(bool NewValue);
	void NotifyServerCheatSetGen2IntroPlaying(bool NewValue);
	void delay_play_death_line();
	void ExecuteUbergraph_Buff_Companion_HLNA(int EntryPoint);
	void Finished_Scan_Dispatcher__DelegateSignature(class AShooterCharacter* ShooterChar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
