#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekGenerator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_TekGenerator.StorageBox_TekGenerator_C
// 0x016E (0x0F7E - 0x0E10)
class AStorageBox_TekGenerator_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_TekGenerator_C*           PrimalInventoryBP_TekGenerator_C1;                        // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        InnerShield;                                              // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        OuterShield;                                              // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastCraftingNotificationTime;                             // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushVelocityMagnitude;                                    // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPushOutVelocity;                                       // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ExtraIgnorePawnPushers;                                   // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              PushedPawns;                                              // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bPushTimerSet;                                            // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E69(0x0003) MISSED OFFSET
	float                                              DefaultShieldRadius;                                      // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UserShieldRadiusUnits;                                    // 0x0E70(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ShieldRadiusPerUserUnit;                                  // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShieldRadiusMaxUserUnits;                                 // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRadiusScale;                                        // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentShieldRadiusInterp;                                // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRadiusInterpSpeed;                                  // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldActiveOpacity;                                      // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldOpacityInterpSpeed;                                 // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldParticleBeamZScale;                                 // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldParticleBeamZOffset;                                // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumptionRateRadiusScale;                           // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorizationSaturation;                                   // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShieldImpactEmitter;                                      // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LocalPlayPawnPushSoundTime;                               // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PawnImpactSound;                                          // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             PowerUpCompletionTime;                                    // 0x0EB8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerUpTime;                                              // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EC4(0x0004) MISSED OFFSET
	TArray<class APrimalStructureItemContainer*>       PoweredStructures;                                        // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SaveGame)
	double                                             LastRadiusChangeTime;                                     // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceDisplayRadius;                                      // 0x0EE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsDestroying;                                            // 0x0EE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0EE2(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewUserRadiusValue;                    // 0x0EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0EF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0EF5(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDesiredRadiusMultiplier_OutRadiusMultiplier;  // 0x0EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x0EFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EFD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x0F04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x0F09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0F0A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0F21(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F39(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDesiredRadiusMultiplier_OutRadiusMultiplier2; // 0x0F3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0F44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0F45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0F46(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0F47(0x0001) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0F58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0F5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0F5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0F5E(0x0002) MISSED OFFSET
	float                                              CallFunc_TimeSince_ReturnValue2;                          // 0x0F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0F64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x0F65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0F66(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0F67(0x0001) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue;                                // 0x0F68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0F6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0F6D(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_BoolToFloat_ReturnValue;                    // 0x0F70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue2;                // 0x0F75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0F76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x0F77(0x0001) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue2;                 // 0x0F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newForceDisplayRadius;                 // 0x0F7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0F7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_TekGenerator.StorageBox_TekGenerator_C");
		return ptr;
	}


	void GetStructureChainStarts(TArray<class APrimalStructure*>* AllStructures, TArray<class APrimalStructure*>* OutStartStructures);
	void ReceiveDestroyed();
	void PowerGeneratorBuiltNearbyPoweredStructure(class APrimalStructureItemContainer** PoweredStructure);
	void BPChangedActorTeam();
	void RefreshPoweredStructures();
	void ReceiveBeginPlay();
	void CheckChargeEffect();
	void OnRep_PowerUpCompletionTime();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void BPRefreshedStructureColors();
	float BPGetFuelConsumptionMultiplier();
	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly);
	void GetDesiredRadiusMultiplier(int IncrementAmount, float* OutRadiusMultiplier);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPPostInitializeComponents();
	void BPPostSetStructureCollisionChannels();
	void SetShieldActive(bool bActive);
	void BPContainerDeactivated();
	void BPContainerActivated();
	void UserConstructionScript();
	void NetRefreshRadiusScale(int NewUserRadiusValue);
	void UpdateShieldInterp();
	void UpdateShieldOpacity();
	void FinishPowerUp();
	void DoRefreshPoweredStructures();
	void NetSetForceDisplayRadius(bool newForceDisplayRadius);
	void DoNetPulseRadius();
	void ExecuteUbergraph_StorageBox_TekGenerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
