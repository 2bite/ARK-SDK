#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalCatwalk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalCatwalk.PrimalItemStructure_MetalCatwalk_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_MetalCatwalk_C : public UPrimalItemStructure_BaseCatwalk_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalCatwalk.PrimalItemStructure_MetalCatwalk_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalCatwalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
