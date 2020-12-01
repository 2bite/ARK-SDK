#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_Gravestone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_Furniture_Gravestone_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_Gravestone.PrimalItemStructure_Furniture_Gravestone_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Furniture_Gravestone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
