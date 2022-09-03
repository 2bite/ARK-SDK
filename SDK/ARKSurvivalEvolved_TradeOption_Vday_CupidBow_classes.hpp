#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Vday_CupidBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Vday_CupidBow.TradeOption_Vday_CupidBow_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Vday_CupidBow_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Vday_CupidBow.TradeOption_Vday_CupidBow_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Vday_CupidBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
