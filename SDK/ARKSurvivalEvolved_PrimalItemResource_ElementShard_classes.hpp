#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementShard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C");
		return ptr;
	}


	void RefillElementShard(class UPrimalItem* DestinationItem);
	void CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto);
	bool BPSupportUseOntoItem(class UPrimalItem** DestinationItem);
	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	void ExecuteUbergraph_PrimalItemResource_ElementShard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
