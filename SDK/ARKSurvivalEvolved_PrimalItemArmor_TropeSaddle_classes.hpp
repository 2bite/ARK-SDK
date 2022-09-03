#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TropeSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C
// 0x0004 (0x0AF4 - 0x0AF0)
class UPrimalItemArmor_TropeSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	int                                                TooltipDisplayQualityOffset;                              // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C");
		return ptr;
	}


	class FString GetInventoryIconDisplayText();
	void ExecuteUbergraph_PrimalItemArmor_TropeSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
