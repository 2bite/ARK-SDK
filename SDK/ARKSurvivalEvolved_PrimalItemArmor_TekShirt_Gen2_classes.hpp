#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekShirt_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C
// 0x0038 (0x0C50 - 0x0C18)
class UPrimalItemArmor_TekShirt_Gen2_C : public UPrimalItemArmor_TekShirt_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C18(0x0008) MISSED OFFSET
	struct UObject_FTransform                          TekSuitVFXOffset;                                         // 0x0C20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C");
		return ptr;
	}


	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BlueprintUnequipped();
	void TryTekSuitVFXOffset(bool IsUnequip);
	void ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
