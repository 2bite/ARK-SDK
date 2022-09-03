#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HexagonTradeItemButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HexagonTradeItemButton.HexagonTradeItemButton_C
// 0x0030 (0x05C8 - 0x0598)
class UHexagonTradeItemButton_C : public UTradeItemButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_212;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ItemCostTextBlock;                                        // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemImage;                                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ItemQuantityTextBlock;                                    // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ItemWeightTextBlock;                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HexagonTradeItemButton.HexagonTradeItemButton_C");
		return ptr;
	}


	void ExecuteUbergraph_HexagonTradeItemButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
