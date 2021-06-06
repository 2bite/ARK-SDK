#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EggIncubator.EggIncubator_C
// 0x0548 (0x1358 - 0x0E10)
class AEggIncubator_C : public AStructureItemContainerBaseBP_C
{
public:
	class UParticleSystemComponent*                    WarmLight9;                                               // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight8;                                               // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight7;                                               // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight6;                                               // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight5;                                               // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight4;                                               // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight3;                                               // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight2;                                               // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight1;                                               // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmLight0;                                               // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WarmLights;                                               // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot9;                                                 // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot8;                                                 // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot7;                                                 // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot6;                                                 // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot5;                                                 // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot4;                                                 // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot3;                                                 // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot2;                                                 // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot1;                                                 // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        EggSlot0;                                                 // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             EggSlots;                                                 // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_EggIncubator_C*           PrimalInventoryBP_EggIncubator_C1;                        // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CachedEggHatchSpeedMultiplier;                            // 0x0EC8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ECC(0x0004) MISSED OFFSET
	double                                             LastUpdateCachedHatchSpeed;                               // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              HatchSpeedCacheRateSeconds;                               // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IncubationFloorClamp;                                     // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DedicatedServerIncubationUpdateRateSeconds;               // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlValue;                                         // 0x0EE4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TempControlRangeMin;                                      // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlRangeMax;                                      // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlBonusMultiplierRangeMin;                       // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlBonusMultiplierRangeMax;                       // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TempControlUnpoweredString;                               // 0x0EF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                TempControlUnpoweredTextColor;                            // 0x0F08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TempValuePrefixString;                                    // 0x0F18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                TempControlMinHeatColor;                                  // 0x0F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TempControlMaxHeatColor;                                  // 0x0F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TempControlEntryBackString;                               // 0x0F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TempControlEntryCategoryString;                           // 0x0F58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TempControlEntryIncreasePrefix;                           // 0x0F68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TempControlEntryDecreasePrefix;                           // 0x0F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TempControlMinQuantity;                                   // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlMedQuantity;                                   // 0x0F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempControlMaxQuantity;                                   // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0F94(0x0004) MISSED OFFSET
	TArray<bool>                                       EggSlotInUse;                                             // 0x0F98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AViewableIncubatorEgg_C*>             EggSlotDisplayEggs;                                       // 0x0FA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UPrimalItemConsumable_Egg_C*>         EggSlotEggItems;                                          // 0x0FB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ListeningServerIncubationUpdateRateSeconds;               // 0x0FC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientIncubationUpdateRateSeconds;                        // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayEggSyncRate;                                       // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastEggSlotSynced;                                        // 0x0FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastServerSyncEggDisplay;                                 // 0x0FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUpdateIncubation;                                     // 0x0FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     selfRef;                                                  // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BabySpawnLocationForwardOffset;                           // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0FF4(0x0004) MISSED OFFSET
	class FString                                      CrackEggString;                                           // 0x0FF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HatchEggString;                                           // 0x1008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              EggThermalInsulationTemperatureMultiplier;                // 0x1018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HypoThermalInsulation;                                    // 0x101C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HyperThermalInsulation;                                   // 0x1020(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorsHypoThermalInsulation;                             // 0x1024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndoorsHyperThermalInsulation;                            // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsIndoors;                                               // 0x102C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x102D(0x0003) MISSED OFFSET
	double                                             LastInsulationCalcTime;                                   // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InsulationUpdateRateSeconds;                              // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InsulationCheckRadius;                                    // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EggCrackActorTemplate;                                    // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoHatchEggsWhenUnpowered;                              // 0x1048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDamageEggsWhenUnpoweredAndUnableToIncubate;              // 0x1049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x104A(0x0006) MISSED OFFSET
	class UParticleSystem*                             WarmingLightTemplate;                                     // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ScreenMatInst;                                            // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScreenMaterialIndex;                                      // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1064(0x0004) MISSED OFFSET
	class UPrimalEggToolTipWidget*                     FoundToolTipCDO;                                          // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1070(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x1074(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1075(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_GetWarmingLightForSlot_WarmingLightComponent;    // 0x1078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1081(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1084(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_SlotIndex2;                            // 0x1088(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x108C(0x0004) MISSED OFFSET
	struct FUnreplicatedEggData                        K2Node_CustomEvent_ManuallyReplicatedEggData;             // 0x1090(0x0058) (Transient, DuplicateTransient)
	struct FItemNetInfo                                K2Node_CustomEvent_ItemNetInfo;                           // 0x10E8(0x01B0) (Transient, DuplicateTransient)
	int                                                K2Node_CustomEvent_SlotIndex;                             // 0x1298(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x129C(0x0004) MISSED OFFSET
	TArray<class AShooterPlayerController*>            CallFunc_GetAllLocalPlayerControllers_ReturnValue;        // 0x12A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterPlayerController*                    CallFunc_Array_Get_Item;                                  // 0x12B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalInventoryBP_EggIncubator_C*           K2Node_DynamicCast_AsPrimalInventoryBP_EggIncubator_C;    // 0x12C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x12C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x12C9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x12CC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x12DC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x12EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x12ED(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_ItemID1;                               // 0x12F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_ItemID2;                               // 0x12F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x12F8(0x0040) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1338(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x133C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item2;                                 // 0x133D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x133E(0x0002) MISSED OFFSET
	class UPrimalItemConsumable_Egg_C*                 CallFunc_Array_Set_Item_RefProperty;                      // 0x1340(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	class UPrimalItemConsumable_Egg_C*                 CallFunc_Array_Set_Item2_RefProperty;                     // 0x1348(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	class UPrimalItemConsumable_Egg_C*                 CallFunc_Array_Set_Item3_RefProperty;                     // 0x1350(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EggIncubator.EggIncubator_C");
		return ptr;
	}


	void IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* EggItem, bool* IsAllowed);
	void GetItemDisplaySlot(class UPrimalItem* ForItem, int* InSlot, bool* SlotFound);
	void BPNotifyPowerChanged();
	void SetIncubatorMaterialValues();
	void UpdateWarmingLights();
	void GetWarmingLightForSlot(int ForSlotIndex, class UParticleSystemComponent** WarmingLightComponent);
	void STATIC_DestroyEggDisplay(int ItemID1, int ItemID2);
	void CanEggIncubateInTemp(class UPrimalItemConsumable_Egg_C* EggItem, bool* bCanIncubate);
	void UpdateIndoorsStatus();
	void CalculateIncubationInsulation();
	void CanEggBeHatched(class UPrimalItemConsumable_Egg_C* EggItem, bool* IsHatchable);
	void TrySpawnEggToWorld(class UPrimalItemConsumable_Egg_C* EggItem, bool* EggWasSpawned);
	void ThrottledTick();
	void STATIC_ServerSyncEggDisplay();
	void GetTempBonusRawPercent(float EggTempLowerBound, float EggTempUpperBound, float* BoostPercent);
	void STATIC_SetIncubatorCustomDatasForEgg(class UPrimalItemConsumable_Egg_C* EggItem);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void ClientRemoveFertilizedEgg(int SlotIndex);
	void ClientAddFertilizedEgg(int SlotIndex, struct FUnreplicatedEggData* ManuallyReplicatedEggData, struct FItemNetInfo* ItemNetInfo);
	void SetupEggSlots();
	void RefreshEggDisplays();
	void CheckIsFertilizedEgg(class UPrimalItemConsumable_Egg_C* EggItem, bool* IsFertilized);
	void GetSlotIndexForEggItem(class UPrimalItemConsumable_Egg_C* EggItem, int* SlotIndex);
	void GetFirstAvailableEggSlotIndex(int* EggSlotIndex);
	void BPPostInitializeComponents();
	void ServerRemoveFertilizedEgg(class UPrimalItemConsumable_Egg_C* EggItem);
	void STATIC_ServerAddFertilizedEgg(class UPrimalItemConsumable_Egg_C* EggItem);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void AddTempControlEntries(TArray<struct FMultiUseEntry>* MultiUseEntries);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPGetMultiUseCenterText(class APlayerController** ForPC, int* UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor);
	void GetTempControlBonus(float EggTempLowerBound, float EggTempUpperBound, float* TempControlBonusMultiplier);
	void UpdateIncubation();
	void UpdateCachedHatchSpeedMultiplier();
	void UserConstructionScript();
	void ClientNotifyAddedEgg(int SlotIndex, const struct FUnreplicatedEggData& ManuallyReplicatedEggData, const struct FItemNetInfo& ItemNetInfo);
	void ClientNotifyRemovedEgg(int SlotIndex);
	void ReceiveBeginPlay();
	void MC_DestroyEggVFX(int ItemID1, int ItemID2);
	void BPUnstasis();
	void MC_UpdateWarmingLighhts();
	void MC_NotifyPowerChanged();
	void ExecuteUbergraph_EggIncubator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
