#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_LootCrate_lvl3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_LootCrate_lvl3.TradeOption_LootCrate_lvl3_C
// 0x0000 (0x0078 - 0x0078)
class UTradeOption_LootCrate_lvl3_C : public UTradeOption_LootCrate_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_LootCrate_lvl3.TradeOption_LootCrate_lvl3_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_LootCrate_lvl3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
