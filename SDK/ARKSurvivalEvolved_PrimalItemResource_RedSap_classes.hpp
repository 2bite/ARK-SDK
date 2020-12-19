#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RedSap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_RedSap.PrimalItemResource_RedSap_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemResource_RedSap_C : public UPrimalItemResource_Gem_Element_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_RedSap.PrimalItemResource_RedSap_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_RedSap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
