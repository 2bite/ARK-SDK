#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumBeatWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DrumBeatWidget.DrumBeatWidget_C
// 0x0030 (0x0270 - 0x0240)
class UDrumBeatWidget_C : public UUserWidget
{
public:
	class UBorder*                                     CenterLineBorder;                                         // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CircleImage;                                              // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IconImage;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MainPanel;                                                // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ShadowImage;                                              // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultIconOpacity;                                       // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultShadowOpacity;                                     // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DrumBeatWidget.DrumBeatWidget_C");
		return ptr;
	}


	void Set_Widget_Content_Opacity(float NewOpacity);
	void Set_Widget_Coloration(const struct FLinearColor& NewColor);
	void ExecuteUbergraph_DrumBeatWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
