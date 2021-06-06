#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WyvernMilk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C
// 0x0008 (0x0AE8 - 0x0AE0)
class UPrimalItemConsumable_WyvernMilk_C : public UPrimalItemConsumableEatable_NoIceBox_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_WyvernMilk.PrimalItemConsumable_WyvernMilk_C");
		return ptr;
	}


	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_WyvernMilk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
