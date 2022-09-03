#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Berry_Stimberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Berry_Stimberry.TradeOption_Berry_Stimberry_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Berry_Stimberry_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Berry_Stimberry.TradeOption_Berry_Stimberry_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Berry_Stimberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
