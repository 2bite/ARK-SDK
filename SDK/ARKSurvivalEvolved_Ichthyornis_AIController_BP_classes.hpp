#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ichthyornis_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C
// 0x004B (0x0964 - 0x0919)
class AIchthyornis_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              maxDepthForFishHunting;                                   // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minAboveWaterFlyHeight;                                   // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     followingOwnerFlyingOffset;                               // 0x0924(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              randomZOffsetMax;                                         // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     flyerTargetCombatOffset;                                  // 0x0934(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              walkingTargetingRangePlayers;                             // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              flyingTargetingRangePlayers;                              // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     followingOwnerNoCarryingOffset;                           // 0x0948(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     waterTargetCombatOffset;                                  // 0x0954(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              naturalTargetingRangePlayerOrTame;                        // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C");
		return ptr;
	}


	void GetTargetingDesireTamed(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* desireMultiplier);
	void StandardTargetChecks(class APrimalCharacter* Target, class AIchthyornis_Character_BP_C* IchthyPawn, bool* canTarget);
	void Get_Targeting_Desire_Wild(class APrimalCharacter* Character, float initialDesire, float initialMultiplier, float* desire, float* Multiplier);
	float GetAggroNotifyNeighborsRange();
	void GetTargetingRangeForPlayers(float* targetingRange);
	void DoDepthCheck(class APrimalCharacter* Character, bool* NotTooDeep);
	void UpdateFlyingOffset();
	void Update_Combat_Offset();
	void ChangedAITarget();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Ichthyornis_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
