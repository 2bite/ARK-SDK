#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodTable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodTable.PrimalItemStructure_Furniture_WoodTable_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_Furniture_WoodTable_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodTable.PrimalItemStructure_Furniture_WoodTable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Furniture_WoodTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
