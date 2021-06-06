#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CommonMushroom_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C
// 0x001C (0x0AFC - 0x0AE0)
class UPrimalItemResource_CommonMushroom_C : public UPrimalItemConsumableEatable_C
{
public:
	class UClass*                                      BuffTimeReductionClass;                                   // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuffTimeReductionDuration;                                // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UClass*                                      ImmunityBuffClass;                                        // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImmunityBuffTimeExtension;                                // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_CommonMushroom.PrimalItemResource_CommonMushroom_C");
		return ptr;
	}


	void AddImmunity();
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemResource_CommonMushroom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
