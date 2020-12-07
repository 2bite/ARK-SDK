#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoorframe_Greenhouse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Greenhouse.PrimalItemStructure_DoubleDoorframe_Greenhouse_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_DoubleDoorframe_Greenhouse_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Greenhouse.PrimalItemStructure_DoubleDoorframe_Greenhouse_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Greenhouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
