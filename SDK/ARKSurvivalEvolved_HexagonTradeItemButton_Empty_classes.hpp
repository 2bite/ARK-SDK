#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HexagonTradeItemButton_Empty_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HexagonTradeItemButton_Empty.HexagonTradeItemButton_Empty_C
// 0x0000 (0x0240 - 0x0240)
class UHexagonTradeItemButton_Empty_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HexagonTradeItemButton_Empty.HexagonTradeItemButton_Empty_C");
		return ptr;
	}


	void ExecuteUbergraph_HexagonTradeItemButton_Empty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
