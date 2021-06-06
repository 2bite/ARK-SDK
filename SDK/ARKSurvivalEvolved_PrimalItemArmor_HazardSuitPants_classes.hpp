#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C
// 0x0008 (0x0B10 - 0x0B08)
class UPrimalItemArmor_HazardSuitPants_C : public UPrimalItemArmor_BasePants_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
