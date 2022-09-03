#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_Trope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C
// 0x068C (0x1004 - 0x0978)
class ABuff_RiderFlyingWindWoosh_Trope_C : public ABuff_Base_C
{
public:
	class UAudioComponent*                             Sound;                                                    // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 FuelHUDElement;                                           // 0x0980(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 SuperFlightSpeedHUDElement;                               // 0x0AD0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SuperFlightProgressBarColor;                              // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastestColor;                                             // 0x0C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastColor;                                                // 0x0C70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 AmmoHUDElement;                                           // 0x0C80(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDColor_State0;                                          // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_State1;                                          // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_State2;                                          // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDInterpSpeed;                                           // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E04(0x0004) MISSED OFFSET
	struct FStatusValueModifierDescription             BuffDescriptionDrafting;                                  // 0x0E08(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             BuffDescriptionLanding;                                   // 0x0E58(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BuffTypeDrafting;                                         // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	struct FHUDElement                                 SpeedLabelHUDElement;                                     // 0x0EB0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpeedHUDVariance;                                         // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C");
		return ptr;
	}


	void UpdateSFX();
	int GetBuffType();
	struct FStatusValueModifierDescription STATIC_GetBuffDescription();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
