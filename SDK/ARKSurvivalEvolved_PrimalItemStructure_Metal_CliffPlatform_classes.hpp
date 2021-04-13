#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Metal_CliffPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Metal_CliffPlatform.PrimalItemStructure_Metal_CliffPlatform_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_Metal_CliffPlatform_C : public UPrimalItemStructure_BaseCliffPlatform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Metal_CliffPlatform.PrimalItemStructure_Metal_CliffPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Metal_CliffPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
