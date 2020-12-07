#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriCeiling_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Adobe.PrimalItemStructure_TriCeiling_Adobe_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_TriCeiling_Adobe_C : public UPrimalItemStructure_BaseCeiling_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Adobe.PrimalItemStructure_TriCeiling_Adobe_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriCeiling_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
