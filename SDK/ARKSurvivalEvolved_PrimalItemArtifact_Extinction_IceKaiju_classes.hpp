#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_Extinction_IceKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArtifact_Extinction_IceKaiju.PrimalItemArtifact_Extinction_IceKaiju_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemArtifact_Extinction_IceKaiju_C : public UPrimalItemArtifactGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArtifact_Extinction_IceKaiju.PrimalItemArtifact_Extinction_IceKaiju_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArtifact_Extinction_IceKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif