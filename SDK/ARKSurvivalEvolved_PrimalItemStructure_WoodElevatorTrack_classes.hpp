#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodElevatorTrack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_WoodElevatorTrack_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
