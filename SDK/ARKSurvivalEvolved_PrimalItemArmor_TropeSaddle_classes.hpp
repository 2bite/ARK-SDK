#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0004 (0x0AEC - 0x0AE8)
class UPrimalItemArmor_TropeSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	int                                                TooltipDisplayQualityOffset;                              // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C");
		return ptr;
	}


	class FString STATIC_GetInventoryIconDisplayText();
	void ExecuteUbergraph_PrimalItemArmor_TropeSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
