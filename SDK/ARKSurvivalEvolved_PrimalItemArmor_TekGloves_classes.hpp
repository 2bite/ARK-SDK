#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekGloves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C
// 0x0017 (0x0C18 - 0x0C01)
class UPrimalItemArmor_TekGloves_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C01(0x0007) MISSED OFFSET
	class FString                                      Cannot_Use_Ability_Description_add_on;                    // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekGloves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
