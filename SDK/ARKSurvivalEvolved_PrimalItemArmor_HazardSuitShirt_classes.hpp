#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C
// 0x0008 (0x0AF0 - 0x0AE8)
class UPrimalItemArmor_HazardSuitShirt_C : public UPrimalItemArmor_BaseShirt_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
