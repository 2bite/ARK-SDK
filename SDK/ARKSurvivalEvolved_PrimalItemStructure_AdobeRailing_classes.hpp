#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeRailing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeRailing.PrimalItemStructure_AdobeRailing_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_AdobeRailing_C : public UPrimalItemStructure_BaseRailing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeRailing.PrimalItemStructure_AdobeRailing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeRailing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
