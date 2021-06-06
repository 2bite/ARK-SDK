#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactSE_01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifactSE_01.PrimalItemArtifactSE_01_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemArtifactSE_01_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifactSE_01.PrimalItemArtifactSE_01_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifactSE_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
