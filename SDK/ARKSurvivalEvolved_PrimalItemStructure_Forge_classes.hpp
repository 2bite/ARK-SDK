#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Forge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Forge.PrimalItemStructure_Forge_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_Forge_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Forge.PrimalItemStructure_Forge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Forge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif