#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoor_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Stone.PrimalItemStructure_DoubleDoor_Stone_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_DoubleDoor_Stone_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Stone.PrimalItemStructure_DoubleDoor_Stone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
