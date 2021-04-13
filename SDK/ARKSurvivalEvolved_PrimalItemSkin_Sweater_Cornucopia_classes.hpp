#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Sweater_Cornucopia_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Sweater_Cornucopia.PrimalItemSkin_Sweater_Cornucopia_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemSkin_Sweater_Cornucopia_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Sweater_Cornucopia.PrimalItemSkin_Sweater_Cornucopia_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Sweater_Cornucopia(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
