#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpinoAqua_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SpinoAqua.Buff_SpinoAqua_C
// 0x0020 (0x0970 - 0x0950)
class ABuff_SpinoAqua_C : public ABuff_Base_C
{
public:
	float                                              MovementSpeedMultiplier;                                  // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbilityCooldownTime;                                      // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningRadiusMultiplier;                                  // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackDamageMultiplier;                                   // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthRegenMultiplier;                                    // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpinoAqua.Buff_SpinoAqua_C");
		return ptr;
	}


	void ActivateAquaBuff();
	void DeactivateAquaBuff();
	void UserConstructionScript();
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_SpinoAqua(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
