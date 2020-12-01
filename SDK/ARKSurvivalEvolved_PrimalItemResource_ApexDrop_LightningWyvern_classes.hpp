#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_LightningWyvern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ApexDrop_LightningWyvern.PrimalItemResource_ApexDrop_LightningWyvern_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_ApexDrop_LightningWyvern_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_LightningWyvern.PrimalItemResource_ApexDrop_LightningWyvern_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ApexDrop_LightningWyvern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
