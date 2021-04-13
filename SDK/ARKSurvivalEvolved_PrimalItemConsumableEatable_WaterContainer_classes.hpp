#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_WaterContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumableEatable_WaterContainer_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
