#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mushroom_Auric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C
// 0x002C (0x0B14 - 0x0AE8)
class UPrimalItemConsumable_Mushroom_Auric_C : public UPrimalItemConsumable_Berry_Base_C
{
public:
	TArray<class UClass*>                              BuffTimeReductionClasses;                                 // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BuffTimeReductionDuration;                                // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ImmunityBuffClasses;                                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ImmunityBuffTimeExtension;                                // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C");
		return ptr;
	}


	void Add_Immunity();
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
