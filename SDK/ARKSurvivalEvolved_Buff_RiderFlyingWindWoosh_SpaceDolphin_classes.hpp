#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_SpaceDolphin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C
// 0x09AC (0x1324 - 0x0978)
class ABuff_RiderFlyingWindWoosh_SpaceDolphin_C : public ABuff_Base_C
{
public:
	struct FHUDElement                                 FuelHUDElement;                                           // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 SuperFlightSpeedHUDElement;                               // 0x0AC8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SuperFlightProgressBarColor;                              // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastestColor;                                             // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastColor;                                                // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 AmmoHUDElement;                                           // 0x0C78(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDColor_Fuel_SuperFlightOff;                             // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Fuel_SuperFlightOn;                              // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Fuel_SuperFlightBoost;                           // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Ammo_SuperFlightOff;                             // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Ammo_SuperFlightOn;                              // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Ammo_Level2;                                     // 0x0E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_Ammo_Level3;                                     // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDInterpSpeed;                                           // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleIncreaseOnHKeyPress;                                 // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             DurationToLeaveStruggleHUDOnScreen;                       // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BuffTypeDrafting;                                         // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDriftTime;                                             // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 FlightSpeedExtendedInfoHUDElement;                        // 0x0E50(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 LaserUpgradeHUDElementTemplate;                           // 0x0FA0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LaserUpgradeHUDElementSpacingMultiplier;                  // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaserLevelUpBlinkOpacity;                                 // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaserLevelUpBlinkSpeed;                                   // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x10FC(0x0004) MISSED OFFSET
	struct FHUDElement                                 PowerUpGaugeHudElement;                                   // 0x1100(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                LaserColorLevel1;                                         // 0x1250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LaserColorLevel2;                                         // 0x1260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LaserColorLevel0;                                         // 0x1270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             BuffDescriptionLaserLevel2;                               // 0x1280(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             BuffDescriptionLaserLevel1;                               // 0x12D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LaserUpgradeHUDElementStateOffset;                        // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_SpaceDolphin.Buff_RiderFlyingWindWoosh_SpaceDolphin_C");
		return ptr;
	}


	struct FLinearColor Get_Ammo_And_Laser_HUDElement_Color(bool IsUsingSuperFlight, int LaserLevel);
	bool HitCollisionStarFoxMode();
	bool StartedBraking(class ASpaceDolphin_Character_BP_C* self2);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UpdateSFX();
	struct FStatusValueModifierDescription GetBuffDescription();
	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_SpaceDolphin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
