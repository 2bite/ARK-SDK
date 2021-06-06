#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Wood_OceanPlatform_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Wood_OceanPlatform.PrimalItemStructure_Wood_OceanPlatform_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_Wood_OceanPlatform_C : public UPrimalItemStructure_BaseOceanPlatform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Wood_OceanPlatform.PrimalItemStructure_Wood_OceanPlatform_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Wood_OceanPlatform(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
