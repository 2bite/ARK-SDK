#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Ghost_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostume_Ghost_Base.PrimalItemCostume_Ghost_Base_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCostume_Ghost_Base_C : public UPrimalItemCostumeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_Ghost_Base.PrimalItemCostume_Ghost_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostume_Ghost_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
