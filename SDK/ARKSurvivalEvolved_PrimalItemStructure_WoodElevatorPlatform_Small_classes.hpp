#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodElevatorPlatform_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodElevatorPlatform_Small.PrimalItemStructure_WoodElevatorPlatform_Small_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemStructure_WoodElevatorPlatform_Small_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodElevatorPlatform_Small.PrimalItemStructure_WoodElevatorPlatform_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodElevatorPlatform_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
