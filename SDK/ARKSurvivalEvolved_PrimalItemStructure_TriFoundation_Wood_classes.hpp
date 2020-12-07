#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriFoundation_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Wood.PrimalItemStructure_TriFoundation_Wood_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_TriFoundation_Wood_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Wood.PrimalItemStructure_TriFoundation_Wood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriFoundation_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
