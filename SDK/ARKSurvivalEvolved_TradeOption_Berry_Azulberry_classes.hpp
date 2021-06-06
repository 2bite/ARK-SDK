#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Berry_Azulberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Berry_Azulberry.TradeOption_Berry_Azulberry_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Berry_Azulberry_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Berry_Azulberry.TradeOption_Berry_Azulberry_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Berry_Azulberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
