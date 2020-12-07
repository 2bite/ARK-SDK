#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkinGeneric_Trophy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemSkinGeneric_Trophy_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkinGeneric_Trophy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
