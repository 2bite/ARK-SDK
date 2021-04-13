#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Styracosaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_Styracosaurus.PrimalItemCostume_Styracosaurus_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemCostume_Styracosaurus_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_Styracosaurus.PrimalItemCostume_Styracosaurus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_Styracosaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
