#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostumeGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCostumeGeneric.PrimalItemCostumeGeneric_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemCostumeGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostumeGeneric.PrimalItemCostumeGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemCostumeGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif