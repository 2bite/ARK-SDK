#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TreePlatform_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TreePlatform_Wood_C : public UPrimalItemStructure_BaseLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
