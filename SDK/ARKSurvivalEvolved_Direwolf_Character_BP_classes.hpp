#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direwolf_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direwolf_Character_BP.Direwolf_Character_BP_C
// 0x0134 (0x2450 - 0x231C)
class ADirewolf_Character_BP_C : public ADino_Character_BP_Pack_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Direwolf_C* DinoCharacterStatus_BP_Direwolf_C1;                       // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ResourceTypeScales;                                       // 0x2328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ResourceTypesToScale;                                     // 0x2338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SniffPassiveRadius;                                       // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SniffPassiveHealthTreshold;                               // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SniffPassiveUpdateInterval;                               // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2354(0x0004) MISSED OFFSET
	class UTexture*                                    SniffPassiveIcon;                                         // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SniffAbilityRadiusChests;                                 // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SniffAbilityRadiusHiddenDinos;                            // 0x2364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SniffAbilityDisplayTime;                                  // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x236C(0x0004) MISSED OFFSET
	class UTexture*                                    SniffAbilityHiddenDinoIcon;                               // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    SniffAbilityChestIcon;                                    // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              SniffedPassiveTargets;                                    // 0x2380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SniffedExplorerChests;                                    // 0x2390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              SniffedHiddenDinos;                                       // 0x23A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastSniffedTime;                                          // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DinoPackMateBuffClass;                                    // 0x23B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPackLeaderReplicated;                                  // 0x23C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x23C1(0x0007) MISSED OFFSET
	class FString                                      PackLeaderHUDText;                                        // 0x23C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PackLeaderHUDTextYOffset;                                 // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PackLeaderHUDTextDrawScale;                               // 0x23DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PackLeaderHUDTextColor;                                   // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowCopycatRoarWithRider;                               // 0x23F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x23F1(0x0003) MISSED OFFSET
	struct FLinearColor                                CorpseIconColor;                                          // 0x23F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ChestIconColor;                                           // 0x2404(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HiddenDinoIconColor;                                      // 0x2414(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2424(0x0004) MISSED OFFSET
	double                                             lastHowlTime;                                             // 0x2428(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x2430(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore2_RefProperty;// 0x2440(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direwolf_Character_BP.Direwolf_Character_BP_C");
		return ptr;
	}


	bool BPPreventNotifySound(class USoundBase** SoundIn);
	void RidingTick(float* DeltaSeconds);
	void AddHowlCooldownBuff();
	void PackRoar();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void GatherPack();
	void BPDoAttack(int* AttackIndex);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void DoSniffAbility();
	void GetHiddenDinos(float Radius, TArray<class AActor*>* foundDinos);
	void GetExplorerChestsInRange(float Radius, TArray<class AActor*>* FoundExplorerChests);
	void UpdateSniffedTargets();
	void BPDrawToRiderHUD(class AShooterHUD** HUD);
	void DrawSniffedTargets(class AHUD* HUD, TArray<class AActor*>* LowHealthTargets, TArray<class AActor*>* HiddenTargets, TArray<class AActor*>* ExplorerChests);
	void GetEnemysBelowHealthTreshold(float Radius, float HealthTreshold, TArray<class AActor*>* FoundActors);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void UserConstructionScript();
	void ExecuteUbergraph_Direwolf_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
