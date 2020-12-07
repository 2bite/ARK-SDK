#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ScorchedSword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ScorchedSword.PrimalItemSkin_ScorchedSword_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemSkin_ScorchedSword_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ScorchedSword.PrimalItemSkin_ScorchedSword_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ScorchedSword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
