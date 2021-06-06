#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Mushroom_Auric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Mushroom_Auric.TradeOption_Mushroom_Auric_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Mushroom_Auric_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Mushroom_Auric.TradeOption_Mushroom_Auric_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Mushroom_Auric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
