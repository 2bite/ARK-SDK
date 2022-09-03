#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ExosuitRider.Buff_ExosuitRider_C
// 0x04C8 (0x0E40 - 0x0978)
class ABuff_ExosuitRider_C : public APrimalBuff
{
public:
	struct FHUDElement                                 FuelHUDElement;                                           // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Default;                           // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Low;                               // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Critical;                          // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 BeamEnergyHUDElement;                                     // 0x0B28(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CriticallyLowEnergyAmount;                                // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C7C(0x0004) MISSED OFFSET
	struct FHUDElement                                 BeamEnergyTextHUDElement;                                 // 0x0C80(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              EnergyBarBlinkSpeed;                                      // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevBeamEnergy;                                           // 0x0DD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireHyperbeamTextBlinkSpeed;                              // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	struct FHUDRichTextOverlayData                     FireHyperbeamHUDRichText;                                 // 0x0DE0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExosuitRider.Buff_ExosuitRider_C");
		return ptr;
	}


	void GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump);
	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void BPDeactivated(class AActor** ForInstigator);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void ThrottledTick();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ExosuitRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
