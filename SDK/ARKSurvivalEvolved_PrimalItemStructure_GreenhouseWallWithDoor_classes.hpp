#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseWallWithDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_GreenhouseWallWithDoor.PrimalItemStructure_GreenhouseWallWithDoor_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_GreenhouseWallWithDoor_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_GreenhouseWallWithDoor.PrimalItemStructure_GreenhouseWallWithDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_GreenhouseWallWithDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif