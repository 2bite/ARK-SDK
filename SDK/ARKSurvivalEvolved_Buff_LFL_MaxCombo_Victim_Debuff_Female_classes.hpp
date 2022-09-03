#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_MaxCombo_Victim_Debuff_Female_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C
// 0x000A (0x099C - 0x0992)
class ABuff_LFL_MaxCombo_Victim_Debuff_Female_C : public ABuff_Female_LFL_Maxcombo_Parent_C
{
public:
	bool                                               use_percent_damage;                                       // 0x0992(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0993(0x0001) MISSED OFFSET
	float                                              raw_damage;                                               // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              roar_boosted_damage_multiplier;                           // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LFL_MaxCombo_Victim_Debuff_Female.Buff_LFL_MaxCombo_Victim_Debuff_Female_C");
		return ptr;
	}


	void CalculateDoTDamage(float* TimeSinceLastDoT, float* Damage);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Female(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
