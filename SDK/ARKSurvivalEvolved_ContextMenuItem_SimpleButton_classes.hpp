#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SimpleButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C
// 0x0010 (0x0328 - 0x0318)
class UContextMenuItem_SimpleButton_C : public UContextMenuItem
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInputKeyDisplayWidget*                      ShortcutKey;                                              // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C");
		return ptr;
	}


	void ExecuteUbergraph_ContextMenuItem_SimpleButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
