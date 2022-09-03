#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFLAqua_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_LFLAqua.Buff_LFLAqua_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_LFLAqua_C : public ABuff_Base_C
{
public:
	float                                              AbilityCooldownTime;                                      // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningRadiusMultiplier;                                  // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackDamageMultiplier;                                   // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthRegenMultiplier;                                    // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LFLAqua.Buff_LFLAqua_C");
		return ptr;
	}


	void ActivateAquaBuff();
	void DeactivateAquaBuff();
	void UserConstructionScript();
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_LFLAqua(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
