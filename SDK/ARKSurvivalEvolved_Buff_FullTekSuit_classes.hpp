#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FullTekSuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FullTekSuit.Buff_FullTekSuit_C
// 0x0030 (0x08D0 - 0x08A0)
class ABuff_FullTekSuit_C : public APrimalBuff
{
public:
	TArray<class UClass*>                              PreventAddingBuffs;                                       // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DurabilityCostForPreventAddingBuff;                       // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              DurabilityArmorClasses;                                   // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FullTekSuit.Buff_FullTekSuit_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FullTekSuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
