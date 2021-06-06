#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Sweater_Trike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Sweater_Trike.PrimalItemSkin_Sweater_Trike_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_Sweater_Trike_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Sweater_Trike.PrimalItemSkin_Sweater_Trike_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Sweater_Trike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
