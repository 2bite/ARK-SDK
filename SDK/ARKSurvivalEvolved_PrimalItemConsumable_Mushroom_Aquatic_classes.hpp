#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mushroom_Aquatic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C
// 0x001C (0x09AC - 0x0990)
class UPrimalItemConsumable_Mushroom_Aquatic_C : public UPrimalItemConsumable_Berry_Base_C
{
public:
	class UClass*                                      BuffTimeReductionClass;                                   // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffTimeReductionDuration;                                // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	class UClass*                                      ImmunityBuffClass;                                        // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImmunityBuffTimeExtension;                                // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C");
		return ptr;
	}


	void Add_Immunity();
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
