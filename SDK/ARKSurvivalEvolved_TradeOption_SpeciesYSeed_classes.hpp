#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SpeciesYSeed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_SpeciesYSeed.TradeOption_SpeciesYSeed_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_SpeciesYSeed_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_SpeciesYSeed.TradeOption_SpeciesYSeed_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_SpeciesYSeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
