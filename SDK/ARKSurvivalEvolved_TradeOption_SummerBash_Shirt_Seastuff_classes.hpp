#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_Shirt_Seastuff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_SummerBash_Shirt_Seastuff.TradeOption_SummerBash_Shirt_Seastuff_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_SummerBash_Shirt_Seastuff_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_SummerBash_Shirt_Seastuff.TradeOption_SummerBash_Shirt_Seastuff_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_SummerBash_Shirt_Seastuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
