#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_04_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_04.PrimalItemArtifact_04_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArtifact_04_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_04.PrimalItemArtifact_04_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
