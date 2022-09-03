#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Flamethrower_SuperSoaker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemSkin_Flamethrower_SuperSoaker_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Flamethrower_SuperSoaker.PrimalItemSkin_Flamethrower_SuperSoaker_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Flamethrower_SuperSoaker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
