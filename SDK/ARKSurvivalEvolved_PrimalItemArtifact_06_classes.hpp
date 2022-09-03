#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_06_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_06.PrimalItemArtifact_06_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArtifact_06_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_06.PrimalItemArtifact_06_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_06(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
