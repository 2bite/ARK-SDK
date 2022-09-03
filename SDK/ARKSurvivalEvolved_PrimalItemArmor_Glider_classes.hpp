#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Glider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_Glider.PrimalItemArmor_Glider_C
// 0x0008 (0x0AF0 - 0x0AE8)
class UPrimalItemArmor_Glider_C : public UPrimalItemSkinGeneric_C
{
public:
	class UPrimalItem*                                 Ref_OwnerItem;                                            // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Glider.PrimalItemArmor_Glider_C");
		return ptr;
	}


	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void BlueprintUnequipped();
	void STATIC_BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_Glider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
