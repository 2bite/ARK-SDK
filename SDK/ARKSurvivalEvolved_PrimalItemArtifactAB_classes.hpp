#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactAB_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifactAB.PrimalItemArtifactAB_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArtifactAB_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifactAB.PrimalItemArtifactAB_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifactAB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
