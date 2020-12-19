#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseOceanPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseOceanPlatform.PrimalItemStructure_BaseOceanPlatform_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_BaseOceanPlatform_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseOceanPlatform.PrimalItemStructure_BaseOceanPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseOceanPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
