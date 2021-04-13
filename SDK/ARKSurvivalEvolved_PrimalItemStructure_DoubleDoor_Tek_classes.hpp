#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoor_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Tek.PrimalItemStructure_DoubleDoor_Tek_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_DoubleDoor_Tek_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Tek.PrimalItemStructure_DoubleDoor_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
