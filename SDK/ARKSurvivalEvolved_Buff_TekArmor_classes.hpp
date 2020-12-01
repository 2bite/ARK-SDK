#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0119 (0x09C9 - 0x08B0)
class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
{
public:
	class AShooterCharacter*                           Ref_OwningPlayer;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  currentEquipmentSlot;                                     // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	class APlayerController*                           Ref_OwningPlayerController;                               // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABuff_TekArmor_C*                            SelfAsObj;                                                // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeapFists_C*                                FistWeapon;                                               // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItemArmor_Base_Tek_C*                 Ref_ArmorPiece;                                           // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  TekBuffEquipmentType;                                     // 0x08E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTekAbilityActive;                                      // 0x08E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08E2(0x0002) MISSED OFFSET
	struct FLinearColor                                TekArmorMessage_Color;                                    // 0x08E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekArmorMessage_DisplayScale;                             // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TekArmorMessage_DisplayTime;                              // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInfiniteAmmo;                                            // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	TArray<class ATekArmor_EffectActor_C*>             SpawnedFXActors;                                          // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       TekArmorName;                                             // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  TekArmorIcon;                                             // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldWarpFOV;                                           // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              warpFOV_target;                                           // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_MAX;                                              // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_lag_in;                                           // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_lag_out;                                          // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              warpFOV_start;                                            // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeElementInterval;                                   // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastConsumeElement;                              // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  preventAbilityActiveSlot;                                 // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTekIgnoredMoveInput;                                     // 0x0941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTekIgnoredLookInput;                                     // 0x0942(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeftBumperHeld;                                          // 0x0943(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWeapon;                                                // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_AmountToDecreaseBy;                    // 0x0948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  K2Node_CustomEvent_ItemSlot2;                             // 0x094C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPrimalEquipmentType>                  K2Node_CustomEvent_ItemSlot;                              // 0x094D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x094E(0x0002) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue;               // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue2;              // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItemArmor_Base_Tek_C*                 K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C;          // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class UPrimalItemArmor_Base_Tek_C*                 K2Node_DynamicCast_AsPrimalItemArmor_Base_Tek_C2;         // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0979(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_particleTemplate;                      // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundBase*                                  K2Node_CustomEvent_sound;                                 // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FTransform                                  K2Node_CustomEvent_transform;                             // 0x0990(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_soundVolume;                           // 0x09C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_soundPitch;                            // 0x09C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newActive;                             // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C");
		return ptr;
	}


	void Get_Is_Player_in_SealedSpace(bool* Result);
	void IsAbilityValid(bool* OutValid);
	void IsPlayerInWaterVolume(bool* Result, float* waterVolumeTopZ);
	void SpawnFX(class UParticleSystem* EmitterTemplate, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, struct FTransform* InTransform);
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
	void Client_Consume_Element_After_Time(float DeltaTime, int elementCost);
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
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_35();
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_34();
	void Equipped_TryToDecreaseElement(int AmountToDecreaseBy, TEnumAsByte<EPrimalEquipmentType> ItemSlot);
	void Equipped_SetToMaxElement(TEnumAsByte<EPrimalEquipmentType> ItemSlot);
	void Multi_SpawnFX(class UParticleSystem* particleTemplate, class USoundBase* Sound, const struct FTransform& Transform, float soundVolume, float soundPitch);
	void CheckForArmorRef();
	void Server_SetTekAbilityActive(bool newActive);
	void ExecuteUbergraph_Buff_TekArmor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
