#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Netted_Material_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Netted_Material.Buff_Netted_Material_C
// 0x0320 (0x0C80 - 0x0960)
class ABuff_Netted_Material_C : public ABuff_Base_C
{
public:
	bool                                               bSleepingEnabled;                                         // 0x0960(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      NettedMesh;                                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NettedMID;                                                // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NettedMaterial;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerEnableSleeping;                                    // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	double                                             DeactivationTime;                                         // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNetHealth;                                             // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentNetHealth;                                         // 0x0994(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetHealthPerCut;                                          // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	double                                             LastCutTime;                                              // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      NettedMesh1P;                                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NettedMIDFPV;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NettedMaterialFPV;                                        // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     CachedWeapon;                                             // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           NettedShooterChar;                                        // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHUDStruggleAmount;                                 // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class FString                                      StruggleHUDTextString;                                    // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FHUDElement                                 StruggleHUDElement;                                       // 0x09E8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StruggleHUDDisplayPercent;                                // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	struct FHUDRichTextOverlayData                     StruggleHUDRichText;                                      // 0x0B40(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SavedIgnoreAllyLook;                                      // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0BA1(0x0007) MISSED OFFSET
	TArray<struct FName>                               PreventedTekBuffs;                                        // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWasRiding;                                               // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	struct FVector                                     DinoRightVector;                                          // 0x0BBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DismountImpulseStrength;                                  // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	class FString                                      CutNetHintText;                                           // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      EquipWeaponToCutHintText;                                 // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                CutNetHintColor;                                          // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EquipWeaponToCutHintColor;                                // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HintTextOffset;                                           // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HintTextScale;                                            // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HintTextMaxDistance;                                      // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0C20(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform2_AddComponentDefaultTransform;// 0x0C50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Netted_Material.Buff_Netted_Material_C");
		return ptr;
	}


	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void CanCutNet(class AShooterCharacter* ShooterChar, bool* bCanCut);
	float BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	bool BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void BPPreSetupForInstigator(class AActor** ForInstigator);
	TArray<struct FName> BPPreventTekArmorBuffs();
	void PlayPinnedAnim();
	void BPHandleOnStopAltFire(bool* bFromGamepad);
	void BPHandleOnStartAltFire(bool* bFromGamepad);
	void BuffTickServer(float* DeltaTime);
	float BPAdjustDamage_Ex(float* Damage, class AController** EventInstigator, class AActor** InDamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo, struct FVector* ImpulseDir);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BuffTickClient(float* DeltaTime);
	void STATIC_TryCuttingRope();
	void BPHandleOnStopFire(bool* bFromGamepad);
	void BPHandleOnStartFire(bool* bFromGamepad);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void ReduceNetHealth();
	void ReceiveDestroyed();
	void FadeOutNet();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void OnRep_bSleepingEnabled();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Netted_Material(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
