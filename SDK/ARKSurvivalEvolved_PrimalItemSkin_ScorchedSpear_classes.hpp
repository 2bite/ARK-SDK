#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ScorchedSpear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_ScorchedSpear_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ScorchedSpear.PrimalItemSkin_ScorchedSpear_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ScorchedSpear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif