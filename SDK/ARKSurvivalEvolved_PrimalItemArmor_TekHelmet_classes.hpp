#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekHelmet.PrimalItemArmor_TekHelmet_C
// 0x0000 (0x0A39 - 0x0A39)
class UPrimalItemArmor_TekHelmet_C : public UPrimalItemArmor_Base_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekHelmet.PrimalItemArmor_TekHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
