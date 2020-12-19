#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ExplorerHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ExplorerHat.PrimalItemSkin_ExplorerHat_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_ExplorerHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ExplorerHat.PrimalItemSkin_ExplorerHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ExplorerHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
