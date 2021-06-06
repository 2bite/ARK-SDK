#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodCatwalk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodCatwalk.PrimalItemStructure_WoodCatwalk_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_WoodCatwalk_C : public UPrimalItemStructure_BaseCatwalk_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodCatwalk.PrimalItemStructure_WoodCatwalk_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodCatwalk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
