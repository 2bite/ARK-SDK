#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Charcoal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Charcoal.TradeOption_Charcoal_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Charcoal_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Charcoal.TradeOption_Charcoal_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Charcoal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
