#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_08_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_08.PrimalItemArtifact_08_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemArtifact_08_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_08.PrimalItemArtifact_08_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_08(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
