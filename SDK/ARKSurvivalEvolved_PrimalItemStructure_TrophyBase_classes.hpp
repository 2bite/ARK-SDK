#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TrophyBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TrophyBase.PrimalItemStructure_TrophyBase_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_TrophyBase_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TrophyBase.PrimalItemStructure_TrophyBase_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TrophyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
