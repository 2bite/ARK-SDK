#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_XmasLights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_XmasLights.PrimalItemStructure_XmasLights_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_XmasLights_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_XmasLights.PrimalItemStructure_XmasLights_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_XmasLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
