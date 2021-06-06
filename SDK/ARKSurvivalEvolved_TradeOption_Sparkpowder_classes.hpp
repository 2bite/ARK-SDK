#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Sparkpowder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Sparkpowder.TradeOption_Sparkpowder_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Sparkpowder_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Sparkpowder.TradeOption_Sparkpowder_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Sparkpowder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
