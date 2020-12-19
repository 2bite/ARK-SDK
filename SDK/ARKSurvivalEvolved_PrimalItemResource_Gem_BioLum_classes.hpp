#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gem_BioLum_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gem_BioLum.PrimalItemResource_Gem_BioLum_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemResource_Gem_BioLum_C : public UPrimalItemResource_Gem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gem_BioLum.PrimalItemResource_Gem_BioLum_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gem_BioLum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
