#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Poison_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Thornmail_Poison.Buff_Thornmail_Poison_C
// 0x000A (0x0984 - 0x097A)
class ABuff_Thornmail_Poison_C : public ABuff_Thornmail_Parent_C
{
public:
	bool                                               use_percent_damage;                                       // 0x097A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x097B(0x0001) MISSED OFFSET
	float                                              raw_damage;                                               // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              roar_boosted_damage_multiplier;                           // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Thornmail_Poison.Buff_Thornmail_Poison_C");
		return ptr;
	}


	void CalculateDoTDamage(float* TimeSinceLastDoT, float* Damage);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Thornmail_Poison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
