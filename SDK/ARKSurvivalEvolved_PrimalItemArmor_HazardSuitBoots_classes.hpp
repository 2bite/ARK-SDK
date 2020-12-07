#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitBoots_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C
// 0x0008 (0x09F0 - 0x09E8)
class UPrimalItemArmor_HazardSuitBoots_C : public UPrimalItemArmor_BaseBoots_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitBoots.PrimalItemArmor_HazardSuitBoots_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitBoots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
