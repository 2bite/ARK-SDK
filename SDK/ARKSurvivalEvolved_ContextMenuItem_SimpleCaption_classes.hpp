#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SimpleCaption_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C
// 0x0018 (0x0358 - 0x0340)
class UContextMenuItem_SimpleCaption_C : public UContextMenuItem
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMenuAnchor*                                 Submenu;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SubmenuIndicator;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SimpleCaption.ContextMenuItem_SimpleCaption_C");
		return ptr;
	}


	void ExecuteUbergraph_ContextMenuItem_SimpleCaption(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
