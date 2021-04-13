#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeTrapdoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeTrapdoor.PrimalItemStructure_AdobeTrapdoor_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_AdobeTrapdoor_C : public UPrimalItemStructure_BaseTrapdoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeTrapdoor.PrimalItemStructure_AdobeTrapdoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeTrapdoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
