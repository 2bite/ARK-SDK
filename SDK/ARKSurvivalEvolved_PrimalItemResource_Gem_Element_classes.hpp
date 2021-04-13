#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gem_Element_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gem_Element.PrimalItemResource_Gem_Element_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemResource_Gem_Element_C : public UPrimalItemResource_Gem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gem_Element.PrimalItemResource_Gem_Element_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gem_Element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
