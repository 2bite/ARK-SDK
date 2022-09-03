#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_EngramPoints_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_EngramPoints.TradeOption_EngramPoints_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_EngramPoints_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_EngramPoints.TradeOption_EngramPoints_C");
		return ptr;
	}


	bool BPAllowedToBePurchased(class AShooterPlayerController** PlayerController);
	bool BPOverrideTradeAction(class AShooterPlayerController** PlayerController);
	int BPGetItemCost(class AShooterPlayerController** PlayerController);
	void ExecuteUbergraph_TradeOption_EngramPoints(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
