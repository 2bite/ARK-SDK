#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekShirt_V2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C
// 0x0030 (0x0A30 - 0x0A00)
class UPrimalItemSkin_TekShirt_V2_C : public UPrimalItemSkinGeneric_C
{
public:
	struct UObject_FTransform                          TekSuitVFXOffset;                                         // 0x0A00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C");
		return ptr;
	}


	void TrySetTeksuitVFXOffset(bool Unequip);
	void ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemSkin_TekShirt_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
