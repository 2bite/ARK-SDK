#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekShirt.PrimalItemArmor_TekShirt_C
// 0x0017 (0x0C18 - 0x0C01)
class UPrimalItemArmor_TekShirt_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C01(0x0007) MISSED OFFSET
	class FString                                      Cannot_Use_Ability_Description_add_on;                    // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekShirt.PrimalItemArmor_TekShirt_C");
		return ptr;
	}


	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItemArmor_TekShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
