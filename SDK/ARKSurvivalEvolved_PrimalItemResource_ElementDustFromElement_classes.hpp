#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementDustFromElement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ElementDustFromElement.PrimalItemResource_ElementDustFromElement_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemResource_ElementDustFromElement_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ElementDustFromElement.PrimalItemResource_ElementDustFromElement_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ElementDustFromElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
