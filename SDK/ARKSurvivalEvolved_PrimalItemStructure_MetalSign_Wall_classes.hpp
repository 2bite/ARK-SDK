#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalSign_Wall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalSign_Wall.PrimalItemStructure_MetalSign_Wall_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_MetalSign_Wall_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalSign_Wall.PrimalItemStructure_MetalSign_Wall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalSign_Wall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
