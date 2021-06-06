#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_09_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_09.PrimalItemArtifact_09_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemArtifact_09_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_09.PrimalItemArtifact_09_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_09(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
