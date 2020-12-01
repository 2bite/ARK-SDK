#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0000 (0x09E1 - 0x09E1)
class UPrimalItemArmor_TekShirt_C : public UPrimalItemArmor_Base_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekShirt.PrimalItemArmor_TekShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
