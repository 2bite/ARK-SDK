#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Element_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Element.TradeOption_Element_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Element_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Element.TradeOption_Element_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
