#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Obsidian_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Obsidian.TradeOption_Obsidian_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Obsidian_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Obsidian.TradeOption_Obsidian_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Obsidian(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
