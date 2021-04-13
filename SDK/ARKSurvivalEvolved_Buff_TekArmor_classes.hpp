#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
// 0x019A (0x0AFA - 0x0960)
class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
{
public:
	class AShooterCharacter*                           Ref_OwningPlayer;                                         // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  currentEquipmentSlot;                                     // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class APlayerController*                           Ref_OwningPlayerController;                               // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABuff_TekArmor_C*                            SelfAsObj;                                                // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapFists_C*                                FistWeapon;                                               // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItemArmor_Base_Tek_C*                 Ref_ArmorPiece;                                           // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  TekBuffEquipmentType;                                     // 0x0990(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTekAbilityActive;                                      // 0x0991(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0992(0x0002) MISSED OFFSET
	struct FLinearColor                                TekArmorMessage_Color;                                    // 0x0994(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekArmorMessage_DisplayScale;                             // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekArmorMessage_DisplayTime;                              // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteAmmo;                                            // 0x09AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	TArray<class ATekArmor_EffectActor_C*>             SpawnedFXActors;                                          // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       TekArmorName;                                             // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  TekArmorIcon;                                             // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldWarpFOV;                                           // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	float                                              warpFOV_target;                                           // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_MAX;                                              // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_lag_in;                                           // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_lag_out;                                          // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_start;                                            // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeElementInterval;                                   // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastConsumeElement;                              // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  preventAbilityActiveSlot;                                 // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTekIgnoredMoveInput;                                     // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTekIgnoredLookInput;                                     // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeftBumperHeld;                                          // 0x09F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWeapon;                                                // 0x09F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09F5(0x0003) MISSED OFFSET
	class FString                                      Restricted_because_of_genesis_map_string;                 // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GenesisAbilityErrorRateLimitSeconds;                      // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_set_whether_tek_abilities_are_allowed_in_genesis;     // 0x0A0C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               tek_abilities_are_allowed_in_genesis;                     // 0x0A0D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0A0E(0x0002) MISSED OFFSET
	class FString                                      GenesisMapName;                                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPrimalEquipmentType>                  K2Node_CustomEvent_ItemSlot;                              // 0x0A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A21(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_particleTemplate;                      // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundBase*                                  K2Node_CustomEvent_Sound;                                 // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0A38(0x0008) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_transform;                             // 0x0A40(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_soundVolume;                           // 0x0A70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_soundPitch;                            // 0x0A74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue;               // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItemArmor_Base_Tek_C*                 K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C;          // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_AmountToDecreaseBy;                    // 0x0A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  K2Node_CustomEvent_ItemSlot2;                             // 0x0A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A91(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue2;              // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItemArmor_Base_Tek_C*                 K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C2;         // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0AA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newActive;                             // 0x0AA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0AAA(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_TimeSeconds_ReturnValue;                         // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0AE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	class AShooterPlayerState*                         K2Node_DynamicCast_AsShooterPlayerState;                  // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCooldownComplete_ReturnValue;                  // 0x0AF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C");
		return ptr;
	}


	void check_genesis_restrictions_for_player(class APrimalCharacter* Player, bool* is_restricted);
	void BPActivated(class AActor** ForInstigator);
	void Is_Restricted_Because_Of_Genesis_Map(bool* restricted);
	void Get_Is_Player_in_SealedSpace(bool* Result);
	void IsAbilityValid(bool* OutValid);
	void IsPlayerInWaterVolume(bool* Result, float* waterVolumeTopZ);
	void SpawnFX(class UParticleSystem* EmitterTemplate, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, struct UObject_FTransform* InTransform);
	void Should_Damage_Actor(class AActor* Victim, bool* Result);
	void ResetPlayerFOV();
	void SetTekIgnoreLookInput(bool newIgnore);
	void SetTekIgnoreMoveInput(bool newIgnore);
	bool AllowPostProcessEffect();
	void BPDeactivated(class AActor** ForInstigator);
	void ResetTargetFOV();
	void IsWarping_FOV(bool* Result);
	void Get_DefaultTekBuff(class ABuff_TekArmor_C** ref);
	void GetDefaultPlayer(class APrimalCharacter** ref);
	void Client_Consume_Element_After_Time(float DeltaTime, int ElementCost);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void IsPlayerGrounded(bool* Result);
	void Get_RefOwningPlayer_Camera_Manager(class AShooterPlayerCameraManager** ref);
	void UpdatePlayerFOV(float intensityRatio, bool warpIn);
	void Get_Ref_Owning_PlayerMovement(class UCharacterMovementComponent** movement);
	void Get_Ref_Owning_PlayerController(class AShooterPlayerController** Controller);
	void GetRef_OwningPlayer(class AShooterCharacter** Player);
	void AreAnyTekAbilitiesActive(bool* Result);
	void IsTekArmorUsingAbility_(unsigned char armorType, bool* Result);
	void DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound);
	void SetCastedArmorPieceRef();
	void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
	void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
	void UserConstructionScript();
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_33();
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_32();
	void Equipped_TryToDecreaseElement(int AmountToDecreaseBy, TEnumAsByte<EPrimalEquipmentType> ItemSlot);
	void Equipped_SetToMaxElement(TEnumAsByte<EPrimalEquipmentType> ItemSlot);
	void Multi_SpawnFX(class UParticleSystem* particleTemplate, class USoundBase* Sound, const struct UObject_FTransform& Transform, float soundVolume, float soundPitch);
	void CheckForArmorRef();
	void Server_SetTekAbilityActive(bool newActive);
	void RateLimitedGenesisAbilityWarning();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Buff_TekArmor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
