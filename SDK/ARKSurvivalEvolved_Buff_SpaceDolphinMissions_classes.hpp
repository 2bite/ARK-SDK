#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceDolphinMissions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C
// 0x06B8 (0x1030 - 0x0978)
class ABuff_SpaceDolphinMissions_C : public ABuff_Base_C
{
public:
	class UAudioComponent*                             Sound;                                                    // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 GasHUDElement;                                            // 0x0980(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
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
	float                                              ScaleIncreaseOnHKeyPress;                                 // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 StruggleHUDElement;                                       // 0x0E08(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StruggleHUDTextString;                                    // 0x0F58(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             DurationToLeaveStruggleHUDOnScreen;                       // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             BuffDescriptionDrafting;                                  // 0x0F88(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             BuffDescriptionLanding;                                   // 0x0FD8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BuffTypeDrafting;                                         // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceHurtForDamageOverlay;                            // 0x102C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	bool HitCollisionStarFoxMode();
	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SpaceDolphinMissions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
