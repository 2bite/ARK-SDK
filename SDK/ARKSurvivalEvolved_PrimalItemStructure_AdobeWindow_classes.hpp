#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeWindow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeWindow.PrimalItemStructure_AdobeWindow_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_AdobeWindow_C : public UPrimalItemStructure_BaseWindow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeWindow.PrimalItemStructure_AdobeWindow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif