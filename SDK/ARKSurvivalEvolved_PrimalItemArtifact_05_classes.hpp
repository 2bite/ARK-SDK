#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_05_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_05.PrimalItemArtifact_05_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemArtifact_05_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_05.PrimalItemArtifact_05_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_05(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
