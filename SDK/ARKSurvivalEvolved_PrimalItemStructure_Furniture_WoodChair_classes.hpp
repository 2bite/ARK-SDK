#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodChair_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_Furniture_WoodChair_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
