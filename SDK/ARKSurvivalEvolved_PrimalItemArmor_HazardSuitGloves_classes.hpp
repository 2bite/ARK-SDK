#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitGloves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C
// 0x0008 (0x0AF0 - 0x0AE8)
class UPrimalItemArmor_HazardSuitGloves_C : public UPrimalItemArmor_BaseGloves_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
