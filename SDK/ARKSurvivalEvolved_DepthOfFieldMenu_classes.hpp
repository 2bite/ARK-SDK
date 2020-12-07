#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DepthOfFieldMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DepthOfFieldMenu.DepthOfFieldMenu_C
// 0x00E8 (0x0798 - 0x06B0)
class UDepthOfFieldMenu_C : public UUI_DepthOfFieldMenu
{
public:
	class UCustomButtonWidget*                         CancelButton;                                             // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ClearButton;                                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         FarButton;                                                // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     FarTransitionRegionSlider;                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            FarTransitionRegionTextBox;                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     FocalDistanceSlider;                                      // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            FocalDistanceTextBox;                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     FocalRegionSlider;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            FocalRegionTextBox;                                       // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   GaussianCheckBox;                                         // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_127;                                                // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_135;                                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_162;                                                // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_93;                                                 // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     MaxBokehSlider;                                           // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            MaxBokehTextBox;                                          // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MediumButton;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         NearButton;                                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     NearTransitionRegionSlider;                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            NearTransitionRegionTextBox;                              // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     OcclusionSlider;                                          // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            OcclusionTextBox;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         OpenButton;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RevertButton;                                             // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SaveButton;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ScaleSlider;                                              // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            ScaleTextBox;                                             // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             StoredComboBox;                                           // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DepthOfFieldMenu.DepthOfFieldMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_DepthOfFieldMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
