#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuit_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C
// 0x0020 (0x0980 - 0x0960)
class ABuff_HazardSuit_Base_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	TArray<class UClass*>                              PreventAddingBuffs;                                       // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DurabilityCostForPreventAddingBuff;                       // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HazardSuit_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
