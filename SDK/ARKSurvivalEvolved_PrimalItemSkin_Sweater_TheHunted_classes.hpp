#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Sweater_TheHunted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Sweater_TheHunted.PrimalItemSkin_Sweater_TheHunted_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemSkin_Sweater_TheHunted_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Sweater_TheHunted.PrimalItemSkin_Sweater_TheHunted_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Sweater_TheHunted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif