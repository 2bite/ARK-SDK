#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TriFoundation_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Stone.PrimalItemStructure_TriFoundation_Stone_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_TriFoundation_Stone_C : public UPrimalItemStructure_BaseFloor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TriFoundation_Stone.PrimalItemStructure_TriFoundation_Stone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TriFoundation_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
