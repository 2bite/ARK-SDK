#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScoutRemote_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapScoutRemote.WeapScoutRemote_C
// 0x02C0 (0x1128 - 0x0E68)
class AWeapScoutRemote_C : public APrimalWeaponGrenade
{
public:
	class UStaticMeshComponent*                        Goggles3P;                                                // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Goggles1P;                                                // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AScout_Character_BP_C*                       FiredScout;                                               // 0x0E78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InspectTooltipRange;                                      // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E84(0x0004) MISSED OFFSET
	class UClass*                                      ScoutResource;                                            // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastNoAmmoNotificationTimeSeconds;                        // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoAmmoNotificationIntervalSeconds;                        // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinimumRequiredResourceToFire;                            // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnequipAllowed;                                           // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRepossess;                                              // 0x0EA1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFire;                                                  // 0x0EA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ServerCanFire;                                            // 0x0EA3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ScoutRemoteReturnCodeReplicated;                          // 0x0EA4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	double                                             LastNotificationTime;                                     // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OverridePawnTPVFemaleAnimBlueprint;                       // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GogglesMode;                                              // 0x0EB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeThrown;                                            // 0x0EB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0EBA(0x0006) MISSED OFFSET
	class FString                                      TooltipInfoText;                                          // 0x0EC0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	double                                             LastUpdatedTooltipTime;                                   // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LastTooltipInfoText;                                      // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0EF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0EF2(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue;                        // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage;                         // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0F09(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue2;                       // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage2;                        // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x0F21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x0F22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0F23(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0F24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0F25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue2;                      // 0x0F26(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x0F27(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0F29(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue3;                       // 0x0F38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue4;                       // 0x0F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage3;                        // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0F51(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage4;                        // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0F60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F61(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x0F64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x0F68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetRole>                              CallFunc_GetRole_ReturnValue;                             // 0x0F6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0F6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0F6E(0x0002) MISSED OFFSET
	class UObject*                                     CallFunc_SelectObject_ReturnValue5;                       // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage5;                        // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0F81(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x0F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_target;                                // 0x0F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimationEx_ReturnValue;               // 0x0F90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F94(0x0004) MISSED OFFSET
	class AShooterPlayerState*                         K2Node_DynamicCast_AsShooterPlayerState;                  // 0x0F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0FA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0FA1(0x0007) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x0FA8(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_LinkedPlayerIDString_ReturnValue;                // 0x0FD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x0FE0(0x0050) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue2;                  // 0x1030(0x0028) (Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue2;                       // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x1060(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x10B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x10C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x10C4(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x10C8(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x10F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x10F1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x10F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UPrimalItem*                                 CallFunc_Array_Get_Item;                                  // 0x1108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1114(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x1118(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapScoutRemote.WeapScoutRemote_C");
		return ptr;
	}


	class FString BPGetDebugInfoString();
	bool AllowTargeting();
	struct FText BPGetTargetingTooltipInfoLabel();
	float BPGetProjectileSpeed();
	void OnRep_GogglesMode();
	void OnRep_FiredScout();
	class USkeletalMeshComponent* BPOverrideFPVMasterPoseComponent();
	bool BPPreventSwitchingWeapon();
	void Setup_Goggle_Anim_Instance_Class_();
	void Get_Relevant_GoggleAnim_Instance_Class(class UClass** ClassRef);
	void Get_RelevantGrenade_Anim_Instance_Class(class UClass** ClassRef);
	void Setup_Grenade_Anim_Instance_Class();
	bool BPIsValidUnStasisCaster();
	void BPOnStopTargeting(bool* bFromGamepadLeft);
	void ReceiveTick(float* DeltaSeconds);
	void ScoutDespawned();
	void Show(class USceneComponent* SceneComp);
	void Hide(class USceneComponent* SceneComp);
	void ScoutGrenadeReturned();
	void BPFiredWeapon();
	bool BPTryFireWeapon();
	bool AllowUnequip();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BPStartEquippedNotify();
	void ReceiveBeginPlay();
	void Scout_Launched(class AScout_Character_BP_C* Scout);
	class AActor* BPGetActorForTargetingTooltip();
	bool BPWeaponCanFire();
	void UserConstructionScript();
	void MULTI_ScoutLaunched();
	void MULTI_ReleasedPossessingSurvivor();
	void OWNINGCLIENT_ScoutPossessedBySurvivor();
	void OWNINGCLIENT_OnEquipNoScout();
	void MULTI_OnEquipScoutActive();
	void MULTI_ScoutGrenadeReturnedEvent();
	void MULTI_FiredWeapon();
	void MULTI_ScoutDespawned();
	void SERVER_RecallScout();
	void Initialize();
	void SERVER_ReleasedPossessingSurvivor();
	void SERVER_DoHandleFiring();
	void UpdateTooltipInfoText(class AShooterCharacter* Target);
	void ExpireTooltipInfoText();
	void ExecuteUbergraph_WeapScoutRemote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
