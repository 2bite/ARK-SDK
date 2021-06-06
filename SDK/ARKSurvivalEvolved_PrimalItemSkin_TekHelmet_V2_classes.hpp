#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekHelmet_V2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C
// 0x0010 (0x0AF0 - 0x0AE0)
class UPrimalItemSkin_TekHelmet_V2_C : public UPrimalItemSkinGeneric_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BuffCosmeticPP;                                           // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C");
		return ptr;
	}


	void ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime);
	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void InitBuff();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BlueprintOwnerPosssessed(class AController** PossessedByController);
	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
