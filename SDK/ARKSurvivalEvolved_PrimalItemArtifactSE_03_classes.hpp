#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactSE_03_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifactSE_03.PrimalItemArtifactSE_03_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemArtifactSE_03_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifactSE_03.PrimalItemArtifactSE_03_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifactSE_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
