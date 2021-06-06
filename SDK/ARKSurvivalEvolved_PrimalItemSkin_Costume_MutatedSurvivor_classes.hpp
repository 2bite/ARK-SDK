#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_MutatedSurvivor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Costume_MutatedSurvivor.PrimalItemSkin_Costume_MutatedSurvivor_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_Costume_MutatedSurvivor_C : public UPrimalItemSkin_FullCostumeTest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Costume_MutatedSurvivor.PrimalItemSkin_Costume_MutatedSurvivor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Costume_MutatedSurvivor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
