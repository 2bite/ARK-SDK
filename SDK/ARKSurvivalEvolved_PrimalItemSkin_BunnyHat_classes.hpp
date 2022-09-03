#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BunnyHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_BunnyHat.PrimalItemSkin_BunnyHat_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemSkin_BunnyHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_BunnyHat.PrimalItemSkin_BunnyHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_BunnyHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
