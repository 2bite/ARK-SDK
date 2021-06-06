#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x06B8 (0x1018 - 0x0960)
class ABuff_SpaceDolphinMissions_C : public ABuff_Base_C
{
public:
	class UAudioComponent*                             Sound;                                                    // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 GasHUDElement;                                            // 0x0968(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 SuperFlightSpeedHUDElement;                               // 0x0AB8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SuperFlightProgressBarColor;                              // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastestColor;                                             // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FastColor;                                                // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 AmmoHUDElement;                                           // 0x0C68(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDColor_State0;                                          // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_State1;                                          // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDColor_State2;                                          // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDInterpSpeed;                                           // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleIncreaseOnHKeyPress;                                 // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 StruggleHUDElement;                                       // 0x0DF0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StruggleHUDTextString;                                    // 0x0F40(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             DurationToLeaveStruggleHUDOnScreen;                       // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             BuffDescriptionDrafting;                                  // 0x0F70(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             BuffDescriptionLanding;                                   // 0x0FC0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BuffTypeDrafting;                                         // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceHurtForDamageOverlay;                            // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
