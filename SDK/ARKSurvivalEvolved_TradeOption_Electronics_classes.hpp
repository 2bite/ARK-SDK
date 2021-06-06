#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Electronics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Electronics.TradeOption_Electronics_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Electronics_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Electronics.TradeOption_Electronics_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Electronics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
