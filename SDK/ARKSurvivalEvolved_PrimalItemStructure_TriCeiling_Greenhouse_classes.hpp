#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriCeiling_Greenhouse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Greenhouse.PrimalItemStructure_TriCeiling_Greenhouse_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TriCeiling_Greenhouse_C : public UPrimalItemStructure_BaseCeiling_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Greenhouse.PrimalItemStructure_TriCeiling_Greenhouse_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriCeiling_Greenhouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
