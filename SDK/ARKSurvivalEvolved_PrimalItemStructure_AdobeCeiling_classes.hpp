#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeCeiling_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeCeiling.PrimalItemStructure_AdobeCeiling_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_AdobeCeiling_C : public UPrimalItemStructure_BaseCeiling_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeCeiling.PrimalItemStructure_AdobeCeiling_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeCeiling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
