#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HazardSuitHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C
// 0x0008 (0x09F0 - 0x09E8)
class UPrimalItemArmor_HazardSuitHelmet_C : public UPrimalItemArmor_BaseHelmet_C
{
public:
	class UClass*                                      BuffWhileEquipped;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C");
		return ptr;
	}


	void BlueprintEquipped(bool* bIsFromSaveGame);
	void EquippedBlueprintTick(float* DeltaSeconds);
	void SetForceGainOxygen(bool Enabled);
	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemArmor_HazardSuitHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
