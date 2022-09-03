#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_MulticraftItem_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_MulticraftItem_Base.PrimalItemConsumable_MulticraftItem_Base_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_MulticraftItem_Base_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_MulticraftItem_Base.PrimalItemConsumable_MulticraftItem_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
