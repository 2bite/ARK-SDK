#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertClothGloves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_DesertClothGloves.PrimalItemArmor_DesertClothGloves_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemArmor_DesertClothGloves_C : public UPrimalItemArmor_BaseGloves_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_DesertClothGloves.PrimalItemArmor_DesertClothGloves_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_DesertClothGloves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
