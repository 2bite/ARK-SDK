#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseRoof_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseRoof.PrimalItemStructure_BaseRoof_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_BaseRoof_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseRoof.PrimalItemStructure_BaseRoof_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_BaseRoof(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
