#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mushroom_Ascerbic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Ascerbic.PrimalItemConsumable_Mushroom_Ascerbic_C
// 0x001C (0x0A1C - 0x0A00)
class UPrimalItemConsumable_Mushroom_Ascerbic_C : public UPrimalItemConsumable_Berry_Narcoberry_C
{
public:
	class UClass*                                      BuffTimeReductionClass;                                   // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffTimeReductionDuration;                                // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class UClass*                                      ImmunityBuffClass;                                        // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImmunityBuffTimeExtension;                                // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Ascerbic.PrimalItemConsumable_Mushroom_Ascerbic_C");
		return ptr;
	}


	void Add_Immunity();
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_Mushroom_Ascerbic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
