#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BloodExtractor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BloodExtractor.PrimalItem_BloodExtractor_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_BloodExtractor_C : public UPrimalItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BloodExtractor.PrimalItem_BloodExtractor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_BloodExtractor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
