#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FullHazardSuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FullHazardSuit.Buff_FullHazardSuit_C
// 0x0030 (0x09A8 - 0x0978)
class ABuff_FullHazardSuit_C : public APrimalBuff
{
public:
	TArray<class UClass*>                              PreventAddingBuffs;                                       // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DurabilityCostForPreventAddingBuff;                       // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              DurabilityArmorClasses;                                   // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FullHazardSuit.Buff_FullHazardSuit_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FullHazardSuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
