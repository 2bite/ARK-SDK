#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_LootCrate_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C
// 0x0008 (0x0078 - 0x0070)
class UTradeOption_LootCrate_Base_C : public UHexagonTradableOption
{
public:
	bool                                               Ret_Val;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                required_minimum_level;                                   // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C");
		return ptr;
	}


	bool BPOverrideTradeAction(class AShooterPlayerController** PlayerController);
	bool BPAllowedToBePurchased(class AShooterPlayerController** PlayerController);
	void ExecuteUbergraph_TradeOption_LootCrate_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
