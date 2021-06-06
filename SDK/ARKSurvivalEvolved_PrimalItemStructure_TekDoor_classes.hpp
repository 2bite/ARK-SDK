#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekDoor.PrimalItemStructure_TekDoor_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_TekDoor_C : public UPrimalItemStructure_BaseDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekDoor.PrimalItemStructure_TekDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
