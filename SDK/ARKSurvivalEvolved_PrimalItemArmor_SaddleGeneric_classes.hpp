#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SaddleGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
// 0x0008 (0x09F0 - 0x09E8)
class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
{
public:
	double                                             LastTorchDurabilityLossTime;                              // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C");
		return ptr;
	}


	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_SaddleGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
