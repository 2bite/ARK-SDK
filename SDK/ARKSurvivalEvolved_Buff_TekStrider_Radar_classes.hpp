#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Radar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStrider_Radar.Buff_TekStrider_Radar_C
// 0x0CE1 (0x1670 - 0x098F)
class ABuff_TekStrider_Radar_C : public ABuff_TekStrider_Attachment_Base_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x098F(0x0001) MISSED OFFSET
	class UParticleSystemComponent*                    cone_particle_emitter;                                    // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_72DD39264806088592FF3C88A1544262;   // 0x09A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_72DD39264806088592FF3C88A1544262;   // 0x09A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateOnEquip;                                         // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAttachmentActive_;                                     // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x09B2(0x0002) MISSED OFFSET
	float                                              ConeLength;                                               // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCone;                                               // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	struct FHUDElement                                 Radar_HUD_Elem_Template;                                  // 0x09C0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    found_characters;                                         // 0x0B10(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              AlertIntervalSeconds;                                     // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   NearbyPlayers;                                            // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastAlertPulseClientTime;                                 // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AlertPulseEmitterClass;                                   // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastAlertPulseServerTime;                                 // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalCharacterStatusComponent*             MyCharacterStatusComponent;                               // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WarningTextColor;                                         // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertPulseCooldownSeconds;                                // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B6C(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    NearbyEnemies;                                            // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              EnemyScanRadius;                                          // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusMultiplierForPlayerAlerts;                          // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrightenMassThresholdHerbivore;                           // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrightenMassThresholdCarnivore;                           // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              FrightenExtraDinoTypes;                                   // 0x0B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastWarningScanTickTime;                                  // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarningScanTickInterval;                                  // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarningScanTickIntervalMin;                               // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarningScanTickIntervalMax;                               // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInTurretMode;                                          // 0x0BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasRider;                                                // 0x0BB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPara_WarningMode>                     WarningMode;                                              // 0x0BB6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAlertActive;                                            // 0x0BB7(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoFrightenInTurretMode;                                 // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurretModePaused;                                         // 0x0BB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0BBA(0x0006) MISSED OFFSET
	struct FHUDElement                                 DinoInfoHUDElementTemplate;                               // 0x0BC0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              taming_hud_progress_bar_offset;                           // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hud_alpha;                                                // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              radar_viewable_duration;                                  // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     saved_cone_forward;                                       // 0x0D1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_fire_time;                                           // 0x0D28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireCooldown;                                             // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0D34(0x0004) MISSED OFFSET
	struct FHUDElement                                 Fire_Cooldown_Hud_Elem_Template;                          // 0x0D38(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               has_found_characters;                                     // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0E89(0x0007) MISSED OFFSET
	TArray<bool>                                       is_on_the_same_team;                                      // 0x0E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       is_allied;                                                // 0x0EA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       is_wild;                                                  // 0x0EB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              dino_names;                                               // 0x0EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                currently_highlighted_character_index;                    // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0ED4(0x0004) MISSED OFFSET
	TArray<struct FHUDElement>                         saved_radar_hud_elements;                                 // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             current_saved_locations;                                  // 0x0EE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Radar_Update_Frequency;                                   // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0EFC(0x0004) MISSED OFFSET
	TArray<struct FHUDElement>                         HUDElementsToDisplay;                                     // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             saved_associated_locations_for_radar_hud_elems;           // 0x0F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           converted_screenspace_locs;                               // 0x0F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              update_rate_of_screenspace_conversion_on_radar_hud_elems; // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0F34(0x0004) MISSED OFFSET
	class UTexture2D*                                  FireCooldownHudTexture_Ready;                             // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FireCooldownHudTexture_Filling;                           // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      HealthPercents;                                           // 0x0F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   InitialProgressHUDLocation;                               // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxProgressBarsBeforeTruncating;                          // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0F64(0x0004) MISSED OFFSET
	class AShooterPlayerCameraManager*                 CameraManager;                                            // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDProgressBarListPadding;                                // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0F74(0x0004) MISSED OFFSET
	struct FHUDElement                                 ContainerHUDElementTemplate;                              // 0x0F78(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              XRayDetectObjectTypes;                                    // 0x10C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              XRay_Range;                                               // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x10DC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              BoundsMultipliedCharacters;                               // 0x10E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              XRay_Bounds_Multiplier;                                   // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x10F4(0x0004) MISSED OFFSET
	struct FHUDElement                                 RadarCounterTextHUDElement;                               // 0x10F8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HUDProgressBarContainerPadding;                           // 0x1248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x124C(0x0004) MISSED OFFSET
	struct FHUDElement                                 RadarScanDurationHUDElement;                              // 0x1250(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FoundCharacterHUDTextScaleMultiplier;                     // 0x13A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseStencilOutlinePostProcess;                             // 0x13A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFloatingHUDForScannedCharacters;                       // 0x13A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x13A6(0x0002) MISSED OFFSET
	int                                                clientside_currently_held_shared_target_index;            // 0x13A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_keep_a_shared_target_viewable;                // 0x13AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            Currently_Shared_Target;                                  // 0x13B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              radius_for_allowed_sharing_radar_targets;                 // 0x13B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              restricted_time_to_update_nearby_teammates;               // 0x13BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              interval_to_update_shared_target;                         // 0x13C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x13C4(0x0004) MISSED OFFSET
	class UAnimMontage*                                Radar_Firing_Anim;                                        // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_highlight_shared_target;                      // 0x13D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                wild_dino_text_color;                                     // 0x13D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                allied_dino_text_color;                                   // 0x13E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                enemy_dino_text_color;                                    // 0x13F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Flash_Target_Rate;                                        // 0x1404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            Previous_Shared_Target;                                   // 0x1408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Radar_Filter;                                     // 0x1410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1414(0x0004) MISSED OFFSET
	class FString                                      Filter_all_text;                                          // 0x1418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      filter_humans_text;                                       // 0x1428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      filter_dinos_text;                                        // 0x1438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      radar_filter_multiuse_text;                               // 0x1448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasScannerListBeenSorted;                                 // 0x1458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepScannerListOrderUpdatedByDistance;                    // 0x1459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x145A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              SortedFoundCharacters;                                    // 0x1460(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FHUDElement                                 SharedTargetHUDElement;                                   // 0x1470(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   SharedTargetHUDElementLocationOffset;                     // 0x15C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Interval_To_Keep_Sharing_Targets_to_rider;                // 0x15C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x15CC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            Next_Shared_Target;                                       // 0x15D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    Last_Valid_List_Of_Sharable_Targets;                      // 0x15D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x15E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x15E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x15EA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Get_Cone_Forward_Forward;                        // 0x15EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Cone_Origin_ConeOrigin;                      // 0x15F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x1604(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x1608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x1614(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x1618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x1621(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1622(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x1624(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x1628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x1630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewValue;                              // 0x1634(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x1635(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1638(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x1644(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SortActorsByDistance_ReturnValue;                // 0x1648(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x1658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1659(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x165A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x1660(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_Radar.Buff_TekStrider_Radar_C");
		return ptr;
	}


	void Clear_Local_Shared_Target();
	void add_shared_target(class APrimalCharacter* New_Target);
	void Interval_Share_Server_Target_to_Rider();
	void Trigger_Held();
	void TriggerReleased();
	void Quicktap();
	void Radar_Change_Filter_to_Only_Dinos();
	void Radar_Change_Filter_to_Only_Humans();
	void Radar_Change_Filter_to_Both_Dinos_And_Humans();
	void find_targets();
	void Flash_Target();
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void clear_rider(class AShooterCharacter** prev_rider);
	void Highlight_latest_shared_target();
	void set_rider();
	void Restrict_Sharing_Target_Info();
	void Update_Shared_Target_Location();
	void Keep_Shared_Target_Visible();
	void Restrict_Updating_Nearby_Teammates();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void Get_Dino_Info_HUDElement_Desired_Location(int ListPositionIndex, struct FVector2D* Location);
	void Set_Container_HUDElement_Size(int DinoInfoListItemQuantity);
	void SetActorStencilValue(class AActor* Actor, int Value, bool Visible);
	void STATIC_Lowered_Rate_Of_Updating_Screenspace_Loc_Of_Radar_Hud_Elems();
	void update_radar();
	void Can_Fire(bool from_animbp, bool* Result);
	void STATIC_BuffTickClient(float* DeltaTime);
	void Clear_Radar_Characters();
	void Delay_Before_Fadeout();
	void OnRep_IsAlertActive();
	void Is_Small_Creature(class APrimalDinoCharacter* creature, bool* IsSmall);
	void Is_Dino_Hostile(class APrimalDinoCharacter* Dino, bool FleeingCountsAsHostile, bool* IsHostile);
	void Classify_Scanning_Target(class AActor* ScanTarget, TEnumAsByte<EPara_WarningMode> WarningMode, bool FleeingCountsAsHostile, bool* IsEnemy, bool* IsSmallCreature);
	void Get_Nearby_Enemies(TArray<struct FVector>* Locations);
	void STATIC_Notify_Player_About_Alert(class AShooterCharacter* Character);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void STATIC_Is_Dino_in_Cone_(class APrimalCharacter* Dino, TArray<struct FHitResult>* Hits, bool* isInCone);
	void Get_Cone_Forward(struct FVector* Forward);
	void Get_Cone_Origin(struct FVector* ConeOrigin);
	void Deactivate_Attachment();
	void Trigger();
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Multicast_Activate();
	void Multicast_Deactivate();
	void StopAlertTick();
	void Fadeout_Hud_Elem();
	void multicast_toggle_shared_target();
	void MulticastSetHasScannerListSorted(bool NewValue);
	void MulticastSetSortedFoundCharacters();
	void ExecuteUbergraph_Buff_TekStrider_Radar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
