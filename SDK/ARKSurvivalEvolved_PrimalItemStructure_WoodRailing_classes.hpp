#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodRailing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodRailing.PrimalItemStructure_WoodRailing_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_WoodRailing_C : public UPrimalItemStructure_BaseRailing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodRailing.PrimalItemStructure_WoodRailing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodRailing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif