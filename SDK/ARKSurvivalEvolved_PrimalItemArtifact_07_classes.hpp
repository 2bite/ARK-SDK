#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_07_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_07.PrimalItemArtifact_07_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemArtifact_07_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_07.PrimalItemArtifact_07_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_07(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif