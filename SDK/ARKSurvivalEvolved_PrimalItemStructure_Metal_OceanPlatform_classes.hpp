#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Metal_OceanPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Metal_OceanPlatform.PrimalItemStructure_Metal_OceanPlatform_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_Metal_OceanPlatform_C : public UPrimalItemStructure_BaseOceanPlatform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Metal_OceanPlatform.PrimalItemStructure_Metal_OceanPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Metal_OceanPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
