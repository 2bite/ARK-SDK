#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_AnimeRaptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_AnimeRaptor.PrimalItemCostume_AnimeRaptor_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemCostume_AnimeRaptor_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_AnimeRaptor.PrimalItemCostume_AnimeRaptor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_AnimeRaptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif