#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BogSpider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C
// 0x000C (0x057C - 0x0570)
class UDinoTamedInventoryComponent_BogSpider_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	class UClass*                                      BloodPackClass;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BloodPackUseInterval;                                     // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C");
		return ptr;
	}


	float BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
