#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_AlphaTuso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ApexDrop_AlphaTuso.PrimalItemResource_ApexDrop_AlphaTuso_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemResource_ApexDrop_AlphaTuso_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_AlphaTuso.PrimalItemResource_ApexDrop_AlphaTuso_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ApexDrop_AlphaTuso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif