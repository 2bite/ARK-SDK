#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_DoubleDoorframe_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Tek.PrimalItemStructure_DoubleDoorframe_Tek_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_DoubleDoorframe_Tek_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Tek.PrimalItemStructure_DoubleDoorframe_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
