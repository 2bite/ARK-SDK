#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriFoundation_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Metal.PrimalItemStructure_TriFoundation_Metal_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_TriFoundation_Metal_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Metal.PrimalItemStructure_TriFoundation_Metal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriFoundation_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
