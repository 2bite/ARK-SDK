#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WaterWell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WaterWell.PrimalItemStructure_WaterWell_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemStructure_WaterWell_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WaterWell.PrimalItemStructure_WaterWell_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WaterWell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
