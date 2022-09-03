#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Lionfish_Lion_GroupCloak_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C
// 0x02F5 (0x0C6D - 0x0978)
class ABuff_Lionfish_Lion_GroupCloak_C : public APrimalBuff
{
public:
	float                                              Timeline_0_NewTrack_5_8B1E486644E1AA480AB70EBE63EE49A2;   // 0x0978(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8B1E486644E1AA480AB70EBE63EE49A2;   // 0x097C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeToInvisible_Rider_DissolveMesh_D94AF36B44BB0976C501509835C08A66;// 0x0988(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeToInvisible_Rider__Direction_D94AF36B44BB0976C501509835C08A66;// 0x098C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeToInvisible_Rider;                                    // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fade_camo_CloakTransition_6B94DC3343D84A16448CAC8E1ABD4D1D;// 0x0998(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              fade_camo_DissolveCamo_6B94DC3343D84A16448CAC8E1ABD4D1D;  // 0x099C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              fade_camo_DissolveMesh_6B94DC3343D84A16448CAC8E1ABD4D1D;  // 0x09A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fade_camo__Direction_6B94DC3343D84A16448CAC8E1ABD4D1D;    // 0x09A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          fade_camo;                                                // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              uncloak_timeline_play_rate;                               // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoFadeSpeedDeathMultiplier;                             // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterCharacter*>                   FadeQueue_Riders;                                         // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                       FadeQueue_Mounted;                                        // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      stealth_vision_buff;                                      // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialScalarName_DissolvePercent;                       // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCamo_PlayRate;                                       // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloak_timeline_play_rate;                                 // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_CamoRiderParticle_Enter;                              // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_CamoRiderParticle_Exit;                               // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RiderFXSocketName;                                        // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCloakParticlesScale;                                 // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_hidden;                                                // 0x0A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_starting_to_hide_or_unhide;                            // 0x0A0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A0E(0x0002) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                Cloak_Origin_Dinos;                                       // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               is_camo_active;                                           // 0x0A20(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               first_time_uncloaked;                                     // 0x0A21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0A22(0x0006) MISSED OFFSET
	double                                             time_when_first_unequipped;                               // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnedBeamLockMeshComp;                                  // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BeamLockCharMeshMaterialParent;                           // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpawnedBeamLockCharMeshMID;                               // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Ratio;                      // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Color;                      // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Cloaked_Color;                                            // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SpawnedBeamLockMeshComps;                                 // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Camo_Ineffectiveness_range___should_show_up_to_enemies_within_this_range_but_not_implemented_yet;// 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	class AShooterWeapon*                              player_bound_weapon;                                      // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Footstep_Shimmer_Alpha;                                   // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Cloaked_Color_Footstep;                                   // 0x0A8C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     saved_scale;                                              // 0x0A9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_solo_cloak_buff_for_rider;                             // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deactivate;                                               // 0x0AA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0AAA(0x0002) MISSED OFFSET
	struct FName                                       Lionfish_Lion_tag;                                        // 0x0AAC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mat_invisibility_param_max;                               // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               turning_invisible;                                        // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           associated_rider;                                         // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Delete;                                                   // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            saved_rider;                                              // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    saved_passengers;                                         // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Debug;                                                    // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	class UMaterialInstance*                           BeamLockCharMeshMaterialParent_LFL;                       // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SpawnedBeamLockMeshComps_riders;                          // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              SpawnedBeamLockMeshComps_passengers;                      // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              saved_base_targeting_desirability;                        // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_set_initial_boss_dino_check;                          // 0x0B1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               was_triggered_near_boss_dino_initial_check;               // 0x0B1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0B1E(0x0002) MISSED OFFSET
	float                                              duration_after_being_targeted_by_a_boss_in_which_to_prevent_toggling_removed_targeting_desireability;// 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	class FString                                      no_mate_boost_notification;                               // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               deactivate_if_mate_boost_is_lost_at_any_time;             // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_transitioning;                                         // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               non_replicated_camo_active_for_determining_render_state;  // 0x0B3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x0B3B(0x0005) MISSED OFFSET
	double                                             initialize_time;                                          // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_time_triggered_cloak;                                // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DinoWasMountedWhenApplied;                                // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newTime3;                              // 0x0B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newTime2;                              // 0x0B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newTime;                               // 0x0B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0B68(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x0B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x0B79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x0B7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item;                                  // 0x0B7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item2;                                 // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0B89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0B8A(0x0006) MISSED OFFSET
	TArray<class USceneComponent*>                     CallFunc_GetAllSceneComponents_OutComponents;             // 0x0B90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0BA4(0x0004) MISSED OFFSET
	class USceneComponent*                             CallFunc_Array_Get_Item3;                                 // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	class UMeshComponent*                              K2Node_DynamicCast_AsMeshComponent;                       // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0BC1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0BD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0BD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0BDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0BDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0BE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0BE5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0BE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0BE7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x0BE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0BEA(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0BF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0BF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0BF3(0x0001) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x0BF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x0BFA(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x0BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x0C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0C01(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item4;                                 // 0x0C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0C19(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_K2_GetScalarParameterValue_ReturnValue;          // 0x0C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0C24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0C25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0C26(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x0C27(0x0001) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0C30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0C41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6];                                       // 0x0C42(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetInstigator_ReturnValue;                       // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_CustomEvent_Weapon;                                // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x0C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0C69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x0C6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0C6B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x0C6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Lionfish_Lion_GroupCloak.Buff_Lionfish_Lion_GroupCloak_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void Has_passed_default_weapon_check(class AShooterCharacter* Passenger, bool* passed_check);
	void Set_Cloak_Transition_Value(float Dissolve_Mesh, float Cloak_Transition, TEnumAsByte<ETimelineDirection> Direction, bool Skip_LFL_Transition);
	void update_mate_boost_on_timer();
	void Reset_Base_Targeting_Desirability();
	void Is_Near_Boss();
	void Deactivate_Cloak_Mat_On_passengers();
	void deactivate_cloak_mat_on_rider();
	void set_up_attached_cloak_meshes(class UObject* parent_dino_mesh, class USkeletalMeshComponent* current_cloaking_mesh_comp, bool* Success, class USkeletalMeshComponent** new_mesh);
	void force_remove_disolve(class USkeletalMeshComponent* InputPin);
	void post_uncloak();
	void show_floating_hud();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void STATIC_get_saddle(class APrimalCharacter* Character, class USkeletalMeshComponent** NewParam);
	void set_fade_on_components(class AActor* Character, TEnumAsByte<ETimelineDirection> Direction, float Cloak_Transition, float dissolve_amount, class USkeletalMeshComponent* Component, bool is_main_mesh, bool Skip_LFL_Transition);
	void set_component_hidden(class UObject* Object, bool InputPin);
	void manual_print_string(const class FString& InString);
	bool HideBuffFromHUD();
	bool Lfl_Is_Valid_And_Cloaked_solo(class APrimalDinoCharacter* InputPin);
	bool STATIC_lfl_is_valid_and_cloaked(class APrimalDinoCharacter* InputPin, bool* deactivated_from_mate_boost);
	void STATIC_add_buff_to_character(class APrimalCharacter* NewParam);
	void Remove_Cloak_Origin_Dino(class APrimalDinoCharacter* NewParam);
	bool PreventActorTargeting(class AActor** ByActor);
	void deactivate_cloak_mat();
	void activate_cloak_mat();
	void BuffTickClient(float* DeltaTime);
	void OnRep_is_camo_active();
	void add_cloak_origin_dino(class APrimalDinoCharacter* NewParam);
	void BuffTickServer(float* DeltaTime);
	bool BPPreventInstigatorAttack(int* AttackIndex);
	void NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser);
	void BPDeactivated(class AActor** ForInstigator);
	void Set_All_Riders_Hidden(bool Hidden);
	void Activate_Rider_Camo_Particles(bool enter_camo, class AShooterCharacter* specificRider);
	void UserConstructionScript();
	void fade_camo__FinishedFunc();
	void fade_camo__UpdateFunc();
	void FadeToInvisible_Rider__FinishedFunc();
	void FadeToInvisible_Rider__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Play_FadeCamo_LFL();
	void Reverse_FadeCamo_LFL();
	void SetNewTime_FadeCamo_LFL(float NewTime);
	void Multi_SetNewTime_FadeCamo_LFL(float NewTime);
	void SetNewTime_FadeCamo_Rider(float NewTime);
	void ReverseFromEnd_FadeCamo_Rider();
	void PlayFromStart_FadeCamo_Rider();
	void Multi_PlayFade();
	void Multi_PlayFade_reverse();
	void on_weapon_fire(class AShooterWeapon* weapon);
	void bind_fire();
	void Footstep_Shimmer();
	void ExecuteUbergraph_Buff_Lionfish_Lion_GroupCloak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
