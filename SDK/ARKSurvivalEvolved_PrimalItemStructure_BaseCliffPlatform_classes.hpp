#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseCliffPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_BaseCliffPlatform_C : public UPrimalItemStructure_BaseCeiling_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
